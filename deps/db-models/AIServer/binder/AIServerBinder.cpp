#include "AIServerBinder.h"
#include <AIServer/model/AIServerModel.h>
#include <BinderUtil/BinderUtil.h>
#include <nanodbc/nanodbc.h>

namespace aiserver_binder
{
	const Monster::BindingsMapType& Monster::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &Monster::BindMonsterId},
			{"strName", &Monster::BindName},
			{"sPid", &Monster::BindPictureId},
			{"sSize", &Monster::BindSize},
			{"iWeapon1", &Monster::BindWeapon1},
			{"iWeapon2", &Monster::BindWeapon2},
			{"byGroup", &Monster::BindGroup},
			{"byActType", &Monster::BindActType},
			{"byType", &Monster::BindType},
			{"byFamily", &Monster::BindFamily},
			{"byRank", &Monster::BindRank},
			{"byTitle", &Monster::BindTitle},
			{"iSellingGroup", &Monster::BindSellingGroup},
			{"sLevel", &Monster::BindLevel},
			{"iExp", &Monster::BindExp},
			{"iLoyalty", &Monster::BindLoyalty},
			{"iHpPoint", &Monster::BindHitPoints},
			{"sMpPoint", &Monster::BindManaPoints},
			{"sAtk", &Monster::BindAttack},
			{"sAc", &Monster::BindArmor},
			{"sHitRate", &Monster::BindHitRate},
			{"sEvadeRate", &Monster::BindEvadeRate},
			{"sDamage", &Monster::BindDamage},
			{"sAttackDelay", &Monster::BindAttackDelay},
			{"bySpeed1", &Monster::BindWalkSpeed},
			{"bySpeed2", &Monster::BindRunSpeed},
			{"sStandtime", &Monster::BindStandTime},
			{"iMagic1", &Monster::BindMagic1},
			{"iMagic2", &Monster::BindMagic2},
			{"iMagic3", &Monster::BindMagic3},
			{"sFireR", &Monster::BindFireResist},
			{"sColdR", &Monster::BindColdResist},
			{"sLightningR", &Monster::BindLightningResist},
			{"sMagicR", &Monster::BindMagicResist},
			{"sDiseaseR", &Monster::BindDiseaseResist},
			{"sPoisonR", &Monster::BindPoisonResist},
			{"sLightR", &Monster::BindLightResist},
			{"sBulk", &Monster::BindBulk},
			{"byAttackRange", &Monster::BindAttackRange},
			{"bySearchRange", &Monster::BindSearchRange},
			{"byTracingRange", &Monster::BindTracingRange},
			{"iMoney", &Monster::BindMoney},
			{"sItem", &Monster::BindItem},
			{"byDirectAttack", &Monster::BindDirectAttack},
			{"byMagicAttack", &Monster::BindMagicAttack},
			{"byMoneyType", &Monster::BindMoneyType}
		};
		return bindingsMap;
	}

	void Monster::BindMonsterId(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	void Monster::BindName(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void Monster::BindPictureId(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PictureId);
	}

	void Monster::BindSize(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	void Monster::BindWeapon1(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon1);
	}

	void Monster::BindWeapon2(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon2);
	}

	void Monster::BindGroup(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Group);
	}

	void Monster::BindActType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	void Monster::BindType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void Monster::BindFamily(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Family);
	}

	void Monster::BindRank(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	void Monster::BindTitle(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	void Monster::BindSellingGroup(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellingGroup);
	}

	void Monster::BindLevel(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	void Monster::BindExp(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	void Monster::BindLoyalty(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	void Monster::BindHitPoints(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.HitPoints);
	}

	void Monster::BindManaPoints(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaPoints);
	}

	void Monster::BindAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Attack);
	}

	void Monster::BindArmor(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void Monster::BindHitRate(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void Monster::BindEvadeRate(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvadeRate);
	}

	void Monster::BindDamage(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void Monster::BindAttackDelay(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackDelay);
	}

	void Monster::BindWalkSpeed(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
	}

	void Monster::BindRunSpeed(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RunSpeed);
	}

	void Monster::BindStandTime(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StandTime);
	}

	void Monster::BindMagic1(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic1);
	}

	void Monster::BindMagic2(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic2);
	}

	void Monster::BindMagic3(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic3);
	}

	void Monster::BindFireResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	void Monster::BindColdResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	void Monster::BindLightningResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	void Monster::BindMagicResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	void Monster::BindDiseaseResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DiseaseResist);
	}

	void Monster::BindPoisonResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	void Monster::BindLightResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightResist);
	}

	void Monster::BindBulk(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Bulk);
	}

	void Monster::BindAttackRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackRange);
	}

	void Monster::BindSearchRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SearchRange);
	}

	void Monster::BindTracingRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TracingRange);
	}

	void Monster::BindMoney(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	void Monster::BindItem(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Item);
	}

	void Monster::BindDirectAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectAttack);
	}

	void Monster::BindMagicAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicAttack);
	}

	void Monster::BindMoneyType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MoneyType);
	}

	const MonsterItem::BindingsMapType& MonsterItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterItem::BindMonsterId},
			{"iItem01", &MonsterItem::BindItemId1},
			{"sPersent01", &MonsterItem::BindDropChance1},
			{"iItem02", &MonsterItem::BindItemId2},
			{"sPersent02", &MonsterItem::BindDropChance2},
			{"iItem03", &MonsterItem::BindItemId3},
			{"sPersent03", &MonsterItem::BindDropChance3},
			{"iItem04", &MonsterItem::BindItemId4},
			{"sPersent04", &MonsterItem::BindDropChance4},
			{"iItem05", &MonsterItem::BindItemId5},
			{"sPersent05", &MonsterItem::BindDropChance5}
		};
		return bindingsMap;
	}

	void MonsterItem::BindMonsterId(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	void MonsterItem::BindItemId1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[0]);
	}

	void MonsterItem::BindDropChance1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[0]);
	}

	void MonsterItem::BindItemId2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[1]);
	}

	void MonsterItem::BindDropChance2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[1]);
	}

	void MonsterItem::BindItemId3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[2]);
	}

	void MonsterItem::BindDropChance3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[2]);
	}

	void MonsterItem::BindItemId4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[3]);
	}

	void MonsterItem::BindDropChance4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[3]);
	}

	void MonsterItem::BindItemId5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[4]);
	}

	void MonsterItem::BindDropChance5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[4]);
	}

	const Npc::BindingsMapType& Npc::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &Npc::BindNpcId},
			{"strName", &Npc::BindName},
			{"sPid", &Npc::BindPictureId},
			{"sSize", &Npc::BindSize},
			{"iWeapon1", &Npc::BindWeapon1},
			{"iWeapon2", &Npc::BindWeapon2},
			{"byGroup", &Npc::BindGroup},
			{"byActType", &Npc::BindActType},
			{"byType", &Npc::BindType},
			{"byFamily", &Npc::BindFamily},
			{"byRank", &Npc::BindRank},
			{"byTitle", &Npc::BindTitle},
			{"iSellingGroup", &Npc::BindSellingGroup},
			{"sLevel", &Npc::BindLevel},
			{"iExp", &Npc::BindExp},
			{"iLoyalty", &Npc::BindLoyalty},
			{"iHpPoint", &Npc::BindHitPoints},
			{"sMpPoint", &Npc::BindManaPoints},
			{"sAtk", &Npc::BindAttack},
			{"sAc", &Npc::BindArmor},
			{"sHitRate", &Npc::BindHitRate},
			{"sEvadeRate", &Npc::BindEvadeRate},
			{"sDamage", &Npc::BindDamage},
			{"sAttackDelay", &Npc::BindAttackDelay},
			{"bySpeed1", &Npc::BindWalkSpeed},
			{"bySpeed2", &Npc::BindRunSpeed},
			{"sStandtime", &Npc::BindStandTime},
			{"iMagic1", &Npc::BindMagic1},
			{"iMagic2", &Npc::BindMagic2},
			{"iMagic3", &Npc::BindMagic3},
			{"sFireR", &Npc::BindFireResist},
			{"sColdR", &Npc::BindColdResist},
			{"sLightningR", &Npc::BindLightningResist},
			{"sMagicR", &Npc::BindMagicResist},
			{"sDiseaseR", &Npc::BindDiseaseResist},
			{"sPoisonR", &Npc::BindPoisonResist},
			{"sLightR", &Npc::BindLightResist},
			{"sBulk", &Npc::BindBulk},
			{"byAttackRange", &Npc::BindAttackRange},
			{"bySearchRange", &Npc::BindSearchRange},
			{"byTracingRange", &Npc::BindTracingRange},
			{"iMoney", &Npc::BindMoney},
			{"sItem", &Npc::BindItem},
			{"byDirectAttack", &Npc::BindDirectAttack},
			{"byMagicAttack", &Npc::BindMagicAttack},
			{"byMoneyType", &Npc::BindMoneyType}
		};
		return bindingsMap;
	}

	void Npc::BindNpcId(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	void Npc::BindName(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void Npc::BindPictureId(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PictureId);
	}

	void Npc::BindSize(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	void Npc::BindWeapon1(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon1);
	}

	void Npc::BindWeapon2(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon2);
	}

	void Npc::BindGroup(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Group);
	}

	void Npc::BindActType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	void Npc::BindType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void Npc::BindFamily(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Family);
	}

	void Npc::BindRank(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	void Npc::BindTitle(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	void Npc::BindSellingGroup(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellingGroup);
	}

	void Npc::BindLevel(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	void Npc::BindExp(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	void Npc::BindLoyalty(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	void Npc::BindHitPoints(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.HitPoints);
	}

	void Npc::BindManaPoints(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaPoints);
	}

	void Npc::BindAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Attack);
	}

	void Npc::BindArmor(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void Npc::BindHitRate(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void Npc::BindEvadeRate(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvadeRate);
	}

	void Npc::BindDamage(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void Npc::BindAttackDelay(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackDelay);
	}

	void Npc::BindWalkSpeed(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
	}

	void Npc::BindRunSpeed(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RunSpeed);
	}

	void Npc::BindStandTime(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StandTime);
	}

	void Npc::BindMagic1(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic1);
	}

	void Npc::BindMagic2(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic2);
	}

	void Npc::BindMagic3(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic3);
	}

	void Npc::BindFireResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	void Npc::BindColdResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	void Npc::BindLightningResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	void Npc::BindMagicResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	void Npc::BindDiseaseResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DiseaseResist);
	}

	void Npc::BindPoisonResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	void Npc::BindLightResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightResist);
	}

	void Npc::BindBulk(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Bulk);
	}

	void Npc::BindAttackRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackRange);
	}

	void Npc::BindSearchRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SearchRange);
	}

	void Npc::BindTracingRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TracingRange);
	}

	void Npc::BindMoney(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	void Npc::BindItem(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Item);
	}

	void Npc::BindDirectAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectAttack);
	}

	void Npc::BindMagicAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicAttack);
	}

	void Npc::BindMoneyType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MoneyType);
	}

	const NpcMoveItem::BindingsMapType& NpcMoveItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCastleIndex", &NpcMoveItem::BindCastleIndex},
			{"byChangeItem", &NpcMoveItem::BindChangeItem},
			{"sChangeSid", &NpcMoveItem::BindChangeId},
			{"byMoveItem", &NpcMoveItem::BindMoveItem},
			{"sMoveMinX", &NpcMoveItem::BindMoveMinX},
			{"sMoveMinY", &NpcMoveItem::BindMoveMinY},
			{"sMoveMaxX", &NpcMoveItem::BindMoveMaxX},
			{"sMoveMaxY", &NpcMoveItem::BindMoveMaxY}
		};
		return bindingsMap;
	}

	void NpcMoveItem::BindCastleIndex(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CastleIndex);
	}

	void NpcMoveItem::BindChangeItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeItem);
	}

	void NpcMoveItem::BindChangeId(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeId);
	}

	void NpcMoveItem::BindMoveItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.MoveItem);
	}

	void NpcMoveItem::BindMoveMinX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinX);
	}

	void NpcMoveItem::BindMoveMinY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinY);
	}

	void NpcMoveItem::BindMoveMaxX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxX);
	}

	void NpcMoveItem::BindMoveMaxY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxY);
	}

	const NpcPos::BindingsMapType& NpcPos::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneID", &NpcPos::BindZoneId},
			{"NpcID", &NpcPos::BindNpcId},
			{"ActType", &NpcPos::BindActType},
			{"RegenType", &NpcPos::BindRegenType},
			{"DungeonFamily", &NpcPos::BindDungeonFamily},
			{"SpecialType", &NpcPos::BindSpecialType},
			{"TrapNumber", &NpcPos::BindTrapNumber},
			{"LeftX", &NpcPos::BindLeftX},
			{"TopZ", &NpcPos::BindTopZ},
			{"RightX", &NpcPos::BindRightX},
			{"BottomZ", &NpcPos::BindBottomZ},
			{"LimitMinZ", &NpcPos::BindLimitMinZ},
			{"LimitMinX", &NpcPos::BindLimitMinX},
			{"LimitMaxX", &NpcPos::BindLimitMaxX},
			{"LimitMaxZ", &NpcPos::BindLimitMaxZ},
			{"NumNPC", &NpcPos::BindNumNpc},
			{"RegTime", &NpcPos::BindRespawnTime},
			{"byDirection", &NpcPos::BindDirection},
			{"DotCnt", &NpcPos::BindPathPointCount},
			{"path", &NpcPos::BindPath}
		};
		return bindingsMap;
	}

	void NpcPos::BindZoneId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	void NpcPos::BindNpcId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NpcId);
	}

	void NpcPos::BindActType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	void NpcPos::BindRegenType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegenType);
	}

	void NpcPos::BindDungeonFamily(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DungeonFamily);
	}

	void NpcPos::BindSpecialType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SpecialType);
	}

	void NpcPos::BindTrapNumber(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TrapNumber);
	}

	void NpcPos::BindLeftX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LeftX);
	}

	void NpcPos::BindTopZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TopZ);
	}

	void NpcPos::BindRightX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RightX);
	}

	void NpcPos::BindBottomZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BottomZ);
	}

	void NpcPos::BindLimitMinZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMinZ);
	}

	void NpcPos::BindLimitMinX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMinX);
	}

	void NpcPos::BindLimitMaxX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMaxX);
	}

	void NpcPos::BindLimitMaxZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMaxZ);
	}

	void NpcPos::BindNumNpc(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NumNpc);
	}

	void NpcPos::BindRespawnTime(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RespawnTime);
	}

	void NpcPos::BindDirection(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Direction);
	}

	void NpcPos::BindPathPointCount(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PathPointCount);
	}

	void NpcPos::BindPath(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Path);
	}

	const LevelUp::BindingsMapType& LevelUp::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"level", &LevelUp::BindLevel},
			{"Exp", &LevelUp::BindRequiredExp}
		};
		return bindingsMap;
	}

	void LevelUp::BindLevel(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void LevelUp::BindRequiredExp(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredExp);
	}

	const Magic::BindingsMapType& Magic::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"MagicNum", &Magic::BindID},
			{"BeforeAction", &Magic::BindBeforeAction},
			{"TargetAction", &Magic::BindTargetAction},
			{"SelfEffect", &Magic::BindSelfEffect},
			{"FlyingEffect", &Magic::BindFlyingEffect},
			{"TargetEffect", &Magic::BindTargetEffect},
			{"Moral", &Magic::BindMoral},
			{"SkillLevel", &Magic::BindSkillLevel},
			{"Skill", &Magic::BindSkill},
			{"Msp", &Magic::BindManaCost},
			{"HP", &Magic::BindHpCost},
			{"ItemGroup", &Magic::BindItemGroup},
			{"UseItem", &Magic::BindUseItem},
			{"CastTime", &Magic::BindCastTime},
			{"ReCastTime", &Magic::BindRecastTime},
			{"SuccessRate", &Magic::BindSuccessRate},
			{"Type1", &Magic::BindType1},
			{"Type2", &Magic::BindType2},
			{"Range", &Magic::BindRange},
			{"Etc", &Magic::BindEtc},
			{"Event", &Magic::BindEvent}
		};
		return bindingsMap;
	}

	void Magic::BindID(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void Magic::BindBeforeAction(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BeforeAction);
	}

	void Magic::BindTargetAction(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetAction);
	}

	void Magic::BindSelfEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SelfEffect);
	}

	void Magic::BindFlyingEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
	}

	void Magic::BindTargetEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TargetEffect);
	}

	void Magic::BindMoral(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Moral);
	}

	void Magic::BindSkillLevel(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SkillLevel);
	}

	void Magic::BindSkill(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Skill);
	}

	void Magic::BindManaCost(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaCost);
	}

	void Magic::BindHpCost(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HpCost);
	}

	void Magic::BindItemGroup(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemGroup);
	}

	void Magic::BindUseItem(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.UseItem);
	}

	void Magic::BindCastTime(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.CastTime);
	}

	void Magic::BindRecastTime(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RecastTime);
	}

	void Magic::BindSuccessRate(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SuccessRate);
	}

	void Magic::BindType1(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type1);
	}

	void Magic::BindType2(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type2);
	}

	void Magic::BindRange(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	void Magic::BindEtc(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Etc);
	}

	void Magic::BindEvent(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Event);
	}

	const MagicType1::BindingsMapType& MagicType1::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType1::BindID},
			{"Type", &MagicType1::BindType},
			{"HitRate", &MagicType1::BindHitRateMod},
			{"Hit", &MagicType1::BindDamageMod},
			{"AddDamage", &MagicType1::BindAddDamage},
			{"Delay", &MagicType1::BindDelay},
			{"ComboType", &MagicType1::BindComboType},
			{"ComboCount", &MagicType1::BindComboCount},
			{"ComboDamage", &MagicType1::BindComboDamage},
			{"Range", &MagicType1::BindRange}
		};
		return bindingsMap;
	}

	void MagicType1::BindID(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType1::BindType(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void MagicType1::BindHitRateMod(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	void MagicType1::BindDamageMod(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	void MagicType1::BindAddDamage(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	void MagicType1::BindDelay(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Delay);
	}

	void MagicType1::BindComboType(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboType);
	}

	void MagicType1::BindComboCount(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboCount);
	}

	void MagicType1::BindComboDamage(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ComboDamage);
	}

	void MagicType1::BindRange(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	const MagicType2::BindingsMapType& MagicType2::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType2::BindID},
			{"HitType", &MagicType2::BindHitType},
			{"HitRate", &MagicType2::BindHitRateMod},
			{"AddDamage", &MagicType2::BindDamageMod},
			{"AddRange", &MagicType2::BindRangeMod},
			{"NeedArrow", &MagicType2::BindNeedArrow},
			{"AddDamagePlus", &MagicType2::BindAddDamagePlus}
		};
		return bindingsMap;
	}

	void MagicType2::BindID(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType2::BindHitType(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitType);
	}

	void MagicType2::BindHitRateMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	void MagicType2::BindDamageMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	void MagicType2::BindRangeMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RangeMod);
	}

	void MagicType2::BindNeedArrow(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedArrow);
	}

	void MagicType2::BindAddDamagePlus(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamagePlus);
	}

	const MagicType3::BindingsMapType& MagicType3::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType3::BindID},
			{"Radius", &MagicType3::BindRadius},
			{"Angle", &MagicType3::BindAngle},
			{"DirectType", &MagicType3::BindDirectType},
			{"FirstDamage", &MagicType3::BindFirstDamage},
			{"EndDamage", &MagicType3::BindEndDamage},
			{"TimeDamage", &MagicType3::BindTimeDamage},
			{"Duration", &MagicType3::BindDuration},
			{"Attribute", &MagicType3::BindAttribute}
		};
		return bindingsMap;
	}

	void MagicType3::BindID(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType3::BindRadius(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType3::BindAngle(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Angle);
	}

	void MagicType3::BindDirectType(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectType);
	}

	void MagicType3::BindFirstDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FirstDamage);
	}

	void MagicType3::BindEndDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EndDamage);
	}

	void MagicType3::BindTimeDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TimeDamage);
	}

	void MagicType3::BindDuration(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Duration);
	}

	void MagicType3::BindAttribute(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Attribute);
	}

	const MagicType4::BindingsMapType& MagicType4::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType4::BindID},
			{"BuffType", &MagicType4::BindBuffType},
			{"Radius", &MagicType4::BindRadius},
			{"Duration", &MagicType4::BindDuration},
			{"AttackSpeed", &MagicType4::BindAttackSpeed},
			{"Speed", &MagicType4::BindSpeed},
			{"AC", &MagicType4::BindArmor},
			{"ACPct", &MagicType4::BindArmorPercent},
			{"Attack", &MagicType4::BindAttackPower},
			{"MagicAttack", &MagicType4::BindMagicPower},
			{"MaxHP", &MagicType4::BindMaxHp},
			{"MaxHpPct", &MagicType4::BindMaxHpPercent},
			{"MaxMP", &MagicType4::BindMaxMp},
			{"MaxMpPct", &MagicType4::BindMaxMpPercent},
			{"HitRate", &MagicType4::BindHitRate},
			{"AvoidRate", &MagicType4::BindAvoidRate},
			{"Str", &MagicType4::BindStrength},
			{"Sta", &MagicType4::BindStamina},
			{"Dex", &MagicType4::BindDexterity},
			{"Intel", &MagicType4::BindIntelligence},
			{"Cha", &MagicType4::BindCharisma},
			{"FireR", &MagicType4::BindFireResist},
			{"ColdR", &MagicType4::BindColdResist},
			{"LightningR", &MagicType4::BindLightningResist},
			{"MagicR", &MagicType4::BindMagicResist},
			{"DiseaseR", &MagicType4::BindDiseaseResist},
			{"PoisonR", &MagicType4::BindPoisonResist},
			{"ExpPct", &MagicType4::BindExpPercent}
		};
		return bindingsMap;
	}

	void MagicType4::BindID(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType4::BindBuffType(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BuffType);
	}

	void MagicType4::BindRadius(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType4::BindDuration(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType4::BindAttackSpeed(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackSpeed);
	}

	void MagicType4::BindSpeed(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	void MagicType4::BindArmor(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void MagicType4::BindArmorPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ArmorPercent);
	}

	void MagicType4::BindAttackPower(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackPower);
	}

	void MagicType4::BindMagicPower(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicPower);
	}

	void MagicType4::BindMaxHp(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	void MagicType4::BindMaxHpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
	}

	void MagicType4::BindMaxMp(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	void MagicType4::BindMaxMpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
	}

	void MagicType4::BindHitRate(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitRate);
	}

	void MagicType4::BindAvoidRate(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AvoidRate);
	}

	void MagicType4::BindStrength(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Strength);
	}

	void MagicType4::BindStamina(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Stamina);
	}

	void MagicType4::BindDexterity(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Dexterity);
	}

	void MagicType4::BindIntelligence(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Intelligence);
	}

	void MagicType4::BindCharisma(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Charisma);
	}

	void MagicType4::BindFireResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireResist);
	}

	void MagicType4::BindColdResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ColdResist);
	}

	void MagicType4::BindLightningResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningResist);
	}

	void MagicType4::BindMagicResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicResist);
	}

	void MagicType4::BindDiseaseResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DiseaseResist);
	}

	void MagicType4::BindPoisonResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonResist);
	}

	void MagicType4::BindExpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpPercent);
	}

	const MagicType7::BindingsMapType& MagicType7::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &MagicType7::BindID},
			{"byValidGroup", &MagicType7::BindValidGroup},
			{"byNatoinChange", &MagicType7::BindNationChange},
			{"shMonsterNum", &MagicType7::BindMonsterNumber},
			{"byTargetChange", &MagicType7::BindTargetChange},
			{"byStateChange", &MagicType7::BindStateChange},
			{"byRadius", &MagicType7::BindRadius},
			{"shHitrate", &MagicType7::BindHitRate},
			{"shDuration", &MagicType7::BindDuration},
			{"shDamage", &MagicType7::BindDamage},
			{"byVisoin", &MagicType7::BindVision},
			{"nNeedItem", &MagicType7::BindNeedItem}
		};
		return bindingsMap;
	}

	void MagicType7::BindID(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType7::BindValidGroup(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	void MagicType7::BindNationChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	void MagicType7::BindMonsterNumber(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	void MagicType7::BindTargetChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	void MagicType7::BindStateChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	void MagicType7::BindRadius(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType7::BindHitRate(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void MagicType7::BindDuration(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType7::BindDamage(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void MagicType7::BindVision(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Vision);
	}

	void MagicType7::BindNeedItem(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	const MakeDefensive::BindingsMapType& MakeDefensive::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevel", &MakeDefensive::BindLevel},
			{"sClass_1", &MakeDefensive::BindClass1},
			{"sClass_2", &MakeDefensive::BindClass2},
			{"sClass_3", &MakeDefensive::BindClass3},
			{"sClass_4", &MakeDefensive::BindClass4},
			{"sClass_5", &MakeDefensive::BindClass5},
			{"sClass_6", &MakeDefensive::BindClass6},
			{"sClass_7", &MakeDefensive::BindClass7}
		};
		return bindingsMap;
	}

	void MakeDefensive::BindLevel(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void MakeDefensive::BindClass1(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class1);
	}

	void MakeDefensive::BindClass2(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class2);
	}

	void MakeDefensive::BindClass3(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class3);
	}

	void MakeDefensive::BindClass4(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class4);
	}

	void MakeDefensive::BindClass5(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class5);
	}

	void MakeDefensive::BindClass6(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class6);
	}

	void MakeDefensive::BindClass7(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class7);
	}

	const MakeItem::BindingsMapType& MakeItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MakeItem::BindIndex},
			{"iItemCode", &MakeItem::BindItemCode},
			{"byItemLevel", &MakeItem::BindItemLevel}
		};
		return bindingsMap;
	}

	void MakeItem::BindIndex(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void MakeItem::BindItemCode(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemCode);
	}

	void MakeItem::BindItemLevel(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemLevel);
	}

	const MakeItemGradeCode::BindingsMapType& MakeItemGradeCode::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byItemIndex", &MakeItemGradeCode::BindItemIndex},
			{"byGrade_1", &MakeItemGradeCode::BindGrade1},
			{"byGrade_2", &MakeItemGradeCode::BindGrade2},
			{"byGrade_3", &MakeItemGradeCode::BindGrade3},
			{"byGrade_4", &MakeItemGradeCode::BindGrade4},
			{"byGrade_5", &MakeItemGradeCode::BindGrade5},
			{"byGrade_6", &MakeItemGradeCode::BindGrade6},
			{"byGrade_7", &MakeItemGradeCode::BindGrade7},
			{"byGrade_8", &MakeItemGradeCode::BindGrade8},
			{"byGrade_9", &MakeItemGradeCode::BindGrade9}
		};
		return bindingsMap;
	}

	void MakeItemGradeCode::BindItemIndex(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemIndex);
	}

	void MakeItemGradeCode::BindGrade1(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[0]);
	}

	void MakeItemGradeCode::BindGrade2(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[1]);
	}

	void MakeItemGradeCode::BindGrade3(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[2]);
	}

	void MakeItemGradeCode::BindGrade4(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[3]);
	}

	void MakeItemGradeCode::BindGrade5(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[4]);
	}

	void MakeItemGradeCode::BindGrade6(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[5]);
	}

	void MakeItemGradeCode::BindGrade7(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[6]);
	}

	void MakeItemGradeCode::BindGrade8(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[7]);
	}

	void MakeItemGradeCode::BindGrade9(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[8]);
	}

	const MakeItemGroup::BindingsMapType& MakeItemGroup::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iItemGroupNum", &MakeItemGroup::BindItemGroupNumber},
			{"iItem_1", &MakeItemGroup::BindItem1},
			{"iItem_2", &MakeItemGroup::BindItem2},
			{"iItem_3", &MakeItemGroup::BindItem3},
			{"iItem_4", &MakeItemGroup::BindItem4},
			{"iItem_5", &MakeItemGroup::BindItem5},
			{"iItem_6", &MakeItemGroup::BindItem6},
			{"iItem_7", &MakeItemGroup::BindItem7},
			{"iItem_8", &MakeItemGroup::BindItem8},
			{"iItem_9", &MakeItemGroup::BindItem9},
			{"iItem_10", &MakeItemGroup::BindItem10},
			{"iItem_11", &MakeItemGroup::BindItem11},
			{"iItem_12", &MakeItemGroup::BindItem12},
			{"iItem_13", &MakeItemGroup::BindItem13},
			{"iItem_14", &MakeItemGroup::BindItem14},
			{"iItem_15", &MakeItemGroup::BindItem15},
			{"iItem_16", &MakeItemGroup::BindItem16},
			{"iItem_17", &MakeItemGroup::BindItem17},
			{"iItem_18", &MakeItemGroup::BindItem18},
			{"iItem_19", &MakeItemGroup::BindItem19},
			{"iItem_20", &MakeItemGroup::BindItem20},
			{"iItem_21", &MakeItemGroup::BindItem21},
			{"iItem_22", &MakeItemGroup::BindItem22},
			{"iItem_23", &MakeItemGroup::BindItem23},
			{"iItem_24", &MakeItemGroup::BindItem24},
			{"iItem_25", &MakeItemGroup::BindItem25},
			{"iItem_26", &MakeItemGroup::BindItem26},
			{"iItem_27", &MakeItemGroup::BindItem27},
			{"iItem_28", &MakeItemGroup::BindItem28},
			{"iItem_29", &MakeItemGroup::BindItem29},
			{"iItem_30", &MakeItemGroup::BindItem30}
		};
		return bindingsMap;
	}

	void MakeItemGroup::BindItemGroupNumber(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemGroupNumber);
	}

	void MakeItemGroup::BindItem1(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[0]);
	}

	void MakeItemGroup::BindItem2(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[1]);
	}

	void MakeItemGroup::BindItem3(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[2]);
	}

	void MakeItemGroup::BindItem4(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[3]);
	}

	void MakeItemGroup::BindItem5(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[4]);
	}

	void MakeItemGroup::BindItem6(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[5]);
	}

	void MakeItemGroup::BindItem7(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[6]);
	}

	void MakeItemGroup::BindItem8(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[7]);
	}

	void MakeItemGroup::BindItem9(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[8]);
	}

	void MakeItemGroup::BindItem10(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[9]);
	}

	void MakeItemGroup::BindItem11(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[10]);
	}

	void MakeItemGroup::BindItem12(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[11]);
	}

	void MakeItemGroup::BindItem13(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[12]);
	}

	void MakeItemGroup::BindItem14(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[13]);
	}

	void MakeItemGroup::BindItem15(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[14]);
	}

	void MakeItemGroup::BindItem16(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[15]);
	}

	void MakeItemGroup::BindItem17(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[16]);
	}

	void MakeItemGroup::BindItem18(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[17]);
	}

	void MakeItemGroup::BindItem19(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[18]);
	}

	void MakeItemGroup::BindItem20(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[19]);
	}

	void MakeItemGroup::BindItem21(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[20]);
	}

	void MakeItemGroup::BindItem22(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[21]);
	}

	void MakeItemGroup::BindItem23(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[22]);
	}

	void MakeItemGroup::BindItem24(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[23]);
	}

	void MakeItemGroup::BindItem25(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[24]);
	}

	void MakeItemGroup::BindItem26(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[25]);
	}

	void MakeItemGroup::BindItem27(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[26]);
	}

	void MakeItemGroup::BindItem28(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[27]);
	}

	void MakeItemGroup::BindItem29(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[28]);
	}

	void MakeItemGroup::BindItem30(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[29]);
	}

	const MakeItemRareCode::BindingsMapType& MakeItemRareCode::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevelGrade", &MakeItemRareCode::BindLevelGrade},
			{"sUpgradeItem", &MakeItemRareCode::BindUpgradeItem},
			{"sLareItem", &MakeItemRareCode::BindRareItem},
			{"sMagicItem", &MakeItemRareCode::BindMagicItem},
			{"sGereralItem", &MakeItemRareCode::BindGeneralItem}
		};
		return bindingsMap;
	}

	void MakeItemRareCode::BindLevelGrade(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelGrade);
	}

	void MakeItemRareCode::BindUpgradeItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.UpgradeItem);
	}

	void MakeItemRareCode::BindRareItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RareItem);
	}

	void MakeItemRareCode::BindMagicItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicItem);
	}

	void MakeItemRareCode::BindGeneralItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GeneralItem);
	}

	const MakeWeapon::BindingsMapType& MakeWeapon::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevel", &MakeWeapon::BindLevel},
			{"sClass_1", &MakeWeapon::BindClass1},
			{"sClass_2", &MakeWeapon::BindClass2},
			{"sClass_3", &MakeWeapon::BindClass3},
			{"sClass_4", &MakeWeapon::BindClass4},
			{"sClass_5", &MakeWeapon::BindClass5},
			{"sClass_6", &MakeWeapon::BindClass6},
			{"sClass_7", &MakeWeapon::BindClass7},
			{"sClass_8", &MakeWeapon::BindClass8},
			{"sClass_9", &MakeWeapon::BindClass9},
			{"sClass_10", &MakeWeapon::BindClass10},
			{"sClass_11", &MakeWeapon::BindClass11},
			{"sClass_12", &MakeWeapon::BindClass12}
		};
		return bindingsMap;
	}

	void MakeWeapon::BindLevel(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void MakeWeapon::BindClass1(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[0]);
	}

	void MakeWeapon::BindClass2(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[1]);
	}

	void MakeWeapon::BindClass3(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[2]);
	}

	void MakeWeapon::BindClass4(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[3]);
	}

	void MakeWeapon::BindClass5(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[4]);
	}

	void MakeWeapon::BindClass6(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[5]);
	}

	void MakeWeapon::BindClass7(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[6]);
	}

	void MakeWeapon::BindClass8(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[7]);
	}

	void MakeWeapon::BindClass9(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[8]);
	}

	void MakeWeapon::BindClass10(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[9]);
	}

	void MakeWeapon::BindClass11(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[10]);
	}

	void MakeWeapon::BindClass12(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[11]);
	}

	const MonsterSummonList::BindingsMapType& MonsterSummonList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &MonsterSummonList::BindMonsterId},
			{"strName", &MonsterSummonList::BindName},
			{"sLevel", &MonsterSummonList::BindLevel},
			{"sProbability", &MonsterSummonList::BindProbability},
			{"bType", &MonsterSummonList::BindType}
		};
		return bindingsMap;
	}

	void MonsterSummonList::BindMonsterId(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	void MonsterSummonList::BindName(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void MonsterSummonList::BindLevel(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	void MonsterSummonList::BindProbability(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Probability);
	}

	void MonsterSummonList::BindType(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	const ZoneInfo::BindingsMapType& ZoneInfo::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ServerNo", &ZoneInfo::BindServerId},
			{"ZoneNo", &ZoneInfo::BindZoneId},
			{"strZoneName", &ZoneInfo::BindName},
			{"InitX", &ZoneInfo::BindInitX},
			{"InitZ", &ZoneInfo::BindInitZ},
			{"InitY", &ZoneInfo::BindInitY},
			{"Type", &ZoneInfo::BindType},
			{"RoomEvent", &ZoneInfo::BindRoomEvent}
		};
		return bindingsMap;
	}

	void ZoneInfo::BindServerId(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	void ZoneInfo::BindZoneId(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	void ZoneInfo::BindName(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void ZoneInfo::BindInitX(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitX);
	}

	void ZoneInfo::BindInitZ(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitZ);
	}

	void ZoneInfo::BindInitY(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitY);
	}

	void ZoneInfo::BindType(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void ZoneInfo::BindRoomEvent(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RoomEvent);
	}
}