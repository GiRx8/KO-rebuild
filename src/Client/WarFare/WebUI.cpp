#include "StdAfx.h"
#include "WebUI.h"
#include "GameProcedure.h"
#include "PlayerMySelf.h"
#include "GameProcMain.h"
#include "UIStateBar.h"
#include "UIHotKeyDlg.h"
#include "UISkillTreeDlg.h"
#include "N3UIIcon.h"
#include "MagicSkillMng.h"
#include "UIExitMenu.h"
#include "UICmdList.h"
#include "UIChat.h"
#include "UIInventory.h"
#include "UIVarious.h"
#include <N3Base/N3UIImage.h>
#include <N3Base/N3Texture.h>
#include "IconItemSkill.h"
#include "PlayerOther.h"
#include "PlayerOtherMgr.h"
#include "PacketDef.h"
#include <spdlog/fmt/fmt.h>
#include <filesystem>
#include <d3dx9.h>
#include <N3Base/N3Base.h>
#include <AppCore/Platform.h>
#include <iostream>

CWebUI* CWebUI::s_pInstance = nullptr;

CWebUI* CWebUI::Instance()
{
	if (!s_pInstance)
	{
		s_pInstance = new CWebUI();
	}
	return s_pInstance;
}

void CWebUI::ReleaseInstance()
{
	if (s_pInstance)
	{
		delete s_pInstance;
		s_pInstance = nullptr;
	}
}

CWebUI::CWebUI()
{
}

CWebUI::~CWebUI()
{
	Shutdown();
}

bool CWebUI::Init(int width, int height)
{
	if (m_bInitialized)
		return true;

	m_iWidth = width;
	m_iHeight = height;

	try
	{
		// Set Platform Interfaces (AppCore implements native file system & font loader)
		ultralight::Platform& platform = ultralight::Platform::instance();
		platform.set_font_loader(ultralight::GetPlatformFontLoader());
		platform.set_file_system(ultralight::GetPlatformFileSystem("./"));
		platform.set_logger(ultralight::GetDefaultLogger("ultralight.log"));

		// Initialize Config on Platform
		ultralight::Config config;
		config.resource_path_prefix = "resources/";
		platform.set_config(config);

		// Initialize Renderer
		m_pRenderer = ultralight::Renderer::Create();

		// Initialize View
		ultralight::ViewConfig viewConfig;
		viewConfig.is_transparent = true;
		viewConfig.initial_device_scale = 1.0;
		m_pView = m_pRenderer->CreateView(width, height, viewConfig, nullptr);
		m_pView->set_view_listener(this);

		m_bInitialized = true;
		return true;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Failed to initialize Ultralight: " << e.what() << std::endl;
		return false;
	}
}

void CWebUI::Shutdown()
{
	if (!m_bInitialized)
		return;

	m_pView = nullptr;
	m_pRenderer = nullptr;

	if (m_lpD3DTexture)
	{
		m_lpD3DTexture->Release();
		m_lpD3DTexture = nullptr;
	}

	m_bInitialized = false;
}

void CWebUI::Update()
{
	if (!m_bInitialized || !m_pRenderer)
		return;

	UpdatePlayerData();
	m_pRenderer->Update();

}

std::string CWebUI::ConvertToUTF8(const std::string& str)
{
	if (str.empty()) return "";
	int wlen = MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, nullptr, 0);
	if (wlen <= 0) return str;
	std::vector<wchar_t> wbuf(wlen);
	MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, wbuf.data(), wlen);
	int u8len = WideCharToMultiByte(CP_UTF8, 0, wbuf.data(), -1, nullptr, 0, nullptr, nullptr);
	if (u8len <= 0) return str;
	std::vector<char> u8buf(u8len);
	WideCharToMultiByte(CP_UTF8, 0, wbuf.data(), -1, u8buf.data(), u8len, nullptr, nullptr);
	return std::string(u8buf.data());
}

void CWebUI::UpdatePlayerData()
{
	if (!m_bInitialized || !m_pView)
		return;

	CPlayerMySelf* pPlayer = CGameProcedure::s_pPlayer;
	if (!pPlayer)
		return;

	std::string name = ConvertToUTF8(pPlayer->m_InfoBase.szID);
	int level = pPlayer->m_InfoBase.iLevel;
	int hp = pPlayer->m_InfoBase.iHP;
	int hpMax = pPlayer->m_InfoBase.iHPMax;
	int mp = pPlayer->m_InfoExt.iMSP;
	int mpMax = pPlayer->m_InfoExt.iMSPMax;
	int64_t exp = pPlayer->m_InfoExt.iExp;
	int64_t expMax = pPlayer->m_InfoExt.iExpNext;
	int classId = pPlayer->m_InfoBase.eClass;

	// Get player yaw and calculate relative positions of nearby entities
	float yaw = pPlayer->Yaw();
	std::string entitiesJson = "[]";
	CGameProcMain* pProcMain = CGameProcedure::s_pProcMain;
	if (pProcMain && pProcMain->m_pUIStateBarAndMiniMap)
	{
		CUIStateBar* pStateBar = pProcMain->m_pUIStateBarAndMiniMap;
		if (pStateBar->IsVisible())
		{
			std::string jsonBuilder = "[";
			bool first = true;
			
			auto addEntity = [&](const __PositionInfo& info) {
				if (!first) jsonBuilder += ",";
				first = false;
				
				float dx = info.vPos.x - pPlayer->Position().x;
				float dz = info.vPos.z - pPlayer->Position().z;
				
				unsigned char a = (info.crType >> 24) & 0xFF;
				unsigned char r = (info.crType >> 16) & 0xFF;
				unsigned char g = (info.crType >> 8) & 0xFF;
				unsigned char b = info.crType & 0xFF;
				
				std::string colorStr = fmt::format("rgba({},{},{},{})", r, g, b, (float)a / 255.0f);
				if (a == 0) colorStr = "rgb(255, 255, 255)";
				
				jsonBuilder += fmt::format("{{\"dx\":{:.2f},\"dz\":{:.2f},\"color\":\"{}\"}}", dx, dz, colorStr);
			};

			for (const auto& info : pStateBar->m_Positions) {
				addEntity(info);
			}
			for (const auto& info : pStateBar->m_PositionsTop) {
				addEntity(info);
			}

			jsonBuilder += "]";
			entitiesJson = jsonBuilder;
		}
	}

	// Query active hotkeys, save icons, and get screen positions and cooldown ratios
	std::string hotkeysJson = "[]";
	if (pProcMain && pProcMain->m_pUIHotKeyDlg)
	{
		CUIHotKeyDlg* pHotkeyDlg = pProcMain->m_pUIHotKeyDlg;
		std::string jsonBuilder = "[";
		for (int k = 0; k < 8; k++)
		{
			if (k > 0) jsonBuilder += ",";
			
			int x = 0, y = 0, w = 0, h = 0;
			CN3UIArea* pArea = pHotkeyDlg->GetChildAreaByiOrder(UI_AREA_TYPE_SKILL_HOTKEY, k);
			if (pArea != nullptr)
			{
				RECT rc = pArea->GetRegion();
				x = rc.left;
				y = rc.top;
				w = rc.right - rc.left;
				h = rc.bottom - rc.top;
			}

			std::string iconPath = "";
			float cooldownProgress = 0.0f;
			__IconItemSkill* pSkill = pHotkeyDlg->m_pMyHotkey[pHotkeyDlg->m_iCurPage][k];
			if (pSkill != nullptr)
			{
				iconPath = ConvertAndGetIconPath(pSkill);
				
				float fCooldown = pProcMain->m_pMagicSkillMng->GetCooldown(pSkill->pSkill);
				if (fCooldown > 0.0f && pSkill->pSkill != nullptr && pSkill->pSkill->iReCastTime > 0)
				{
					cooldownProgress = fCooldown / (static_cast<float>(pSkill->pSkill->iReCastTime) / 10.0f);
					cooldownProgress = std::clamp(cooldownProgress, 0.0f, 1.0f);
				}
			}

			jsonBuilder += fmt::format(
				"{{\"x\":{},\"y\":{},\"w\":{},\"h\":{},\"icon\":\"{}\",\"cooldown\":{:.2f}}}",
				x, y, w, h, iconPath, cooldownProgress
			);
		}
		jsonBuilder += "]";
		hotkeysJson = jsonBuilder;
	}

	// Query minimap texture path and UV coordinates
	std::string mapPath = "";
	float mapX1 = 0.0f, mapY1 = 0.0f, mapX2 = 0.0f, mapY2 = 0.0f;
	if (pProcMain && pProcMain->m_pUIStateBarAndMiniMap)
	{
		CUIStateBar* pStateBar = pProcMain->m_pUIStateBarAndMiniMap;
		if (pStateBar->m_pImage_Map != nullptr)
		{
			CN3Texture* pMapTex = pStateBar->m_pImage_Map->GetTex();
			if (pMapTex != nullptr && pMapTex->Get() != nullptr)
			{
				mapPath = ConvertMapTextureToPng(pMapTex);
			}

			if (pStateBar->m_fMapSizeX > 0.0f && pStateBar->m_fMapSizeZ > 0.0f && pStateBar->m_fZoom > 0.0f)
			{
				float fOffset = (0.5f / pStateBar->m_fZoom);
				float fX      = (pStateBar->m_vViewPos.x / pStateBar->m_fMapSizeX);
				float fY      = (pStateBar->m_vViewPos.z / pStateBar->m_fMapSizeZ);

				mapX1 = fX - fOffset;
				mapY1 = fY + fOffset;
				mapX2 = fX + fOffset;
				mapY2 = fY - fOffset;
			}
		}
	}

	// Query equipped items and inventory items
	std::string equipJson = "[]";
	std::string invJson = "[]";
	if (pProcMain && pProcMain->m_pUIInventory)
	{
		CUIInventory* pInv = pProcMain->m_pUIInventory;

		// Equipped items (slots)
		std::string jsonBuilderEquip = "[";
		bool firstEquip = true;
		for (int i = 0; i < ITEM_SLOT_COUNT; i++)
		{
			__IconItemSkill* pItem = pInv->m_pMySlot[i];
			if (pItem != nullptr && pItem->pItemBasic != nullptr)
			{
				if (!firstEquip) jsonBuilderEquip += ",";
				firstEquip = false;

				std::string iconPath = ConvertAndGetIconPath(pItem);
				std::string nameEscaped = "";
				std::string utf8Name = ConvertToUTF8(pItem->pItemBasic->szName);
				for (char c : utf8Name)
				{
					if (c == '"') nameEscaped += "\\\"";
					else if (c == '\\') nameEscaped += "\\\\";
					else nameEscaped += c;
				}

				jsonBuilderEquip += fmt::format(
					"{{\"pos\":{},\"id\":{},\"count\":{},\"durability\":{},\"durabilityMax\":{},\"name\":\"{}\",\"icon\":\"{}\"}}",
					i, pItem->pItemBasic->dwID, pItem->iCount, pItem->iDurability, pItem->pItemBasic->siMaxDurability, nameEscaped, iconPath
				);
			}
		}
		jsonBuilderEquip += "]";
		equipJson = jsonBuilderEquip;

		// Inventory bag items
		std::string jsonBuilderInv = "[";
		bool firstInv = true;
		for (int i = 0; i < MAX_ITEM_INVENTORY; i++)
		{
			__IconItemSkill* pItem = pInv->m_pMyInvWnd[i];
			if (pItem != nullptr && pItem->pItemBasic != nullptr)
			{
				if (!firstInv) jsonBuilderInv += ",";
				firstInv = false;

				std::string iconPath = ConvertAndGetIconPath(pItem);
				std::string nameEscaped = "";
				std::string utf8Name = ConvertToUTF8(pItem->pItemBasic->szName);
				for (char c : utf8Name)
				{
					if (c == '"') nameEscaped += "\\\"";
					else if (c == '\\') nameEscaped += "\\\\";
					else nameEscaped += c;
				}

				jsonBuilderInv += fmt::format(
					"{{\"pos\":{},\"id\":{},\"count\":{},\"durability\":{},\"durabilityMax\":{},\"name\":\"{}\",\"icon\":\"{}\"}}",
					i, pItem->pItemBasic->dwID, pItem->iCount, pItem->iDurability, pItem->pItemBasic->siMaxDurability, nameEscaped, iconPath
				);
			}
		}
		jsonBuilderInv += "]";
		invJson = jsonBuilderInv;
	}

	// Query skill tree data
	bool isSkillTreeVisible = false;
	std::string skillsJson = "[]";
	std::string skillPointsJson = "[]";
	if (pProcMain && pProcMain->m_pUISkillTreeDlg)
	{
		CUISkillTreeDlg* pSkillTree = pProcMain->m_pUISkillTreeDlg;
		isSkillTreeVisible = pSkillTree->IsVisible();

		// Serialize skill points: [extraPts, cat1..cat4 display, cat5..cat8 invested]
		std::string spJson = "[";
		for (int i = 0; i < 9; i++)
		{
			if (i > 0) spJson += ",";
			spJson += std::to_string(pSkillTree->m_iSkillInfo[i]);
		}
		spJson += "]";
		skillPointsJson = spJson;

		// Serialize all skills
		std::string skJson = "[";
		bool firstSk = true;
		for (int cat = 0; cat < 5; cat++)
		{
			for (int pg = 0; pg < 7; pg++)
			{
				for (int sl = 0; sl < 6; sl++)
				{
					__IconItemSkill* pItem = pSkillTree->m_pMySkillTree[cat][pg][sl];
					if (pItem == nullptr || pItem->pSkill == nullptr)
						continue;

					if (!firstSk) skJson += ",";
					firstSk = false;

					std::string iconPath = ConvertAndGetIconPath(pItem);
					std::string nameEsc = "";
					std::string utf8Name = ConvertToUTF8(pItem->pSkill->szName);
					for (char c : utf8Name)
					{
						if (c == '"') nameEsc += "\\\"";
						else if (c == '\\') nameEsc += "\\\\";
						else nameEsc += c;
					}
					std::string descEsc = "";
					std::string utf8Desc = ConvertToUTF8(pItem->pSkill->szDesc);
					for (char c : utf8Desc)
					{
						if (c == '"') descEsc += "\\\"";
						else if (c == '\\') descEsc += "\\\\";
						else descEsc += c;
					}

					bool usable = pSkillTree->IsSkillUsable(pItem->pSkill);

					skJson += fmt::format(
						"{{\"id\":{},\"cat\":{},\"pg\":{},\"sl\":{},\"name\":\"{}\",\"desc\":\"{}\",\"icon\":\"{}\",\"mp\":{},\"lvl\":{},\"cd\":{},\"usable\":{}}}",
						pItem->pSkill->dwID, cat, pg, sl, nameEsc, descEsc, iconPath,
						pItem->pSkill->iExhaustMSP, pItem->pSkill->iNeedLevel,
						pItem->pSkill->iReCastTime, usable ? "true" : "false"
					);
				}
			}
		}
		skJson += "]";
		skillsJson = skJson;
	}

	bool isInGame = (CGameProcedure::s_pProcActive == CGameProcedure::s_pProcMain);
	bool isInventoryVisible = false;
	if (pProcMain && pProcMain->m_pUIInventory)
	{
		isInventoryVisible = pProcMain->m_pUIInventory->IsVisible();
	}

	std::string nationStr = "";
	CGameBase::GetTextByNation(pPlayer->m_InfoBase.eNation, nationStr);
	if (nationStr.empty())
	{
		if (pPlayer->m_InfoBase.eNation == NATION_KARUS) nationStr = "Karus";
		else if (pPlayer->m_InfoBase.eNation == NATION_ELMORAD) nationStr = "El Morad";
		else nationStr = "Unknown";
	}

	std::string raceStr = "";
	CGameBase::GetTextByRace(pPlayer->m_InfoBase.eRace, raceStr);
	if (raceStr.empty())
	{
		switch (pPlayer->m_InfoBase.eRace)
		{
			case RACE_EL_BABARIAN: raceStr = "Barbarian"; break;
			case RACE_EL_MAN: raceStr = "El Moradian Male"; break;
			case RACE_EL_WOMEN: raceStr = "El Moradian Female"; break;
			case RACE_KA_ARKTUAREK: raceStr = "Arch Tuarek"; break;
			case RACE_KA_TUAREK: raceStr = "Tuarek"; break;
			case RACE_KA_WRINKLETUAREK: raceStr = "Wrinkle Tuarek"; break;
			case RACE_KA_PURITUAREK: raceStr = "Puri Tuarek"; break;
			default: raceStr = "Unknown"; break;
		}
	}

	std::string clanNameEscaped = "";
	for (char c : pPlayer->m_InfoExt.szKnights)
	{
		if (c == '"' || c == '\\') clanNameEscaped += '\\';
		clanNameEscaped += c;
	}
	if (clanNameEscaped.empty()) clanNameEscaped = "None";

	std::string clanMembersJson = "[]";
	if (pProcMain && pProcMain->m_pUIVar && pProcMain->m_pUIVar->m_pPageKnights)
	{
		clanMembersJson = pProcMain->m_pUIVar->m_pPageKnights->GetMemberListJson();
	}

	// Serialize character stats
	std::string statsJson = fmt::format(
		"{{"
		"\"str\":{},\"str_bonus\":{},"
		"\"sta\":{},\"sta_bonus\":{},"
		"\"pointer_events\":\"auto\"," // keep field names clean
		"\"dex\":{},\"dex_bonus\":{},"
		"\"int\":{},\"int_bonus\":{},"
		"\"cha\":{},\"cha_bonus\":{},"
		"\"atk\":{},\"def\":{},"
		"\"weight\":{},\"weightMax\":{},"
		"\"np\":{},\"np_monthly\":{},"
		"\"points_avail\":{},"
		"\"gold\":{},"
		"\"nation\":\"{}\",\"race\":\"{}\","
		"\"clan\":\"{}\",\"clan_grade\":{},\"clan_rank\":{},"
		"\"clan_members\":{},"
		"\"regist\":{{"
		"\"fire\":{},\"cold\":{},\"light\":{},\"magic\":{},\"curse\":{},\"poison\":{}"
		"}}"
		"}}",
		pPlayer->m_InfoExt.iStrength, pPlayer->m_InfoExt.iStrength_Delta,
		pPlayer->m_InfoExt.iStamina, pPlayer->m_InfoExt.iStamina_Delta,
		pPlayer->m_InfoExt.iDexterity, pPlayer->m_InfoExt.iDexterity_Delta,
		pPlayer->m_InfoExt.iIntelligence, pPlayer->m_InfoExt.iIntelligence_Delta,
		pPlayer->m_InfoExt.iMagicAttak, pPlayer->m_InfoExt.iMagicAttak_Delta,
		pPlayer->m_InfoExt.iAttack, pPlayer->m_InfoExt.iGuard,
		pPlayer->m_InfoExt.iWeight, pPlayer->m_InfoExt.iWeightMax,
		pPlayer->m_InfoExt.iRealmPoint, pPlayer->m_InfoExt.iRealmPointMonthly,
		pPlayer->m_InfoExt.iBonusPointRemain,
		pPlayer->m_InfoExt.iGold,
		nationStr, raceStr,
		clanNameEscaped, pPlayer->m_InfoExt.iKnightsGrade, pPlayer->m_InfoExt.iKnightsRank,
		clanMembersJson,
		pPlayer->m_InfoExt.iRegistFire, pPlayer->m_InfoExt.iRegistCold, pPlayer->m_InfoExt.iRegistLight,
		pPlayer->m_InfoExt.iRegistMagic, pPlayer->m_InfoExt.iRegistCurse, pPlayer->m_InfoExt.iRegistPoison
	);

	bool isStateVisible = false;
	if (pProcMain && pProcMain->m_pUIVar)
	{
		isStateVisible = pProcMain->m_pUIVar->IsVisible();
	}

	std::string js = fmt::format(
		"if (window.updatePlayerStats) {{ window.updatePlayerStats('{}', {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, '{}', {:.4f}, {:.4f}, {:.4f}, {:.4f}, {}, {}, {}, {}, {}, {}, {}); }}",
		name, level, hp, hpMax, mp, mpMax, exp, expMax, classId, yaw, entitiesJson, isInGame ? "true" : "false", isInventoryVisible ? "true" : "false", hotkeysJson,
		mapPath, mapX1, mapY1, mapX2, mapY2, equipJson, invJson,
		isSkillTreeVisible ? "true" : "false", skillsJson, skillPointsJson, statsJson, isStateVisible ? "true" : "false"
	);

	FILE* f = fopen("webui_console.log", "a");
	if (f)
	{
		fprintf(f, "[C++ JS Call] %s\n", js.c_str());
		fclose(f);
	}

	m_pView->EvaluateScript(js.c_str());
}

void CWebUI::UpdateTexture()
{
	if (!m_bInitialized || !m_pView || !CN3Base::s_lpD3DDev)
		return;

	ultralight::Surface* surface = m_pView->surface();
	if (!surface)
		return;

	ultralight::BitmapSurface* bitmap_surface = static_cast<ultralight::BitmapSurface*>(surface);
	if (bitmap_surface->dirty_bounds().IsEmpty())
		return;

	ultralight::RefPtr<ultralight::Bitmap> bitmap = bitmap_surface->bitmap();
	if (bitmap->IsEmpty())
		return;

	// Lazy creation of Direct3D 9 texture
	if (!m_lpD3DTexture)
	{
		HRESULT hr = CN3Base::s_lpD3DDev->CreateTexture(
			m_iWidth, m_iHeight, 1, D3DUSAGE_DYNAMIC, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &m_lpD3DTexture, nullptr);
		if (FAILED(hr))
		{
			std::cerr << "Failed to create Direct3D 9 texture for Ultralight: " << hr << std::endl;
			return;
		}
	}

	// Lock texture and copy pixels from Ultralight bitmap
	D3DLOCKED_RECT lockedRect;
	HRESULT hr = m_lpD3DTexture->LockRect(0, &lockedRect, nullptr, D3DLOCK_DISCARD);
	if (SUCCEEDED(hr))
	{
		BYTE* dest = (BYTE*)lockedRect.pBits;
		const BYTE* src = (const BYTE*)bitmap->LockPixels();
		int rowBytes = bitmap->row_bytes();

		if (src)
		{
			for (int y = 0; y < m_iHeight; ++y)
			{
				memcpy(dest + y * lockedRect.Pitch, src + y * rowBytes, rowBytes);
			}
			bitmap->UnlockPixels();
		}
		m_lpD3DTexture->UnlockRect(0);
	}

	bitmap_surface->ClearDirtyBounds();
}

void CWebUI::Render()
{
	if (!m_bInitialized || !m_pRenderer)
		return;

	// Render view offscreen
	m_pRenderer->Render();

	// Update texture from offscreen bitmap if dirty
	UpdateTexture();

	if (!m_lpD3DTexture || !CN3Base::s_lpD3DDev)
		return;

	// Render texture as full-screen 2D quad overlay
	// NOTE: Direct3D 9 pre-transformed vertices require a -0.5 pixel offset
	// to correctly align texel centers with pixel centers. Without this,
	// the GPU samples between texels, causing blurry text and gradient artifacts.
	__VertexTransformed vertices[4];
	float w = (float)m_iWidth;
	float h = (float)m_iHeight;

	// sx, sy, sz, rhw, color, tu, tv
	vertices[0].Set(-0.5f,     -0.5f,     0.0f, 1.0f, 0xFFFFFFFF, 0.0f, 0.0f);
	vertices[1].Set(w - 0.5f,  -0.5f,     0.0f, 1.0f, 0xFFFFFFFF, 1.0f, 0.0f);
	vertices[2].Set(w - 0.5f,  h - 0.5f,  0.0f, 1.0f, 0xFFFFFFFF, 1.0f, 1.0f);
	vertices[3].Set(-0.5f,     h - 0.5f,  0.0f, 1.0f, 0xFFFFFFFF, 0.0f, 1.0f);

	// Backup render states
	DWORD dwZEnable, dwAlphaBlend, dwSrcBlend, dwDestBlend, dwFog, dwMagFilter, dwMinFilter, dwMipFilter;
	CN3Base::s_lpD3DDev->GetRenderState(D3DRS_ZENABLE, &dwZEnable);
	CN3Base::s_lpD3DDev->GetRenderState(D3DRS_ALPHABLENDENABLE, &dwAlphaBlend);
	CN3Base::s_lpD3DDev->GetRenderState(D3DRS_SRCBLEND, &dwSrcBlend);
	CN3Base::s_lpD3DDev->GetRenderState(D3DRS_DESTBLEND, &dwDestBlend);
	CN3Base::s_lpD3DDev->GetRenderState(D3DRS_FOGENABLE, &dwFog);
	CN3Base::s_lpD3DDev->GetSamplerState(0, D3DSAMP_MAGFILTER, &dwMagFilter);
	CN3Base::s_lpD3DDev->GetSamplerState(0, D3DSAMP_MINFILTER, &dwMinFilter);
	CN3Base::s_lpD3DDev->GetSamplerState(0, D3DSAMP_MIPFILTER, &dwMipFilter);

	// Set UI rendering states
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_ZENABLE, FALSE);
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_ALPHABLENDENABLE, TRUE);
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_FOGENABLE, FALSE);
	CN3Base::s_lpD3DDev->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_NONE);
	CN3Base::s_lpD3DDev->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_NONE);
	CN3Base::s_lpD3DDev->SetSamplerState(0, D3DSAMP_MIPFILTER, D3DTEXF_NONE);

	CN3Base::s_lpD3DDev->SetFVF(FVF_TRANSFORMED);
	CN3Base::s_lpD3DDev->SetTexture(0, m_lpD3DTexture);
	CN3Base::s_lpD3DDev->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_MODULATE);
	CN3Base::s_lpD3DDev->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
	CN3Base::s_lpD3DDev->SetTextureStageState(0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);

	CN3Base::s_lpD3DDev->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, vertices, sizeof(__VertexTransformed));

	// Restore render states
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_ZENABLE, dwZEnable);
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_ALPHABLENDENABLE, dwAlphaBlend);
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_SRCBLEND, dwSrcBlend);
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_DESTBLEND, dwDestBlend);
	CN3Base::s_lpD3DDev->SetRenderState(D3DRS_FOGENABLE, dwFog);
	CN3Base::s_lpD3DDev->SetSamplerState(0, D3DSAMP_MAGFILTER, dwMagFilter);
	CN3Base::s_lpD3DDev->SetSamplerState(0, D3DSAMP_MINFILTER, dwMinFilter);
	CN3Base::s_lpD3DDev->SetSamplerState(0, D3DSAMP_MIPFILTER, dwMipFilter);
}

void CWebUI::LoadURL(const std::string& url)
{
	if (!m_bInitialized || !m_pView)
		return;

	m_pView->LoadURL(url.c_str());
}

void CWebUI::LoadHTML(const std::string& html)
{
	if (!m_bInitialized || !m_pView)
		return;

	m_pView->LoadHTML(html.c_str());
}

bool CWebUI::IsUIPixelActive(int x, int y)
{
	CGameProcMain* pProcMain = CGameProcedure::s_pProcMain;
	if (pProcMain && pProcMain->m_pUIHotKeyDlg && pProcMain->m_pUIHotKeyDlg->IsVisible())
	{
		RECT rc = pProcMain->m_pUIHotKeyDlg->GetRegion();
		if (x >= rc.left && x <= rc.right && y >= rc.top && y <= rc.bottom)
		{
			bool bOverSlot = false;
			for (int i = 0; i < 8; i++)
			{
				CN3UIArea* pArea = pProcMain->m_pUIHotKeyDlg->GetChildAreaByiOrder(UI_AREA_TYPE_SKILL_HOTKEY, i);
				if (pArea)
				{
					RECT rcArea = pArea->GetRegion();
					if (x >= rcArea.left && x <= rcArea.right && y >= rcArea.top && y <= rcArea.bottom)
					{
						bOverSlot = true;
						break;
					}
				}
			}
			if (bOverSlot)
				return true;
			else
				return false;
		}
	}

	if (x < 0 || x >= m_iWidth || y < 0 || y >= m_iHeight)
		return false;

	if (!m_pView)
		return false;

	ultralight::Surface* surface = m_pView->surface();
	if (!surface)
		return false;

	ultralight::BitmapSurface* bitmap_surface = static_cast<ultralight::BitmapSurface*>(surface);
	ultralight::RefPtr<ultralight::Bitmap> bitmap = bitmap_surface->bitmap();
	if (bitmap->IsEmpty())
		return false;

	const BYTE* pixels = (const BYTE*)bitmap->LockPixels();
	if (!pixels)
		return false;

	int rowBytes = bitmap->row_bytes();
	// BGRA format: Alpha is at index 3
	int index = y * rowBytes + x * 4;
	BYTE alpha = pixels[index + 3];

	bitmap->UnlockPixels();

	// Alpha threshold for click-through
	return alpha > 10;
}

bool CWebUI::HandleMessage(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	if (!m_bInitialized || !m_pView)
		return false;

	switch (message)
	{
		case WM_MOUSEMOVE:
		{
			int x = (int)(short)LOWORD(lParam);
			int y = (int)(short)HIWORD(lParam);
			ultralight::MouseEvent evt;
			evt.type = ultralight::MouseEvent::kType_MouseMoved;
			evt.x = x;
			evt.y = y;
			if (m_bLButtonDown)
				evt.button = ultralight::MouseEvent::kButton_Left;
			else if (m_bRButtonDown)
				evt.button = ultralight::MouseEvent::kButton_Right;
			else
				evt.button = ultralight::MouseEvent::kButton_None;
			m_pView->FireMouseEvent(evt);
			if (m_bLButtonDown || m_bRButtonDown || IsUIPixelActive(x, y))
				return true;
			break;
		}
		case WM_LBUTTONDOWN:
		case WM_LBUTTONDBLCLK:
		{
			int x = (int)(short)LOWORD(lParam);
			int y = (int)(short)HIWORD(lParam);
			if (IsUIPixelActive(x, y))
			{
				m_bLButtonDown = true;
				::SetCapture(hWnd);
				ultralight::MouseEvent evt;
				evt.type = ultralight::MouseEvent::kType_MouseDown;
				evt.x = x;
				evt.y = y;
				evt.button = ultralight::MouseEvent::kButton_Left;
				m_pView->FireMouseEvent(evt);
				return true; // Intercept click
			}
			break;
		}
		case WM_LBUTTONUP:
		{
			int x = (int)(short)LOWORD(lParam);
			int y = (int)(short)HIWORD(lParam);
			if (m_bLButtonDown)
			{
				m_bLButtonDown = false;
				::ReleaseCapture();
				ultralight::MouseEvent evt;
				evt.type = ultralight::MouseEvent::kType_MouseUp;
				evt.x = x;
				evt.y = y;
				evt.button = ultralight::MouseEvent::kButton_Left;
				m_pView->FireMouseEvent(evt);
				return true;
			}
			else if (IsUIPixelActive(x, y))
			{
				ultralight::MouseEvent evt;
				evt.type = ultralight::MouseEvent::kType_MouseUp;
				evt.x = x;
				evt.y = y;
				evt.button = ultralight::MouseEvent::kButton_Left;
				m_pView->FireMouseEvent(evt);
				return true;
			}
			break;
		}
		case WM_RBUTTONDOWN:
		case WM_RBUTTONDBLCLK:
		{
			int x = (int)(short)LOWORD(lParam);
			int y = (int)(short)HIWORD(lParam);
			if (IsUIPixelActive(x, y))
			{
				m_bRButtonDown = true;
				::SetCapture(hWnd);
				ultralight::MouseEvent evt;
				evt.type = ultralight::MouseEvent::kType_MouseDown;
				evt.x = x;
				evt.y = y;
				evt.button = ultralight::MouseEvent::kButton_Right;
				m_pView->FireMouseEvent(evt);
				return true;
			}
			break;
		}
		case WM_RBUTTONUP:
		{
			int x = (int)(short)LOWORD(lParam);
			int y = (int)(short)HIWORD(lParam);
			if (m_bRButtonDown)
			{
				m_bRButtonDown = false;
				::ReleaseCapture();
				ultralight::MouseEvent evt;
				evt.type = ultralight::MouseEvent::kType_MouseUp;
				evt.x = x;
				evt.y = y;
				evt.button = ultralight::MouseEvent::kButton_Right;
				m_pView->FireMouseEvent(evt);
				return true;
			}
			else if (IsUIPixelActive(x, y))
			{
				ultralight::MouseEvent evt;
				evt.type = ultralight::MouseEvent::kType_MouseUp;
				evt.x = x;
				evt.y = y;
				evt.button = ultralight::MouseEvent::kButton_Right;
				m_pView->FireMouseEvent(evt);
				return true;
			}
			break;
		}
		case WM_MOUSEWHEEL:
		{
			POINT pt = { (int)(short)LOWORD(lParam), (int)(short)HIWORD(lParam) };
			::ScreenToClient(hWnd, &pt);
			if (IsUIPixelActive(pt.x, pt.y))
			{
				int delta = (int)(short)HIWORD(wParam);
				ultralight::ScrollEvent evt;
				evt.type = ultralight::ScrollEvent::kType_ScrollByPixel;
				evt.delta_x = 0;
				evt.delta_y = delta;
				m_pView->FireScrollEvent(evt);
				return true;
			}
			break;
		}
		case WM_KEYDOWN:
		case WM_SYSKEYDOWN:
		{
			ultralight::KeyEvent evt(ultralight::KeyEvent::kType_RawKeyDown, wParam, lParam, message == WM_SYSKEYDOWN);
			m_pView->FireKeyEvent(evt);
			
			char buf[128];
			sprintf(buf, "[WebUI Debug] WM_KEYDOWN: key = %lld, focus = %d\n", (long long)wParam, m_pView->HasFocus() ? 1 : 0);
			OutputDebugStringA(buf);

			if (m_pView->HasFocus())
				return true;
			break;
		}
		case WM_KEYUP:
		case WM_SYSKEYUP:
		{
			ultralight::KeyEvent evt(ultralight::KeyEvent::kType_KeyUp, wParam, lParam, message == WM_SYSKEYUP);
			m_pView->FireKeyEvent(evt);
			if (m_pView->HasFocus())
				return true;
			break;
		}
		case WM_CHAR:
		{
			ultralight::KeyEvent evt(ultralight::KeyEvent::kType_Char, wParam, lParam, false);
			m_pView->FireKeyEvent(evt);

			char buf[128];
			sprintf(buf, "[WebUI Debug] WM_CHAR: char = %c (%lld), focus = %d\n", (char)wParam, (long long)wParam, m_pView->HasFocus() ? 1 : 0);
			OutputDebugStringA(buf);

			if (m_pView->HasFocus())
				return true;
			break;
		}
	}

	return false;
}

std::string CWebUI::ConvertAndGetIconPath(__IconItemSkill* pSkill)
{
	if (!pSkill || !pSkill->pUIIcon || !pSkill->pUIIcon->GetTex())
		return "";

	return ConvertTextureToPng(pSkill->pUIIcon->GetTex());
}

std::string CWebUI::ConvertTextureToPng(CN3Texture* pN3Tex)
{
	if (!pN3Tex)
		return "";

	LPDIRECT3DTEXTURE9 pD3DTex = pN3Tex->Get();
	if (!pD3DTex)
		return "";

	std::string fn = pN3Tex->FileName();
	size_t lastSlash = fn.find_last_of("\\/");
	if (lastSlash != std::string::npos)
		fn = fn.substr(lastSlash + 1);
	
	size_t lastDot = fn.find_last_of(".");
	if (lastDot != std::string::npos)
		fn = fn.substr(0, lastDot);

	for (auto& c : fn) c = tolower(c);

	std::string relPath = "ui/icons/" + fn + ".png";
	std::string fullPath = "assets/Client/" + relPath;

	if (!std::filesystem::exists("ui/icons"))
	{
		std::filesystem::create_directories("ui/icons");
	}
	if (!std::filesystem::exists("assets/Client/ui/icons"))
	{
		std::filesystem::create_directories("assets/Client/ui/icons");
	}

	if (!std::filesystem::exists(relPath))
	{
		D3DXSaveTextureToFileA(relPath.c_str(), D3DXIFF_PNG, pD3DTex, nullptr);
	}
	if (!std::filesystem::exists(fullPath))
	{
		D3DXSaveTextureToFileA(fullPath.c_str(), D3DXIFF_PNG, pD3DTex, nullptr);
	}

	return relPath;
}

std::string CWebUI::ConvertMapTextureToPng(CN3Texture* pN3Tex)
{
	if (!pN3Tex)
		return "";

	LPDIRECT3DTEXTURE9 pD3DTex = pN3Tex->Get();
	if (!pD3DTex)
		return "";

	std::string fn = pN3Tex->FileName();
	size_t lastSlash = fn.find_last_of("\\/");
	if (lastSlash != std::string::npos)
		fn = fn.substr(lastSlash + 1);

	size_t lastDot = fn.find_last_of(".");
	if (lastDot != std::string::npos)
		fn = fn.substr(0, lastDot);

	for (auto& c : fn) c = tolower(c);

	std::string relPath = "ui/maps/" + fn + ".png";
	std::string fullPath = "assets/Client/ui/maps/" + fn + ".png";

	if (!std::filesystem::exists("ui/maps"))
	{
		std::filesystem::create_directories("ui/maps");
	}
	if (!std::filesystem::exists("assets/Client/ui/maps"))
	{
		std::filesystem::create_directories("assets/Client/ui/maps");
	}

	// Always re-export map textures (don't cache) so zone changes are reflected
	static std::string s_lastMapName;
	if (s_lastMapName != fn)
	{
		s_lastMapName = fn;
		D3DXSaveTextureToFileA(relPath.c_str(), D3DXIFF_PNG, pD3DTex, nullptr);
		D3DXSaveTextureToFileA(fullPath.c_str(), D3DXIFF_PNG, pD3DTex, nullptr);
	}
	if (!std::filesystem::exists(relPath))
	{
		D3DXSaveTextureToFileA(relPath.c_str(), D3DXIFF_PNG, pD3DTex, nullptr);
		D3DXSaveTextureToFileA(fullPath.c_str(), D3DXIFF_PNG, pD3DTex, nullptr);
	}

	return relPath;
}

static std::string UrlDecode(const std::string& str)
{
	std::string decoded = "";
	char temp[] = "0x00";
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '%')
		{
			if (i + 2 < str.length())
			{
				temp[2] = str[i + 1];
				temp[3] = str[i + 2];
				decoded += (char)std::strtol(temp, nullptr, 16);
				i += 2;
			}
		}
		else if (str[i] == '+')
		{
			decoded += ' ';
		}
		else
		{
			decoded += str[i];
		}
	}
	return decoded;
}

void CWebUI::OnChangeTitle(ultralight::View* caller, const ultralight::String& title)
{
	std::string titleStr = title.utf8().data();
	if (titleStr.rfind("cmd:", 0) == 0)
	{
		size_t lastColon = titleStr.rfind(':');
		std::string command = (lastColon == std::string::npos || lastColon <= 3) ? titleStr.substr(4) : titleStr.substr(4, lastColon - 4);

		CGameProcMain* pProcMain = CGameProcedure::s_pProcMain;
		if (pProcMain)
		{
			if (command == "info")
			{
				pProcMain->CommandToggleUIState();
			}
			else if (command == "bag")
			{
				pProcMain->CommandToggleUIInventory();
			}
			else if (command == "skill")
			{
				pProcMain->CommandToggleUISkillTree();
			}
			else if (command == "quest")
			{
				pProcMain->CommandToggleCmdList();
			}
			else if (command == "invite")
			{
				CPlayerOther* pUPC = CGameProcedure::s_pOPMgr->UPCGetByID(CGameBase::s_pPlayer->m_iIDTarget, true);
				if (pUPC != nullptr && !CGameBase::s_pPlayer->IsHostileTarget(pUPC))
				{
					pProcMain->MsgSend_PartyOrForceCreate(pUPC->IDString());
				}
			}
			else if (command == "trade")
			{
				pProcMain->ParseChattingCommand("/trade");
			}
			else if (command.rfind("chatmode_", 0) == 0)
			{
				int modeVal = std::stoi(command.substr(9));
				if (pProcMain->m_pUIChatDlg != nullptr)
				{
					pProcMain->m_pUIChatDlg->ChangeChattingMode((e_ChatMode)modeVal);
				}
			}
			else if (command.rfind("sendchat:", 0) == 0)
			{
				std::string encodedText = command.substr(9);
				std::string chatText = UrlDecode(encodedText);
				if (pProcMain->m_pUIChatDlg != nullptr && !chatText.empty())
				{
					pProcMain->m_pUIChatDlg->SetString(chatText);
					pProcMain->m_pUIChatDlg->ReceiveMessage(pProcMain->m_pUIChatDlg, UIMSG_EDIT_RETURN);
				}
				else if (pProcMain->m_pUIChatDlg != nullptr)
				{
					pProcMain->m_pUIChatDlg->KillFocus();
				}
			}
			else if (command == "cancelchat")
			{
				if (pProcMain->m_pUIChatDlg != nullptr)
				{
					pProcMain->m_pUIChatDlg->KillFocus();
				}
			}
			else if (command == "option")
			{
				if (pProcMain->m_pUIExitMenu)
				{
					pProcMain->m_pUIExitMenu->SetVisible(true);
				}
			}
			else if (command.rfind("inv_rclick:", 0) == 0)
			{
				char dist[16] = {0};
				int order = 0;
				if (sscanf(command.c_str(), "inv_rclick:%15[^:]:%d", dist, &order) == 2)
				{
					if (pProcMain->m_pUIInventory)
					{
						pProcMain->m_pUIInventory->WebRClickItem(strcmp(dist, "slot") == 0, order);
					}
				}
			}
			else if (command.rfind("inv_move:", 0) == 0)
			{
				char srcDist[16] = {0};
				char dstDist[16] = {0};
				int srcOrder = 0;
				int dstOrder = 0;
				if (sscanf(command.c_str(), "inv_move:%15[^:]:%d:%15[^:]:%d", srcDist, &srcOrder, dstDist, &dstOrder) == 4)
				{
					if (pProcMain->m_pUIInventory)
					{
						pProcMain->m_pUIInventory->WebMoveItem(strcmp(srcDist, "slot") == 0, srcOrder, strcmp(dstDist, "slot") == 0, dstOrder);
					}
				}
			}
			else if (command.rfind("inv_destroy:", 0) == 0)
			{
				char dist[16] = {0};
				int order = 0;
				if (sscanf(command.c_str(), "inv_destroy:%15[^:]:%d", dist, &order) == 2)
				{
					if (pProcMain->m_pUIInventory)
					{
						pProcMain->m_pUIInventory->WebDestroyItem(strcmp(dist, "slot") == 0, order);
					}
				}
			}
			else if (command.rfind("inv_tooltip:", 0) == 0)
			{
				char dist[16] = {0};
				int order = 0;
				if (sscanf(command.c_str(), "inv_tooltip:%15[^:]:%d", dist, &order) == 2)
				{
					if (pProcMain->m_pUIInventory)
					{
						pProcMain->m_pUIInventory->WebShowItemTooltip(strcmp(dist, "slot") == 0, order);
					}
				}
			}
			else if (command.rfind("inv_tooltip_hide", 0) == 0)
			{
				if (pProcMain->m_pUIInventory)
				{
					pProcMain->m_pUIInventory->WebHideItemTooltip();
				}
			}
			else if (command.rfind("inv_to_hotkey:", 0) == 0)
			{
				char type[16] = {0};
				int itemOrder = 0;
				int hotkeyOrder = 0;
				if (sscanf(command.c_str(), "inv_to_hotkey:%15[^:]:%d:%d", type, &itemOrder, &hotkeyOrder) == 3)
				{
					if (pProcMain && pProcMain->m_pUIHotKeyDlg && pProcMain->m_pUIInventory)
					{
						__IconItemSkill* pItem = nullptr;
						if (strcmp(type, "inv") == 0)
						{
							pItem = pProcMain->m_pUIInventory->m_pMyInvWnd[itemOrder];
						}
						else if (strcmp(type, "slot") == 0)
						{
							pItem = pProcMain->m_pUIInventory->m_pMySlot[itemOrder];
						}

						if (pItem)
						{
							pProcMain->m_pUIHotKeyDlg->WebRegisterHotkey(pItem, hotkeyOrder);
						}
					}
				}
			}
			else if (command.rfind("hotkey_move:", 0) == 0)
			{
				int fromIndex = 0;
				int toIndex = 0;
				if (sscanf(command.c_str(), "hotkey_move:%d:%d", &fromIndex, &toIndex) == 2)
				{
					if (pProcMain && pProcMain->m_pUIHotKeyDlg)
					{
						pProcMain->m_pUIHotKeyDlg->WebMoveHotkey(fromIndex, toIndex);
					}
				}
			}
			else if (command.rfind("hotkey_clear:", 0) == 0)
			{
				int index = 0;
				if (sscanf(command.c_str(), "hotkey_clear:%d", &index) == 1)
				{
					if (pProcMain && pProcMain->m_pUIHotKeyDlg)
					{
						pProcMain->m_pUIHotKeyDlg->WebClearHotkey(index);
					}
				}
			}
			else if (command.rfind("skill_to_hotkey:", 0) == 0)
			{
				int skillId = 0;
				int hotkeySlot = 0;
				if (sscanf(command.c_str(), "skill_to_hotkey:%d:%d", &skillId, &hotkeySlot) == 2)
				{
					if (pProcMain && pProcMain->m_pUIHotKeyDlg)
					{
						pProcMain->m_pUIHotKeyDlg->WebRegisterHotkeyByID(skillId, hotkeySlot);
					}
				}
			}
			else if (command.rfind("skill_point_up:", 0) == 0)
			{
				int catIndex = 0;
				if (sscanf(command.c_str(), "skill_point_up:%d", &catIndex) == 1)
				{
					if (pProcMain && pProcMain->m_pUISkillTreeDlg)
					{
						pProcMain->m_pUISkillTreeDlg->PointPushUpButton(catIndex);
					}
				}
			}
			else if (command.rfind("stat_point_up:", 0) == 0)
			{
				int statType = 0;
				if (sscanf(command.c_str(), "stat_point_up:%d", &statType) == 1)
				{
					if (pProcMain && pProcMain->m_pUIVar && pProcMain->m_pUIVar->m_pPageState)
					{
						pProcMain->m_pUIVar->m_pPageState->MsgSendAblityPointChange(statType, +1);
					}
				}
			}
			else if (command == "clan_refresh")
			{
				if (pProcMain && pProcMain->m_pUIVar && pProcMain->m_pUIVar->m_pPageKnights)
				{
					pProcMain->m_pUIVar->m_pPageKnights->RefreshButtonHandler(true);
				}
			}
			else if (command == "clan_invite")
			{
				if (pProcMain && CGameBase::s_pPlayer)
				{
					pProcMain->MsgSend_KnightsJoin(CGameBase::s_pPlayer->m_iIDTarget);
				}
			}
			else if (command.rfind("clan_kick:", 0) == 0)
			{
				std::string targetName = command.substr(10);
				if (pProcMain)
				{
					pProcMain->MsgSend_KnightsLeave(targetName);
				}
			}
			else if (command.rfind("clan_appoint:", 0) == 0)
			{
				std::string targetName = command.substr(13);
				if (pProcMain)
				{
					pProcMain->MsgSend_KnightsAppointViceChief(targetName);
				}
			}
		}
	}
}

void CWebUI::AddGameMessage(int type, const std::string& msg, uint32_t color)
{
	if (!m_bInitialized || !m_pView)
		return;

	// Escape JSON characters
	std::string escaped = "";
	for (char c : msg)
	{
		if (c == '"') escaped += "\\\"";
		else if (c == '\\') escaped += "\\\\";
		else if (c == '\'') escaped += "\\'";
		else if (c == '\n') escaped += "\\n";
		else if (c == '\r') escaped += "\\r";
		else if (c >= 0 && (unsigned char)c < 32) {} // skip control characters
		else escaped += c;
	}

	// Format D3DCOLOR (ARGB) to CSS Hex Color String (#RRGGBB)
	unsigned char r = (color >> 16) & 0xFF;
	unsigned char g = (color >> 8) & 0xFF;
	unsigned char b = color & 0xFF;
	std::string hexColor = fmt::format("#{:02x}{:02x}{:02x}", r, g, b);

	std::string js = fmt::format(
		"if (window.addGameMessage) {{ window.addGameMessage({}, '{}', '{}'); }}",
		type, escaped, hexColor
	);
	m_pView->EvaluateScript(js.c_str());
}

void CWebUI::Evaluate(const std::string& js)
{
	if (m_bInitialized && m_pView)
	{
		m_pView->EvaluateScript(js.c_str());
	}
}

void CWebUI::OnAddConsoleMessage(ultralight::View* caller,
                                 ultralight::MessageSource source,
                                 ultralight::MessageLevel level,
                                 const ultralight::String& message,
                                 uint32_t line_number,
                                 uint32_t column_number,
                                 const ultralight::String& source_id)
{
	std::string msg = message.utf8().data();
	std::string src = source_id.utf8().data();
	FILE* f = fopen("webui_console.log", "a");
	if (f)
	{
		fprintf(f, "[WebUI Console] %s:%u: %s\n", src.c_str(), line_number, msg.c_str());
		fclose(f);
	}
	std::cerr << fmt::format("[WebUI Console] {}:{}: {}\n", src, line_number, msg) << std::endl;
}


