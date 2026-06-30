#ifndef EBENEZER_BINDER_EBENEZERBINDER_H
#define EBENEZER_BINDER_EBENEZERBINDER_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <string>
#include <unordered_map>

namespace nanodbc
{
	class result;
}

namespace ebenezer_model
{
	class Battle;
	class Coefficient;
	class CouponSerialList;
	class Event;
	class EventTrigger;
	class Home;
	class Item;
	class ItemExchange;
	class ItemUpgrade;
	class Knights;
	class KnightsAlliance;
	class KnightsCape;
	class KnightsRating;
	class KnightsSiegeWarfare;
	class KnightsUser;
	class LevelUp;
	class Magic;
	class MagicType1;
	class MagicType2;
	class MagicType3;
	class MagicType4;
	class MagicType5;
	class MagicType6;
	class MagicType7;
	class MagicType8;
	class MagicType9;
	class MonsterChallenge;
	class MonsterChallengeSummonList;
	class RentalItem;
	class ServerResource;
	class StartPosition;
	class UserKnightsRank;
	class UserPersonalRank;
	class WebpageAddress;
	class ZoneInfo;
}

namespace ebenezer_binder
{
	/// \brief generated nanodbc column binder for ebenezer_model::Battle
	class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(ebenezer_model::Battle& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Coefficient
	class Coefficient
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ClassId
		static void BindClassId(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ShortSword
		static void BindShortSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Sword
		static void BindSword(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Axe
		static void BindAxe(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Club
		static void BindClub(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Spear
		static void BindSpear(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Pole
		static void BindPole(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Staff
		static void BindStaff(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bow
		static void BindBow(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitPoint
		static void BindHitPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaPoint
		static void BindManaPoint(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Sp
		static void BindSp(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Evasionrate
		static void BindEvasionrate(ebenezer_model::Coefficient& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::CouponSerialList
	class CouponSerialList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SerialNum
		static void BindSerialNum(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemNumber
		static void BindItemNumber(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(ebenezer_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Event
	class Event
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ZoneNumber
		static void BindZoneNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EventNumber
		static void BindEventNumber(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EventType
		static void BindEventType(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute1
		static void BindExecute1(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute2
		static void BindExecute2(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute3
		static void BindExecute3(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute4
		static void BindExecute4(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute5
		static void BindExecute5(ebenezer_model::Event& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::EventTrigger
	class EventTrigger
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcType
		static void BindNpcType(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TriggerNumber
		static void BindTriggerNumber(ebenezer_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Home
	class Home
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Nation
		static void BindNation(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZoneX
		static void BindElmoZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZoneZ
		static void BindElmoZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZoneLX
		static void BindElmoZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZoneLZ
		static void BindElmoZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZoneX
		static void BindKarusZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZoneZ
		static void BindKarusZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZoneLX
		static void BindKarusZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZoneLZ
		static void BindKarusZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FreeZoneX
		static void BindFreeZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FreeZoneZ
		static void BindFreeZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FreeZoneLX
		static void BindFreeZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FreeZoneLZ
		static void BindFreeZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZoneX
		static void BindBattleZoneX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZoneZ
		static void BindBattleZoneZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZoneLX
		static void BindBattleZoneLX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZoneLZ
		static void BindBattleZoneLZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZone2X
		static void BindBattleZone2X(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZone2Z
		static void BindBattleZone2Z(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZone2LX
		static void BindBattleZone2LX(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZone2LZ
		static void BindBattleZone2LZ(ebenezer_model::Home& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Item
	class Item
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Kind
		static void BindKind(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Slot
		static void BindSlot(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Race
		static void BindRace(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ClassId
		static void BindClassId(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Delay
		static void BindDelay(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weight
		static void BindWeight(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Durability
		static void BindDurability(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Countable
		static void BindCountable(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MinLevel
		static void BindMinLevel(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredRank
		static void BindRequiredRank(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredTitle
		static void BindRequiredTitle(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredStrength
		static void BindRequiredStrength(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredStamina
		static void BindRequiredStamina(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredDexterity
		static void BindRequiredDexterity(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredIntelligence
		static void BindRequiredIntelligence(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredCharisma
		static void BindRequiredCharisma(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CurseResist
		static void BindCurseResist(ebenezer_model::Item& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::ItemExchange
	class ItemExchange
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RandomFlag
		static void BindRandomFlag(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber1
		static void BindOriginItemNumber1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount1
		static void BindOriginItemCount1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber2
		static void BindOriginItemNumber2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount2
		static void BindOriginItemCount2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber3
		static void BindOriginItemNumber3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount3
		static void BindOriginItemCount3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber4
		static void BindOriginItemNumber4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount4
		static void BindOriginItemCount4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber5
		static void BindOriginItemNumber5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount5
		static void BindOriginItemCount5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber1
		static void BindExchangeItemNumber1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount1
		static void BindExchangeItemCount1(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber2
		static void BindExchangeItemNumber2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount2
		static void BindExchangeItemCount2(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber3
		static void BindExchangeItemNumber3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount3
		static void BindExchangeItemCount3(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber4
		static void BindExchangeItemNumber4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount4
		static void BindExchangeItemCount4(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber5
		static void BindExchangeItemNumber5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount5
		static void BindExchangeItemCount5(ebenezer_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::ItemUpgrade
	class ItemUpgrade
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginType
		static void BindOriginType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItem
		static void BindOriginItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem1
		static void BindRequiredItem1(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem2
		static void BindRequiredItem2(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem3
		static void BindRequiredItem3(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem4
		static void BindRequiredItem4(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem5
		static void BindRequiredItem5(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem6
		static void BindRequiredItem6(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem7
		static void BindRequiredItem7(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem8
		static void BindRequiredItem8(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredCoins
		static void BindRequiredCoins(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RateType
		static void BindRateType(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GenRate
		static void BindGenRate(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GiveItem
		static void BindGiveItem(ebenezer_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Knights
	class Knights
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Flag
		static void BindFlag(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Ranking
		static void BindRanking(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Members
		static void BindMembers(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Chief
		static void BindChief(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ViceChief1
		static void BindViceChief1(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ViceChief2
		static void BindViceChief2(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ViceChief3
		static void BindViceChief3(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EnemyName
		static void BindEnemyName(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OldWarResult
		static void BindOldWarResult(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarEnemyId
		static void BindWarEnemyId(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Victory
		static void BindVictory(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Lose
		static void BindLose(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Gold
		static void BindGold(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Domination
		static void BindDomination(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Points
		static void BindPoints(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MarkVersion
		static void BindMarkVersion(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MarkLength
		static void BindMarkLength(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Mark
		static void BindMark(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SiegeFlag
		static void BindSiegeFlag(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AllianceKnights
		static void BindAllianceKnights(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Cape
		static void BindCape(ebenezer_model::Knights& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsAlliance
	class KnightsAlliance
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to MainAllianceKnights
		static void BindMainAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SubAllianceKnights
		static void BindSubAllianceKnights(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MercenaryClan1
		static void BindMercenaryClan1(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MercenaryClan2
		static void BindMercenaryClan2(ebenezer_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsCape
	class KnightsCape
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CapeIndex
		static void BindCapeIndex(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade
		static void BindGrade(ebenezer_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsRating
	class KnightsRating
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Rank
		static void BindRank(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Points
		static void BindPoints(ebenezer_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsSiegeWarfare
	class KnightsSiegeWarfare
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MasterKnights
		static void BindMasterKnights(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SiegeType
		static void BindSiegeType(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarDay
		static void BindWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarHour
		static void BindWarHour(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarMinute
		static void BindWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList1
		static void BindChallengeList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList2
		static void BindChallengeList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList3
		static void BindChallengeList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList4
		static void BindChallengeList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList5
		static void BindChallengeList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList6
		static void BindChallengeList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList7
		static void BindChallengeList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList8
		static void BindChallengeList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList9
		static void BindChallengeList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList10
		static void BindChallengeList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarRequestDay
		static void BindWarRequestDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarRequestTime
		static void BindWarRequestTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarRequestMinute
		static void BindWarRequestMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GuerrillaWarDay
		static void BindGuerrillaWarDay(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GuerrillaWarTime
		static void BindGuerrillaWarTime(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GuerrillaWarMinute
		static void BindGuerrillaWarMinute(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList
		static void BindChallengeList(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoradonTariff
		static void BindMoradonTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DelosTariff
		static void BindDelosTariff(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DungeonCharge
		static void BindDungeonCharge(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoradonTax
		static void BindMoradonTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DelosTax
		static void BindDelosTax(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList1
		static void BindRequestList1(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList2
		static void BindRequestList2(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList3
		static void BindRequestList3(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList4
		static void BindRequestList4(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList5
		static void BindRequestList5(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList6
		static void BindRequestList6(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList7
		static void BindRequestList7(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList8
		static void BindRequestList8(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList9
		static void BindRequestList9(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList10
		static void BindRequestList10(ebenezer_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::KnightsUser
	class KnightsUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UserId
		static void BindUserId(ebenezer_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::LevelUp
	class LevelUp
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Level
		static void BindLevel(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(ebenezer_model::LevelUp& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::Magic
	class Magic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Moral
		static void BindMoral(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill
		static void BindSkill(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type1
		static void BindType1(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type2
		static void BindType2(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Etc
		static void BindEtc(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Event
		static void BindEvent(ebenezer_model::Magic& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType1
	class MagicType1
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Delay
		static void BindDelay(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboType
		static void BindComboType(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::MagicType1& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType2
	class MagicType2
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitType
		static void BindHitType(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(ebenezer_model::MagicType2& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType3
	class MagicType3
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Angle
		static void BindAngle(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DirectType
		static void BindDirectType(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FirstDamage
		static void BindFirstDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EndDamage
		static void BindEndDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TimeDamage
		static void BindTimeDamage(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Attribute
		static void BindAttribute(ebenezer_model::MagicType3& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType4
	class MagicType4
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuffType
		static void BindBuffType(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Speed
		static void BindSpeed(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ArmorPercent
		static void BindArmorPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackPower
		static void BindAttackPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHpPercent
		static void BindMaxHpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMpPercent
		static void BindMaxMpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AvoidRate
		static void BindAvoidRate(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Strength
		static void BindStrength(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Stamina
		static void BindStamina(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpPercent
		static void BindExpPercent(ebenezer_model::MagicType4& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType5
	class MagicType5
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedStone
		static void BindNeedStone(ebenezer_model::MagicType5& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType6
	class MagicType6
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Size
		static void BindSize(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TransformId
		static void BindTransformId(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Speed
		static void BindSpeed(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalHit
		static void BindTotalHit(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalArmor
		static void BindTotalArmor(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalHitRate
		static void BindTotalHitRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalEvasionRate
		static void BindTotalEvasionRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalFireResist
		static void BindTotalFireResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalColdResist
		static void BindTotalColdResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalLightningResist
		static void BindTotalLightningResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalMagicResist
		static void BindTotalMagicResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalDiseaseResist
		static void BindTotalDiseaseResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalPoisonResist
		static void BindTotalPoisonResist(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class
		static void BindClass(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UserSkillUse
		static void BindUserSkillUse(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SkillSuccessRate
		static void BindSkillSuccessRate(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterFriendly
		static void BindMonsterFriendly(ebenezer_model::MagicType6& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType7
	class MagicType7
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Vision
		static void BindVision(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(ebenezer_model::MagicType7& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType8
	class MagicType8
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Target
		static void BindTarget(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarpType
		static void BindWarpType(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(ebenezer_model::MagicType8& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MagicType9
	class MagicType9
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Vision
		static void BindVision(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(ebenezer_model::MagicType9& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MonsterChallenge
	class MonsterChallenge
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StartTime1
		static void BindStartTime1(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StartTime2
		static void BindStartTime2(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StartTime3
		static void BindStartTime3(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LevelMin
		static void BindLevelMin(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LevelMax
		static void BindLevelMax(ebenezer_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::MonsterChallengeSummonList
	class MonsterChallengeSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Stage
		static void BindStage(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StageLevel
		static void BindStageLevel(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Time
		static void BindTime(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Count
		static void BindCount(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PosX
		static void BindPosX(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(ebenezer_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::RentalItem
	class RentalItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Durability
		static void BindDurability(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegType
		static void BindRegType(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemType
		static void BindItemType(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class
		static void BindClass(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BorrowerAccountId
		static void BindBorrowerAccountId(ebenezer_model::RentalItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::ServerResource
	class ServerResource
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ResourceId
		static void BindResourceId(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Resource
		static void BindResource(ebenezer_model::ServerResource& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::StartPosition
	class StartPosition
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusX
		static void BindKarusX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZ
		static void BindKarusZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoX
		static void BindElmoX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZ
		static void BindElmoZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RangeX
		static void BindRangeX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RangeZ
		static void BindRangeZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusGateX
		static void BindKarusGateX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusGateZ
		static void BindKarusGateZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoGateX
		static void BindElmoGateX(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoGateZ
		static void BindElmoGateZ(ebenezer_model::StartPosition& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::UserKnightsRank
	class UserKnightsRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IsClaimedElmo
		static void BindIsClaimedElmo(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IsClaimedKarus
		static void BindIsClaimedKarus(ebenezer_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::UserPersonalRank
	class UserPersonalRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Rank
		static void BindRank(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Salary
		static void BindSalary(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IsClaimedElmo
		static void BindIsClaimedElmo(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IsClaimedKarus
		static void BindIsClaimedKarus(ebenezer_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::WebpageAddress
	class WebpageAddress
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WebPageAddress
		static void BindWebPageAddress(ebenezer_model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for ebenezer_model::ZoneInfo
	class ZoneInfo
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ServerId
		static void BindServerId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitX
		static void BindInitX(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitZ
		static void BindInitZ(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitY
		static void BindInitY(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RoomEvent
		static void BindRoomEvent(ebenezer_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

	};
}

#endif // EBENEZER_BINDER_EBENEZERBINDER_H