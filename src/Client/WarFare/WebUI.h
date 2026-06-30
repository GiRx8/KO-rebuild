#pragma once

#include <d3d9.h>
#include <string>
#include <Ultralight/Ultralight.h>

class CWebUI : public ultralight::ViewListener
{
private:
	static CWebUI* s_pInstance;

	ultralight::RefPtr<ultralight::Renderer> m_pRenderer;
	ultralight::RefPtr<ultralight::View> m_pView;
	LPDIRECT3DTEXTURE9 m_lpD3DTexture = nullptr;
	int m_iWidth = 0;
	int m_iHeight = 0;
	bool m_bInitialized = false;
	bool m_bLButtonDown = false;
	bool m_bRButtonDown = false;

	CWebUI();
	~CWebUI();

public:
	static CWebUI* Instance();
	static void ReleaseInstance();

	bool Init(int width, int height);
	void Shutdown();

	void Update();
	void Render();
	void UpdatePlayerData();

	void LoadURL(const std::string& url);
	void LoadHTML(const std::string& html);

	bool HandleMessage(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	bool IsUIPixelActive(int x, int y);
	void AddGameMessage(int type, const std::string& msg, uint32_t color);
	void Evaluate(const std::string& js);
	void SetCommandPanelVisible(bool bVisible);
	bool IsCommandPanelVisible() const { return m_bCommandPanelVisible; }
	void SetExitPanelVisible(bool bVisible);
	bool IsExitPanelVisible() const { return m_bExitPanelVisible; }

	ultralight::View* GetView() { return m_pView.get(); }

private:
	bool m_bCommandPanelVisible = false;
	bool m_bExitPanelVisible = false;
	void UpdateTexture();
	void SyncCommandPanel();
	void SyncExitPanel();
	static std::string ConvertToUTF8(const std::string& str);
	static std::string ConvertAndGetIconPath(struct __IconItemSkill* pSkill);
	static std::string ConvertTextureToPng(class CN3Texture* pN3Tex);
	static std::string ConvertMapTextureToPng(class CN3Texture* pN3Tex);

public:
	virtual void OnChangeTitle(ultralight::View* caller, const ultralight::String& title) override;
	virtual void OnAddConsoleMessage(ultralight::View* caller,
									 ultralight::MessageSource source,
									 ultralight::MessageLevel level,
									 const ultralight::String& message,
									 uint32_t line_number,
									 uint32_t column_number,
									 const ultralight::String& source_id) override;
};
