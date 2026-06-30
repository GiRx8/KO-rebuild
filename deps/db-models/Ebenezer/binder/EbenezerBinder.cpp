#include "EbenezerBinder.h"
#include <Ebenezer/model/EbenezerModel.h>
#include <BinderUtil/BinderUtil.h>
#include <nanodbc/nanodbc.h>

namespace ebenezer_binder
{
	const Battle::BindingsMapType& Battle::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &Battle::BindIndex},
			{"byNation", &Battle::BindNation}
		};
		return bindingsMap;
	}

	void Battle::BindIndex(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void Battle::BindNation(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	const Coefficient::BindingsMapType& Coefficient::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sClass", &Coefficient::BindClassId},
			{"ShortSword", &Coefficient::BindShortSword},
			{"Sword", &Coefficient::BindSword},
			{"Axe", &Coefficient::BindAxe},
			{"Club", &Coefficient::BindClub},
			{"Spear", &Coefficient::BindSpear},
			{"Pole", &Coefficient::BindPole},
			{"Staff", &Coefficient::BindStaff},
			{"Bow", &Coefficient::BindBow},
			{"Hp", &Coefficient::BindHitPoint},
			{"Mp", &Coefficient::BindManaPoint},
			{"Sp", &Coefficient::BindSp},
			{"Ac", &Coefficient::BindArmor},
			{"Hitrate", &Coefficient::BindHitRate},
			{"Evasionrate", &Coefficient::BindEvasionrate}
		};
		return bindingsMap;
	}

	void Coefficient::BindClassId(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ClassId);
	}

	void Coefficient::BindShortSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.ShortSword);
	}

	void Coefficient::BindSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Sword);
	}

	void Coefficient::BindAxe(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Axe);
	}

	void Coefficient::BindClub(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Club);
	}

	void Coefficient::BindSpear(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Spear);
	}

	void Coefficient::BindPole(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Pole);
	}

	void Coefficient::BindStaff(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Staff);
	}

	void Coefficient::BindBow(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Bow);
	}

	void Coefficient::BindHitPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.HitPoint);
	}

	void Coefficient::BindManaPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.ManaPoint);
	}

	void Coefficient::BindSp(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Sp);
	}

	void Coefficient::BindArmor(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Armor);
	}

	void Coefficient::BindHitRate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.HitRate);
	}

	void Coefficient::BindEvasionrate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Evasionrate);
	}

	const CouponSerialList::BindingsMapType& CouponSerialList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &CouponSerialList::BindIndex},
			{"strSerialNum", &CouponSerialList::BindSerialNum},
			{"nItemNum", &CouponSerialList::BindItemNumber},
			{"sItemCount", &CouponSerialList::BindItemCount}
		};
		return bindingsMap;
	}

	void CouponSerialList::BindIndex(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void CouponSerialList::BindSerialNum(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.SerialNum);
	}

	void CouponSerialList::BindItemNumber(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemNumber);
	}

	void CouponSerialList::BindItemCount(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ItemCount);
	}

	const Event::BindingsMapType& Event::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneNum", &Event::BindZoneNumber},
			{"EventNum", &Event::BindEventNumber},
			{"Type", &Event::BindEventType},
			{"Exec1", &Event::BindExecute1},
			{"Exec2", &Event::BindExecute2},
			{"Exec3", &Event::BindExecute3},
			{"Exec4", &Event::BindExecute4},
			{"Exec5", &Event::BindExecute5}
		};
		return bindingsMap;
	}

	void Event::BindZoneNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ZoneNumber);
	}

	void Event::BindEventNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EventNumber);
	}

	void Event::BindEventType(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.EventType);
	}

	void Event::BindExecute1(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute1);
	}

	void Event::BindExecute2(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute2);
	}

	void Event::BindExecute3(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute3);
	}

	void Event::BindExecute4(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute4);
	}

	void Event::BindExecute5(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute5);
	}

	const EventTrigger::BindingsMapType& EventTrigger::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &EventTrigger::BindIndex},
			{"bNpcType", &EventTrigger::BindNpcType},
			{"sNpcID", &EventTrigger::BindNpcId},
			{"nTriggerNum", &EventTrigger::BindTriggerNumber}
		};
		return bindingsMap;
	}

	void EventTrigger::BindIndex(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void EventTrigger::BindNpcType(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NpcType);
	}

	void EventTrigger::BindNpcId(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	void EventTrigger::BindTriggerNumber(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TriggerNumber);
	}

	const Home::BindingsMapType& Home::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"Nation", &Home::BindNation},
			{"ElmoZoneX", &Home::BindElmoZoneX},
			{"ElmoZoneZ", &Home::BindElmoZoneZ},
			{"ElmoZoneLX", &Home::BindElmoZoneLX},
			{"ElmoZoneLZ", &Home::BindElmoZoneLZ},
			{"KarusZoneX", &Home::BindKarusZoneX},
			{"KarusZoneZ", &Home::BindKarusZoneZ},
			{"KarusZoneLX", &Home::BindKarusZoneLX},
			{"KarusZoneLZ", &Home::BindKarusZoneLZ},
			{"FreeZoneX", &Home::BindFreeZoneX},
			{"FreeZoneZ", &Home::BindFreeZoneZ},
			{"FreeZoneLX", &Home::BindFreeZoneLX},
			{"FreeZoneLZ", &Home::BindFreeZoneLZ},
			{"BattleZoneX", &Home::BindBattleZoneX},
			{"BattleZoneZ", &Home::BindBattleZoneZ},
			{"BattleZoneLX", &Home::BindBattleZoneLX},
			{"BattleZoneLZ", &Home::BindBattleZoneLZ},
			{"BattleZone2X", &Home::BindBattleZone2X},
			{"BattleZone2Z", &Home::BindBattleZone2Z},
			{"BattleZone2LX", &Home::BindBattleZone2LX},
			{"BattleZone2LZ", &Home::BindBattleZone2LZ}
		};
		return bindingsMap;
	}

	void Home::BindNation(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void Home::BindElmoZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
	}

	void Home::BindElmoZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
	}

	void Home::BindElmoZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoZoneLX);
	}

	void Home::BindElmoZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoZoneLZ);
	}

	void Home::BindKarusZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusZoneX);
	}

	void Home::BindKarusZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
	}

	void Home::BindKarusZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusZoneLX);
	}

	void Home::BindKarusZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusZoneLZ);
	}

	void Home::BindFreeZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.FreeZoneX);
	}

	void Home::BindFreeZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
	}

	void Home::BindFreeZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FreeZoneLX);
	}

	void Home::BindFreeZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FreeZoneLZ);
	}

	void Home::BindBattleZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZoneX);
	}

	void Home::BindBattleZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
	}

	void Home::BindBattleZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZoneLX);
	}

	void Home::BindBattleZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZoneLZ);
	}

	void Home::BindBattleZone2X(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZone2X);
	}

	void Home::BindBattleZone2Z(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
	}

	void Home::BindBattleZone2LX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZone2LX);
	}

	void Home::BindBattleZone2LZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZone2LZ);
	}

	const Item::BindingsMapType& Item::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"Num", &Item::BindID},
			{"strName", &Item::BindName},
			{"Kind", &Item::BindKind},
			{"Slot", &Item::BindSlot},
			{"Race", &Item::BindRace},
			{"Class", &Item::BindClassId},
			{"Damage", &Item::BindDamage},
			{"Delay", &Item::BindDelay},
			{"Range", &Item::BindRange},
			{"Weight", &Item::BindWeight},
			{"Duration", &Item::BindDurability},
			{"BuyPrice", &Item::BindBuyPrice},
			{"SellPrice", &Item::BindSellPrice},
			{"Ac", &Item::BindArmor},
			{"Countable", &Item::BindCountable},
			{"Effect1", &Item::BindMagicEffect},
			{"Effect2", &Item::BindSpecialEffect},
			{"ReqLevel", &Item::BindMinLevel},
			{"ReqRank", &Item::BindRequiredRank},
			{"ReqTitle", &Item::BindRequiredTitle},
			{"ReqStr", &Item::BindRequiredStrength},
			{"ReqSta", &Item::BindRequiredStamina},
			{"ReqDex", &Item::BindRequiredDexterity},
			{"ReqIntel", &Item::BindRequiredIntelligence},
			{"ReqCha", &Item::BindRequiredCharisma},
			{"SellingGroup", &Item::BindSellingGroup},
			{"ItemType", &Item::BindType},
			{"Hitrate", &Item::BindHitRate},
			{"Evasionrate", &Item::BindEvasionRate},
			{"DaggerAc", &Item::BindDaggerArmor},
			{"SwordAc", &Item::BindSwordArmor},
			{"MaceAc", &Item::BindMaceArmor},
			{"AxeAc", &Item::BindAxeArmor},
			{"SpearAc", &Item::BindSpearArmor},
			{"BowAc", &Item::BindBowArmor},
			{"FireDamage", &Item::BindFireDamage},
			{"IceDamage", &Item::BindIceDamage},
			{"LightningDamage", &Item::BindLightningDamage},
			{"PoisonDamage", &Item::BindPoisonDamage},
			{"HPDrain", &Item::BindHpDrain},
			{"MPDamage", &Item::BindMpDamage},
			{"MPDrain", &Item::BindMpDrain},
			{"MirrorDamage", &Item::BindMirrorDamage},
			{"Droprate", &Item::BindDropRate},
			{"StrB", &Item::BindStrengthBonus},
			{"StaB", &Item::BindStaminaBonus},
			{"DexB", &Item::BindDexterityBonus},
			{"IntelB", &Item::BindIntelligenceBonus},
			{"ChaB", &Item::BindCharismaBonus},
			{"MaxHpB", &Item::BindMaxHpBonus},
			{"MaxMpB", &Item::BindMaxMpBonus},
			{"FireR", &Item::BindFireResist},
			{"ColdR", &Item::BindColdResist},
			{"LightningR", &Item::BindLightningResist},
			{"MagicR", &Item::BindMagicResist},
			{"PoisonR", &Item::BindPoisonResist},
			{"CurseR", &Item::BindCurseResist}
		};
		return bindingsMap;
	}

	void Item::BindID(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void Item::BindName(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void Item::BindKind(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Kind);
	}

	void Item::BindSlot(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Slot);
	}

	void Item::BindRace(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Race);
	}

	void Item::BindClassId(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ClassId);
	}

	void Item::BindDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void Item::BindDelay(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Delay);
	}

	void Item::BindRange(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	void Item::BindWeight(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Weight);
	}

	void Item::BindDurability(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	void Item::BindBuyPrice(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BuyPrice);
	}

	void Item::BindSellPrice(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellPrice);
	}

	void Item::BindArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void Item::BindCountable(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Countable);
	}

	void Item::BindMagicEffect(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MagicEffect);
	}

	void Item::BindSpecialEffect(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SpecialEffect);
	}

	void Item::BindMinLevel(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MinLevel);
	}

	void Item::BindRequiredRank(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredRank);
	}

	void Item::BindRequiredTitle(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredTitle);
	}

	void Item::BindRequiredStrength(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredStrength);
	}

	void Item::BindRequiredStamina(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredStamina);
	}

	void Item::BindRequiredDexterity(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredDexterity);
	}

	void Item::BindRequiredIntelligence(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredIntelligence);
	}

	void Item::BindRequiredCharisma(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredCharisma);
	}

	void Item::BindSellingGroup(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SellingGroup);
	}

	void Item::BindType(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void Item::BindHitRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void Item::BindEvasionRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvasionRate);
	}

	void Item::BindDaggerArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DaggerArmor);
	}

	void Item::BindSwordArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SwordArmor);
	}

	void Item::BindMaceArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaceArmor);
	}

	void Item::BindAxeArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AxeArmor);
	}

	void Item::BindSpearArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SpearArmor);
	}

	void Item::BindBowArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.BowArmor);
	}

	void Item::BindFireDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireDamage);
	}

	void Item::BindIceDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IceDamage);
	}

	void Item::BindLightningDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningDamage);
	}

	void Item::BindPoisonDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonDamage);
	}

	void Item::BindHpDrain(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HpDrain);
	}

	void Item::BindMpDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MpDamage);
	}

	void Item::BindMpDrain(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MpDrain);
	}

	void Item::BindMirrorDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MirrorDamage);
	}

	void Item::BindDropRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DropRate);
	}

	void Item::BindStrengthBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StrengthBonus);
	}

	void Item::BindStaminaBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StaminaBonus);
	}

	void Item::BindDexterityBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DexterityBonus);
	}

	void Item::BindIntelligenceBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
	}

	void Item::BindCharismaBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CharismaBonus);
	}

	void Item::BindMaxHpBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
	}

	void Item::BindMaxMpBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
	}

	void Item::BindFireResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	void Item::BindColdResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	void Item::BindLightningResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	void Item::BindMagicResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	void Item::BindPoisonResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	void Item::BindCurseResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CurseResist);
	}

	const ItemExchange::BindingsMapType& ItemExchange::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &ItemExchange::BindIndex},
			{"nNpcNum", &ItemExchange::BindNpcNumber},
			{"bRandomFlag", &ItemExchange::BindRandomFlag},
			{"nOriginItemNum1", &ItemExchange::BindOriginItemNumber1},
			{"nOriginItemCount1", &ItemExchange::BindOriginItemCount1},
			{"nOriginItemNum2", &ItemExchange::BindOriginItemNumber2},
			{"nOriginItemCount2", &ItemExchange::BindOriginItemCount2},
			{"nOriginItemNum3", &ItemExchange::BindOriginItemNumber3},
			{"nOriginItemCount3", &ItemExchange::BindOriginItemCount3},
			{"nOriginItemNum4", &ItemExchange::BindOriginItemNumber4},
			{"nOriginItemCount4", &ItemExchange::BindOriginItemCount4},
			{"nOriginItemNum5", &ItemExchange::BindOriginItemNumber5},
			{"nOriginItemCount5", &ItemExchange::BindOriginItemCount5},
			{"nExchangeItemNum1", &ItemExchange::BindExchangeItemNumber1},
			{"nExchangeItemCount1", &ItemExchange::BindExchangeItemCount1},
			{"nExchangeItemNum2", &ItemExchange::BindExchangeItemNumber2},
			{"nExchangeItemCount2", &ItemExchange::BindExchangeItemCount2},
			{"nExchangeItemNum3", &ItemExchange::BindExchangeItemNumber3},
			{"nExchangeItemCount3", &ItemExchange::BindExchangeItemCount3},
			{"nExchangeItemNum4", &ItemExchange::BindExchangeItemNumber4},
			{"nExchangeItemCount4", &ItemExchange::BindExchangeItemCount4},
			{"nExchangeItemNum5", &ItemExchange::BindExchangeItemNumber5},
			{"nExchangeItemCount5", &ItemExchange::BindExchangeItemCount5}
		};
		return bindingsMap;
	}

	void ItemExchange::BindIndex(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void ItemExchange::BindNpcNumber(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcNumber);
	}

	void ItemExchange::BindRandomFlag(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RandomFlag);
	}

	void ItemExchange::BindOriginItemNumber1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[0]);
	}

	void ItemExchange::BindOriginItemCount1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[0]);
	}

	void ItemExchange::BindOriginItemNumber2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[1]);
	}

	void ItemExchange::BindOriginItemCount2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[1]);
	}

	void ItemExchange::BindOriginItemNumber3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[2]);
	}

	void ItemExchange::BindOriginItemCount3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[2]);
	}

	void ItemExchange::BindOriginItemNumber4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[3]);
	}

	void ItemExchange::BindOriginItemCount4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[3]);
	}

	void ItemExchange::BindOriginItemNumber5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[4]);
	}

	void ItemExchange::BindOriginItemCount5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[4]);
	}

	void ItemExchange::BindExchangeItemNumber1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[0]);
	}

	void ItemExchange::BindExchangeItemCount1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[0]);
	}

	void ItemExchange::BindExchangeItemNumber2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[1]);
	}

	void ItemExchange::BindExchangeItemCount2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[1]);
	}

	void ItemExchange::BindExchangeItemNumber3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[2]);
	}

	void ItemExchange::BindExchangeItemCount3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[2]);
	}

	void ItemExchange::BindExchangeItemNumber4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[3]);
	}

	void ItemExchange::BindExchangeItemCount4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[3]);
	}

	void ItemExchange::BindExchangeItemNumber5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[4]);
	}

	void ItemExchange::BindExchangeItemCount5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[4]);
	}

	const ItemUpgrade::BindingsMapType& ItemUpgrade::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &ItemUpgrade::BindIndex},
			{"nNPCNum", &ItemUpgrade::BindNpcNumber},
			{"nOriginType", &ItemUpgrade::BindOriginType},
			{"nOriginItem", &ItemUpgrade::BindOriginItem},
			{"nReqItem1", &ItemUpgrade::BindRequiredItem1},
			{"nReqItem2", &ItemUpgrade::BindRequiredItem2},
			{"nReqItem3", &ItemUpgrade::BindRequiredItem3},
			{"nReqItem4", &ItemUpgrade::BindRequiredItem4},
			{"nReqItem5", &ItemUpgrade::BindRequiredItem5},
			{"nReqItem6", &ItemUpgrade::BindRequiredItem6},
			{"nReqItem7", &ItemUpgrade::BindRequiredItem7},
			{"nReqItem8", &ItemUpgrade::BindRequiredItem8},
			{"nReqNoah", &ItemUpgrade::BindRequiredCoins},
			{"bRateType", &ItemUpgrade::BindRateType},
			{"nGenRate", &ItemUpgrade::BindGenRate},
			{"nGiveItem", &ItemUpgrade::BindGiveItem}
		};
		return bindingsMap;
	}

	void ItemUpgrade::BindIndex(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void ItemUpgrade::BindNpcNumber(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcNumber);
	}

	void ItemUpgrade::BindOriginType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginType);
	}

	void ItemUpgrade::BindOriginItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItem);
	}

	void ItemUpgrade::BindRequiredItem1(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[0]);
	}

	void ItemUpgrade::BindRequiredItem2(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[1]);
	}

	void ItemUpgrade::BindRequiredItem3(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[2]);
	}

	void ItemUpgrade::BindRequiredItem4(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[3]);
	}

	void ItemUpgrade::BindRequiredItem5(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[4]);
	}

	void ItemUpgrade::BindRequiredItem6(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[5]);
	}

	void ItemUpgrade::BindRequiredItem7(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[6]);
	}

	void ItemUpgrade::BindRequiredItem8(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[7]);
	}

	void ItemUpgrade::BindRequiredCoins(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredCoins);
	}

	void ItemUpgrade::BindRateType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RateType);
	}

	void ItemUpgrade::BindGenRate(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GenRate);
	}

	void ItemUpgrade::BindGiveItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GiveItem);
	}

	const Knights::BindingsMapType& Knights::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"IDNum", &Knights::BindID},
			{"Flag", &Knights::BindFlag},
			{"Nation", &Knights::BindNation},
			{"Ranking", &Knights::BindRanking},
			{"IDName", &Knights::BindName},
			{"Members", &Knights::BindMembers},
			{"Chief", &Knights::BindChief},
			{"ViceChief_1", &Knights::BindViceChief1},
			{"ViceChief_2", &Knights::BindViceChief2},
			{"ViceChief_3", &Knights::BindViceChief3},
			{"strEnemyName", &Knights::BindEnemyName},
			{"byOldWarResult", &Knights::BindOldWarResult},
			{"nWarEnemyID", &Knights::BindWarEnemyId},
			{"nVictory", &Knights::BindVictory},
			{"nLose", &Knights::BindLose},
			{"Gold", &Knights::BindGold},
			{"Domination", &Knights::BindDomination},
			{"Points", &Knights::BindPoints},
			{"sMarkVersion", &Knights::BindMarkVersion},
			{"sMarkLen", &Knights::BindMarkLength},
			{"Mark", &Knights::BindMark},
			{"bySiegeFlag", &Knights::BindSiegeFlag},
			{"sAllianceKnights", &Knights::BindAllianceKnights},
			{"sCape", &Knights::BindCape}
		};
		return bindingsMap;
	}

	void Knights::BindID(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ID);
	}

	void Knights::BindFlag(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Flag);
	}

	void Knights::BindNation(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void Knights::BindRanking(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Ranking);
	}

	void Knights::BindName(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void Knights::BindMembers(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Members);
	}

	void Knights::BindChief(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Chief);
	}

	void Knights::BindViceChief1(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief1);
	}

	void Knights::BindViceChief2(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief2);
	}

	void Knights::BindViceChief3(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief3);
	}

	void Knights::BindEnemyName(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.EnemyName);
	}

	void Knights::BindOldWarResult(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.OldWarResult);
	}

	void Knights::BindWarEnemyId(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.WarEnemyId);
	}

	void Knights::BindVictory(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Victory);
	}

	void Knights::BindLose(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Lose);
	}

	void Knights::BindGold(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.Gold);
	}

	void Knights::BindDomination(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Domination);
	}

	void Knights::BindPoints(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	void Knights::BindMarkVersion(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MarkVersion);
	}

	void Knights::BindMarkLength(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MarkLength);
	}

	void Knights::BindMark(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Mark);
	}

	void Knights::BindSiegeFlag(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SiegeFlag);
	}

	void Knights::BindAllianceKnights(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AllianceKnights);
	}

	void Knights::BindCape(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Cape);
	}

	const KnightsAlliance::BindingsMapType& KnightsAlliance::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sMainAllianceKnights", &KnightsAlliance::BindMainAllianceKnights},
			{"sSubAllianceKnights", &KnightsAlliance::BindSubAllianceKnights},
			{"sMercenaryClan_1", &KnightsAlliance::BindMercenaryClan1},
			{"sMercenaryClan_2", &KnightsAlliance::BindMercenaryClan2}
		};
		return bindingsMap;
	}

	void KnightsAlliance::BindMainAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
	}

	void KnightsAlliance::BindSubAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
	}

	void KnightsAlliance::BindMercenaryClan1(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
	}

	void KnightsAlliance::BindMercenaryClan2(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
	}

	const KnightsCape::BindingsMapType& KnightsCape::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCapeIndex", &KnightsCape::BindCapeIndex},
			{"nBuyPrice", &KnightsCape::BindBuyPrice},
			{"nDuration", &KnightsCape::BindDuration},
			{"byGrade", &KnightsCape::BindGrade}
		};
		return bindingsMap;
	}

	void KnightsCape::BindCapeIndex(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CapeIndex);
	}

	void KnightsCape::BindBuyPrice(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BuyPrice);
	}

	void KnightsCape::BindDuration(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Duration);
	}

	void KnightsCape::BindGrade(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Grade);
	}

	const KnightsRating::BindingsMapType& KnightsRating::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRank", &KnightsRating::BindRank},
			{"shIndex", &KnightsRating::BindIndex},
			{"strName", &KnightsRating::BindName},
			{"nPoints", &KnightsRating::BindPoints}
		};
		return bindingsMap;
	}

	void KnightsRating::BindRank(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Rank);
	}

	void KnightsRating::BindIndex(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void KnightsRating::BindName(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void KnightsRating::BindPoints(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	const KnightsSiegeWarfare::BindingsMapType& KnightsSiegeWarfare::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCastleIndex", &KnightsSiegeWarfare::BindCastleIndex},
			{"sMasterKnights", &KnightsSiegeWarfare::BindMasterKnights},
			{"bySiegeType", &KnightsSiegeWarfare::BindSiegeType},
			{"byWarDay", &KnightsSiegeWarfare::BindWarDay},
			{"byWarTime", &KnightsSiegeWarfare::BindWarHour},
			{"byWarMinute", &KnightsSiegeWarfare::BindWarMinute},
			{"sChallengeList_1", &KnightsSiegeWarfare::BindChallengeList1},
			{"sChallengeList_2", &KnightsSiegeWarfare::BindChallengeList2},
			{"sChallengeList_3", &KnightsSiegeWarfare::BindChallengeList3},
			{"sChallengeList_4", &KnightsSiegeWarfare::BindChallengeList4},
			{"sChallengeList_5", &KnightsSiegeWarfare::BindChallengeList5},
			{"sChallengeList_6", &KnightsSiegeWarfare::BindChallengeList6},
			{"sChallengeList_7", &KnightsSiegeWarfare::BindChallengeList7},
			{"sChallengeList_8", &KnightsSiegeWarfare::BindChallengeList8},
			{"sChallengeList_9", &KnightsSiegeWarfare::BindChallengeList9},
			{"sChallengeList_10", &KnightsSiegeWarfare::BindChallengeList10},
			{"byWarRequestDay", &KnightsSiegeWarfare::BindWarRequestDay},
			{"byWarRequestTime", &KnightsSiegeWarfare::BindWarRequestTime},
			{"byWarRequestMinute", &KnightsSiegeWarfare::BindWarRequestMinute},
			{"byGuerrillaWarDay", &KnightsSiegeWarfare::BindGuerrillaWarDay},
			{"byGuerrillaWarTime", &KnightsSiegeWarfare::BindGuerrillaWarTime},
			{"byGuerrillaWarMinute", &KnightsSiegeWarfare::BindGuerrillaWarMinute},
			{"strChallengeList", &KnightsSiegeWarfare::BindChallengeList},
			{"sMoradonTariff", &KnightsSiegeWarfare::BindMoradonTariff},
			{"sDellosTariff", &KnightsSiegeWarfare::BindDelosTariff},
			{"nDungeonCharge", &KnightsSiegeWarfare::BindDungeonCharge},
			{"nMoradonTax", &KnightsSiegeWarfare::BindMoradonTax},
			{"nDellosTax", &KnightsSiegeWarfare::BindDelosTax},
			{"sRequestList_1", &KnightsSiegeWarfare::BindRequestList1},
			{"sRequestList_2", &KnightsSiegeWarfare::BindRequestList2},
			{"sRequestList_3", &KnightsSiegeWarfare::BindRequestList3},
			{"sRequestList_4", &KnightsSiegeWarfare::BindRequestList4},
			{"sRequestList_5", &KnightsSiegeWarfare::BindRequestList5},
			{"sRequestList_6", &KnightsSiegeWarfare::BindRequestList6},
			{"sRequestList_7", &KnightsSiegeWarfare::BindRequestList7},
			{"sRequestList_8", &KnightsSiegeWarfare::BindRequestList8},
			{"sRequestList_9", &KnightsSiegeWarfare::BindRequestList9},
			{"sRequestList_10", &KnightsSiegeWarfare::BindRequestList10}
		};
		return bindingsMap;
	}

	void KnightsSiegeWarfare::BindCastleIndex(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CastleIndex);
	}

	void KnightsSiegeWarfare::BindMasterKnights(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MasterKnights);
	}

	void KnightsSiegeWarfare::BindSiegeType(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SiegeType);
	}

	void KnightsSiegeWarfare::BindWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarDay);
	}

	void KnightsSiegeWarfare::BindWarHour(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarHour);
	}

	void KnightsSiegeWarfare::BindWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarMinute);
	}

	void KnightsSiegeWarfare::BindChallengeList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList1);
	}

	void KnightsSiegeWarfare::BindChallengeList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList2);
	}

	void KnightsSiegeWarfare::BindChallengeList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList3);
	}

	void KnightsSiegeWarfare::BindChallengeList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList4);
	}

	void KnightsSiegeWarfare::BindChallengeList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList5);
	}

	void KnightsSiegeWarfare::BindChallengeList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList6);
	}

	void KnightsSiegeWarfare::BindChallengeList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList7);
	}

	void KnightsSiegeWarfare::BindChallengeList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList8);
	}

	void KnightsSiegeWarfare::BindChallengeList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList9);
	}

	void KnightsSiegeWarfare::BindChallengeList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList10);
	}

	void KnightsSiegeWarfare::BindWarRequestDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestDay);
	}

	void KnightsSiegeWarfare::BindWarRequestTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestTime);
	}

	void KnightsSiegeWarfare::BindWarRequestMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestMinute);
	}

	void KnightsSiegeWarfare::BindGuerrillaWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarDay);
	}

	void KnightsSiegeWarfare::BindGuerrillaWarTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarTime);
	}

	void KnightsSiegeWarfare::BindGuerrillaWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarMinute);
	}

	void KnightsSiegeWarfare::BindChallengeList(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ChallengeList);
	}

	void KnightsSiegeWarfare::BindMoradonTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MoradonTariff);
	}

	void KnightsSiegeWarfare::BindDelosTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DelosTariff);
	}

	void KnightsSiegeWarfare::BindDungeonCharge(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DungeonCharge);
	}

	void KnightsSiegeWarfare::BindMoradonTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MoradonTax);
	}

	void KnightsSiegeWarfare::BindDelosTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DelosTax);
	}

	void KnightsSiegeWarfare::BindRequestList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList1);
	}

	void KnightsSiegeWarfare::BindRequestList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList2);
	}

	void KnightsSiegeWarfare::BindRequestList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList3);
	}

	void KnightsSiegeWarfare::BindRequestList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList4);
	}

	void KnightsSiegeWarfare::BindRequestList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList5);
	}

	void KnightsSiegeWarfare::BindRequestList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList6);
	}

	void KnightsSiegeWarfare::BindRequestList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList7);
	}

	void KnightsSiegeWarfare::BindRequestList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList8);
	}

	void KnightsSiegeWarfare::BindRequestList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList9);
	}

	void KnightsSiegeWarfare::BindRequestList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList10);
	}

	const KnightsUser::BindingsMapType& KnightsUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIDNum", &KnightsUser::BindKnightsId},
			{"strUserID", &KnightsUser::BindUserId}
		};
		return bindingsMap;
	}

	void KnightsUser::BindKnightsId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KnightsId);
	}

	void KnightsUser::BindUserId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
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

	void LevelUp::BindLevel(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void LevelUp::BindRequiredExp(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex)
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

	void Magic::BindID(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void Magic::BindBeforeAction(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BeforeAction);
	}

	void Magic::BindTargetAction(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetAction);
	}

	void Magic::BindSelfEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SelfEffect);
	}

	void Magic::BindFlyingEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
	}

	void Magic::BindTargetEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TargetEffect);
	}

	void Magic::BindMoral(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Moral);
	}

	void Magic::BindSkillLevel(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SkillLevel);
	}

	void Magic::BindSkill(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Skill);
	}

	void Magic::BindManaCost(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaCost);
	}

	void Magic::BindHpCost(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HpCost);
	}

	void Magic::BindItemGroup(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemGroup);
	}

	void Magic::BindUseItem(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.UseItem);
	}

	void Magic::BindCastTime(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.CastTime);
	}

	void Magic::BindRecastTime(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RecastTime);
	}

	void Magic::BindSuccessRate(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SuccessRate);
	}

	void Magic::BindType1(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type1);
	}

	void Magic::BindType2(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type2);
	}

	void Magic::BindRange(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	void Magic::BindEtc(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Etc);
	}

	void Magic::BindEvent(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex)
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

	void MagicType1::BindID(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType1::BindType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void MagicType1::BindHitRateMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	void MagicType1::BindDamageMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	void MagicType1::BindAddDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	void MagicType1::BindDelay(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Delay);
	}

	void MagicType1::BindComboType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboType);
	}

	void MagicType1::BindComboCount(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboCount);
	}

	void MagicType1::BindComboDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ComboDamage);
	}

	void MagicType1::BindRange(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex)
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

	void MagicType2::BindID(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType2::BindHitType(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitType);
	}

	void MagicType2::BindHitRateMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	void MagicType2::BindDamageMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	void MagicType2::BindRangeMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RangeMod);
	}

	void MagicType2::BindNeedArrow(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedArrow);
	}

	void MagicType2::BindAddDamagePlus(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex)
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

	void MagicType3::BindID(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType3::BindRadius(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType3::BindAngle(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Angle);
	}

	void MagicType3::BindDirectType(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectType);
	}

	void MagicType3::BindFirstDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FirstDamage);
	}

	void MagicType3::BindEndDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EndDamage);
	}

	void MagicType3::BindTimeDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TimeDamage);
	}

	void MagicType3::BindDuration(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Duration);
	}

	void MagicType3::BindAttribute(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex)
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

	void MagicType4::BindID(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType4::BindBuffType(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BuffType);
	}

	void MagicType4::BindRadius(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType4::BindDuration(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType4::BindAttackSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackSpeed);
	}

	void MagicType4::BindSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	void MagicType4::BindArmor(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void MagicType4::BindArmorPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ArmorPercent);
	}

	void MagicType4::BindAttackPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackPower);
	}

	void MagicType4::BindMagicPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicPower);
	}

	void MagicType4::BindMaxHp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	void MagicType4::BindMaxHpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
	}

	void MagicType4::BindMaxMp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	void MagicType4::BindMaxMpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
	}

	void MagicType4::BindHitRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitRate);
	}

	void MagicType4::BindAvoidRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AvoidRate);
	}

	void MagicType4::BindStrength(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Strength);
	}

	void MagicType4::BindStamina(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Stamina);
	}

	void MagicType4::BindDexterity(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Dexterity);
	}

	void MagicType4::BindIntelligence(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Intelligence);
	}

	void MagicType4::BindCharisma(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Charisma);
	}

	void MagicType4::BindFireResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireResist);
	}

	void MagicType4::BindColdResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ColdResist);
	}

	void MagicType4::BindLightningResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningResist);
	}

	void MagicType4::BindMagicResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicResist);
	}

	void MagicType4::BindDiseaseResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DiseaseResist);
	}

	void MagicType4::BindPoisonResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonResist);
	}

	void MagicType4::BindExpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpPercent);
	}

	const MagicType5::BindingsMapType& MagicType5::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType5::BindID},
			{"Type", &MagicType5::BindType},
			{"ExpRecover", &MagicType5::BindExpRecover},
			{"NeedStone", &MagicType5::BindNeedStone}
		};
		return bindingsMap;
	}

	void MagicType5::BindID(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType5::BindType(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void MagicType5::BindExpRecover(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpRecover);
	}

	void MagicType5::BindNeedStone(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NeedStone);
	}

	const MagicType6::BindingsMapType& MagicType6::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType6::BindID},
			{"Size", &MagicType6::BindSize},
			{"TransformID", &MagicType6::BindTransformId},
			{"Duration", &MagicType6::BindDuration},
			{"MaxHp", &MagicType6::BindMaxHp},
			{"MaxMp", &MagicType6::BindMaxMp},
			{"Speed", &MagicType6::BindSpeed},
			{"AttackSpeed", &MagicType6::BindAttackSpeed},
			{"TotalHit", &MagicType6::BindTotalHit},
			{"TotalAc", &MagicType6::BindTotalArmor},
			{"TotalHitRate", &MagicType6::BindTotalHitRate},
			{"TotalEvasionRate", &MagicType6::BindTotalEvasionRate},
			{"TotalFireR", &MagicType6::BindTotalFireResist},
			{"TotalColdR", &MagicType6::BindTotalColdResist},
			{"TotalLightningR", &MagicType6::BindTotalLightningResist},
			{"TotalMagicR", &MagicType6::BindTotalMagicResist},
			{"TotalDiseaseR", &MagicType6::BindTotalDiseaseResist},
			{"TotalPoisonR", &MagicType6::BindTotalPoisonResist},
			{"Class", &MagicType6::BindClass},
			{"UserSkillUse", &MagicType6::BindUserSkillUse},
			{"NeedItem", &MagicType6::BindNeedItem},
			{"SkillSuccessRate", &MagicType6::BindSkillSuccessRate},
			{"MonsterFriendly", &MagicType6::BindMonsterFriendly}
		};
		return bindingsMap;
	}

	void MagicType6::BindID(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType6::BindSize(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	void MagicType6::BindTransformId(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TransformId);
	}

	void MagicType6::BindDuration(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType6::BindMaxHp(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	void MagicType6::BindMaxMp(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	void MagicType6::BindSpeed(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	void MagicType6::BindAttackSpeed(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackSpeed);
	}

	void MagicType6::BindTotalHit(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalHit);
	}

	void MagicType6::BindTotalArmor(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalArmor);
	}

	void MagicType6::BindTotalHitRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalHitRate);
	}

	void MagicType6::BindTotalEvasionRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalEvasionRate);
	}

	void MagicType6::BindTotalFireResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalFireResist);
	}

	void MagicType6::BindTotalColdResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalColdResist);
	}

	void MagicType6::BindTotalLightningResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalLightningResist);
	}

	void MagicType6::BindTotalMagicResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalMagicResist);
	}

	void MagicType6::BindTotalDiseaseResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalDiseaseResist);
	}

	void MagicType6::BindTotalPoisonResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalPoisonResist);
	}

	void MagicType6::BindClass(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class);
	}

	void MagicType6::BindUserSkillUse(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.UserSkillUse);
	}

	void MagicType6::BindNeedItem(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedItem);
	}

	void MagicType6::BindSkillSuccessRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SkillSuccessRate);
	}

	void MagicType6::BindMonsterFriendly(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MonsterFriendly);
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

	void MagicType7::BindID(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType7::BindValidGroup(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	void MagicType7::BindNationChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	void MagicType7::BindMonsterNumber(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	void MagicType7::BindTargetChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	void MagicType7::BindStateChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	void MagicType7::BindRadius(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType7::BindHitRate(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void MagicType7::BindDuration(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType7::BindDamage(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void MagicType7::BindVision(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Vision);
	}

	void MagicType7::BindNeedItem(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	const MagicType8::BindingsMapType& MagicType8::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType8::BindID},
			{"Target", &MagicType8::BindTarget},
			{"Radius", &MagicType8::BindRadius},
			{"WarpType", &MagicType8::BindWarpType},
			{"ExpRecover", &MagicType8::BindExpRecover}
		};
		return bindingsMap;
	}

	void MagicType8::BindID(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType8::BindTarget(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Target);
	}

	void MagicType8::BindRadius(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Radius);
	}

	void MagicType8::BindWarpType(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarpType);
	}

	void MagicType8::BindExpRecover(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExpRecover);
	}

	const MagicType9::BindingsMapType& MagicType9::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType9::BindID},
			{"ValidGroup", &MagicType9::BindValidGroup},
			{"NationChange", &MagicType9::BindNationChange},
			{"MonsterNum", &MagicType9::BindMonsterNumber},
			{"TargetChange", &MagicType9::BindTargetChange},
			{"StateChange", &MagicType9::BindStateChange},
			{"Radius", &MagicType9::BindRadius},
			{"Hitrate", &MagicType9::BindHitRate},
			{"Duration", &MagicType9::BindDuration},
			{"AddDamage", &MagicType9::BindAddDamage},
			{"Vision", &MagicType9::BindVision},
			{"NeedItem", &MagicType9::BindNeedItem}
		};
		return bindingsMap;
	}

	void MagicType9::BindID(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType9::BindValidGroup(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	void MagicType9::BindNationChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	void MagicType9::BindMonsterNumber(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	void MagicType9::BindTargetChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	void MagicType9::BindStateChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	void MagicType9::BindRadius(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Radius);
	}

	void MagicType9::BindHitRate(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void MagicType9::BindDuration(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType9::BindAddDamage(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	void MagicType9::BindVision(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Vision);
	}

	void MagicType9::BindNeedItem(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	const MonsterChallenge::BindingsMapType& MonsterChallenge::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterChallenge::BindIndex},
			{"bStartTime1", &MonsterChallenge::BindStartTime1},
			{"bStartTime2", &MonsterChallenge::BindStartTime2},
			{"bStartTime3", &MonsterChallenge::BindStartTime3},
			{"bLevelMin", &MonsterChallenge::BindLevelMin},
			{"bLevelMax", &MonsterChallenge::BindLevelMax}
		};
		return bindingsMap;
	}

	void MonsterChallenge::BindIndex(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void MonsterChallenge::BindStartTime1(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime1);
	}

	void MonsterChallenge::BindStartTime2(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime2);
	}

	void MonsterChallenge::BindStartTime3(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime3);
	}

	void MonsterChallenge::BindLevelMin(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelMin);
	}

	void MonsterChallenge::BindLevelMax(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelMax);
	}

	const MonsterChallengeSummonList::BindingsMapType& MonsterChallengeSummonList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterChallengeSummonList::BindIndex},
			{"bLevel", &MonsterChallengeSummonList::BindLevel},
			{"bStage", &MonsterChallengeSummonList::BindStage},
			{"bStageLevel", &MonsterChallengeSummonList::BindStageLevel},
			{"sTime", &MonsterChallengeSummonList::BindTime},
			{"sSid", &MonsterChallengeSummonList::BindMonsterId},
			{"sCount", &MonsterChallengeSummonList::BindCount},
			{"sPosX", &MonsterChallengeSummonList::BindPosX},
			{"sPosZ", &MonsterChallengeSummonList::BindPosZ},
			{"bRange", &MonsterChallengeSummonList::BindRange}
		};
		return bindingsMap;
	}

	void MonsterChallengeSummonList::BindIndex(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void MonsterChallengeSummonList::BindLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void MonsterChallengeSummonList::BindStage(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Stage);
	}

	void MonsterChallengeSummonList::BindStageLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StageLevel);
	}

	void MonsterChallengeSummonList::BindTime(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Time);
	}

	void MonsterChallengeSummonList::BindMonsterId(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	void MonsterChallengeSummonList::BindCount(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Count);
	}

	void MonsterChallengeSummonList::BindPosX(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PosX);
	}

	void MonsterChallengeSummonList::BindPosZ(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PosZ);
	}

	void MonsterChallengeSummonList::BindRange(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Range);
	}

	const RentalItem::BindingsMapType& RentalItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRentalIndex", &RentalItem::BindRentalIndex},
			{"nItemIndex", &RentalItem::BindItemIndex},
			{"sDurability", &RentalItem::BindDurability},
			{"nSerialNumber", &RentalItem::BindSerialNumber},
			{"byRegType", &RentalItem::BindRegType},
			{"byItemType", &RentalItem::BindItemType},
			{"byClass", &RentalItem::BindClass},
			{"sRentalTime", &RentalItem::BindRentalTime},
			{"nRentalMoney", &RentalItem::BindRentalMoney},
			{"strLenderCharID", &RentalItem::BindLenderCharId},
			{"strLenderAcID", &RentalItem::BindLenderAccountId},
			{"strBorrowerCharID", &RentalItem::BindBorrowerCharId},
			{"strBorrowerAcID", &RentalItem::BindBorrowerAccountId}
		};
		return bindingsMap;
	}

	void RentalItem::BindRentalIndex(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalIndex);
	}

	void RentalItem::BindItemIndex(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemIndex);
	}

	void RentalItem::BindDurability(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	void RentalItem::BindSerialNumber(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.SerialNumber);
	}

	void RentalItem::BindRegType(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegType);
	}

	void RentalItem::BindItemType(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemType);
	}

	void RentalItem::BindClass(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Class);
	}

	void RentalItem::BindRentalTime(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RentalTime);
	}

	void RentalItem::BindRentalMoney(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalMoney);
	}

	void RentalItem::BindLenderCharId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderCharId);
	}

	void RentalItem::BindLenderAccountId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderAccountId);
	}

	void RentalItem::BindBorrowerCharId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerCharId);
	}

	void RentalItem::BindBorrowerAccountId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerAccountId);
	}

	const ServerResource::BindingsMapType& ServerResource::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nResourceID", &ServerResource::BindResourceId},
			{"strResource", &ServerResource::BindResource}
		};
		return bindingsMap;
	}

	void ServerResource::BindResourceId(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ResourceId);
	}

	void ServerResource::BindResource(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Resource);
	}

	const StartPosition::BindingsMapType& StartPosition::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneID", &StartPosition::BindZoneId},
			{"sKarusX", &StartPosition::BindKarusX},
			{"sKarusZ", &StartPosition::BindKarusZ},
			{"sElmoradX", &StartPosition::BindElmoX},
			{"sElmoradZ", &StartPosition::BindElmoZ},
			{"bRangeX", &StartPosition::BindRangeX},
			{"bRangeZ", &StartPosition::BindRangeZ},
			{"sKarusGateX", &StartPosition::BindKarusGateX},
			{"sKarusGateZ", &StartPosition::BindKarusGateZ},
			{"sElmoGateX", &StartPosition::BindElmoGateX},
			{"sElmoGateZ", &StartPosition::BindElmoGateZ}
		};
		return bindingsMap;
	}

	void StartPosition::BindZoneId(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	void StartPosition::BindKarusX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusX);
	}

	void StartPosition::BindKarusZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusZ);
	}

	void StartPosition::BindElmoX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoX);
	}

	void StartPosition::BindElmoZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoZ);
	}

	void StartPosition::BindRangeX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RangeX);
	}

	void StartPosition::BindRangeZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RangeZ);
	}

	void StartPosition::BindKarusGateX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusGateX);
	}

	void StartPosition::BindKarusGateZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusGateZ);
	}

	void StartPosition::BindElmoGateX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoGateX);
	}

	void StartPosition::BindElmoGateZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoGateZ);
	}

	const UserKnightsRank::BindingsMapType& UserKnightsRank::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"shIndex", &UserKnightsRank::BindIndex},
			{"strElmoUserID", &UserKnightsRank::BindElmoUserId},
			{"strKarusUserID", &UserKnightsRank::BindKarusUserId},
			{"nMoney", &UserKnightsRank::BindMoney},
			{"isClaimedElmo", &UserKnightsRank::BindIsClaimedElmo},
			{"isClaimedKarus", &UserKnightsRank::BindIsClaimedKarus}
		};
		return bindingsMap;
	}

	void UserKnightsRank::BindIndex(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void UserKnightsRank::BindElmoUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
	}

	void UserKnightsRank::BindKarusUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
	}

	void UserKnightsRank::BindMoney(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	void UserKnightsRank::BindIsClaimedElmo(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IsClaimedElmo);
	}

	void UserKnightsRank::BindIsClaimedKarus(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IsClaimedKarus);
	}

	const UserPersonalRank::BindingsMapType& UserPersonalRank::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRank", &UserPersonalRank::BindRank},
			{"strElmoUserID", &UserPersonalRank::BindElmoUserId},
			{"strKarusUserID", &UserPersonalRank::BindKarusUserId},
			{"nSalary", &UserPersonalRank::BindSalary},
			{"isClaimedElmo", &UserPersonalRank::BindIsClaimedElmo},
			{"isClaimedKarus", &UserPersonalRank::BindIsClaimedKarus}
		};
		return bindingsMap;
	}

	void UserPersonalRank::BindRank(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Rank);
	}

	void UserPersonalRank::BindElmoUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
	}

	void UserPersonalRank::BindKarusUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
	}

	void UserPersonalRank::BindSalary(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Salary);
	}

	void UserPersonalRank::BindIsClaimedElmo(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IsClaimedElmo);
	}

	void UserPersonalRank::BindIsClaimedKarus(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IsClaimedKarus);
	}

	const WebpageAddress::BindingsMapType& WebpageAddress::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &WebpageAddress::BindIndex},
			{"strWebPageAddress", &WebpageAddress::BindWebPageAddress}
		};
		return bindingsMap;
	}

	void WebpageAddress::BindIndex(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void WebpageAddress::BindWebPageAddress(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.WebPageAddress);
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

	void ZoneInfo::BindServerId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	void ZoneInfo::BindZoneId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	void ZoneInfo::BindName(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void ZoneInfo::BindInitX(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitX);
	}

	void ZoneInfo::BindInitZ(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitZ);
	}

	void ZoneInfo::BindInitY(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitY);
	}

	void ZoneInfo::BindType(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void ZoneInfo::BindRoomEvent(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RoomEvent);
	}
}