#ifndef AISERVER_BINDER_AISERVERBINDER_H
#define AISERVER_BINDER_AISERVERBINDER_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <string>
#include <unordered_map>

namespace nanodbc
{
	class result;
}

namespace aiserver_model
{
	class Monster;
	class MonsterItem;
	class Npc;
	class NpcMoveItem;
	class NpcPos;
	class LevelUp;
	class Magic;
	class MagicType1;
	class MagicType2;
	class MagicType3;
	class MagicType4;
	class MagicType7;
	class MakeDefensive;
	class MakeItem;
	class MakeItemGradeCode;
	class MakeItemGroup;
	class MakeItemRareCode;
	class MakeWeapon;
	class MonsterSummonList;
	class ZoneInfo;
}

namespace aiserver_binder
{
	/// \brief generated nanodbc column binder for aiserver_model::Monster
	class Monster
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Size
		static void BindSize(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Group
		static void BindGroup(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ActType
		static void BindActType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Family
		static void BindFamily(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Rank
		static void BindRank(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Title
		static void BindTitle(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Exp
		static void BindExp(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Attack
		static void BindAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bulk
		static void BindBulk(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item
		static void BindItem(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(aiserver_model::Monster& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MonsterItem
	class MonsterItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(aiserver_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::Npc
	class Npc
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Size
		static void BindSize(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Group
		static void BindGroup(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ActType
		static void BindActType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Family
		static void BindFamily(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Rank
		static void BindRank(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Title
		static void BindTitle(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Exp
		static void BindExp(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Attack
		static void BindAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bulk
		static void BindBulk(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item
		static void BindItem(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(aiserver_model::Npc& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::NpcMoveItem
	class NpcMoveItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChangeItem
		static void BindChangeItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChangeId
		static void BindChangeId(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveItem
		static void BindMoveItem(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveMinX
		static void BindMoveMinX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveMinY
		static void BindMoveMinY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveMaxX
		static void BindMoveMaxX(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveMaxY
		static void BindMoveMaxY(aiserver_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::NpcPos
	class NpcPos
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ActType
		static void BindActType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegenType
		static void BindRegenType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DungeonFamily
		static void BindDungeonFamily(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SpecialType
		static void BindSpecialType(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TrapNumber
		static void BindTrapNumber(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LeftX
		static void BindLeftX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TopZ
		static void BindTopZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RightX
		static void BindRightX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BottomZ
		static void BindBottomZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LimitMinZ
		static void BindLimitMinZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LimitMinX
		static void BindLimitMinX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LimitMaxX
		static void BindLimitMaxX(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LimitMaxZ
		static void BindLimitMaxZ(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NumNpc
		static void BindNumNpc(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RespawnTime
		static void BindRespawnTime(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Direction
		static void BindDirection(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PathPointCount
		static void BindPathPointCount(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Path
		static void BindPath(aiserver_model::NpcPos& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::LevelUp
	class LevelUp
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(aiserver_model::LevelUp& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::Magic
	class Magic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Moral
		static void BindMoral(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill
		static void BindSkill(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type1
		static void BindType1(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type2
		static void BindType2(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Etc
		static void BindEtc(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Event
		static void BindEvent(aiserver_model::Magic& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType1
	class MagicType1
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Delay
		static void BindDelay(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboType
		static void BindComboType(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(aiserver_model::MagicType1& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType2
	class MagicType2
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitType
		static void BindHitType(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(aiserver_model::MagicType2& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType3
	class MagicType3
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Angle
		static void BindAngle(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DirectType
		static void BindDirectType(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FirstDamage
		static void BindFirstDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EndDamage
		static void BindEndDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TimeDamage
		static void BindTimeDamage(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Attribute
		static void BindAttribute(aiserver_model::MagicType3& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType4
	class MagicType4
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuffType
		static void BindBuffType(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Speed
		static void BindSpeed(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ArmorPercent
		static void BindArmorPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackPower
		static void BindAttackPower(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHpPercent
		static void BindMaxHpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMpPercent
		static void BindMaxMpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AvoidRate
		static void BindAvoidRate(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Strength
		static void BindStrength(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Stamina
		static void BindStamina(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpPercent
		static void BindExpPercent(aiserver_model::MagicType4& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MagicType7
	class MagicType7
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Vision
		static void BindVision(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(aiserver_model::MagicType7& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeDefensive
	class MakeDefensive
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class1
		static void BindClass1(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class2
		static void BindClass2(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class3
		static void BindClass3(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class4
		static void BindClass4(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class5
		static void BindClass5(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class6
		static void BindClass6(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class7
		static void BindClass7(aiserver_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeItem
	class MakeItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemCode
		static void BindItemCode(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemLevel
		static void BindItemLevel(aiserver_model::MakeItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeItemGradeCode
	class MakeItemGradeCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade1
		static void BindGrade1(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade2
		static void BindGrade2(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade3
		static void BindGrade3(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade4
		static void BindGrade4(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade5
		static void BindGrade5(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade6
		static void BindGrade6(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade7
		static void BindGrade7(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade8
		static void BindGrade8(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade9
		static void BindGrade9(aiserver_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeItemGroup
	class MakeItemGroup
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ItemGroupNumber
		static void BindItemGroupNumber(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item1
		static void BindItem1(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item2
		static void BindItem2(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item3
		static void BindItem3(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item4
		static void BindItem4(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item5
		static void BindItem5(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item6
		static void BindItem6(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item7
		static void BindItem7(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item8
		static void BindItem8(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item9
		static void BindItem9(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item10
		static void BindItem10(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item11
		static void BindItem11(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item12
		static void BindItem12(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item13
		static void BindItem13(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item14
		static void BindItem14(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item15
		static void BindItem15(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item16
		static void BindItem16(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item17
		static void BindItem17(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item18
		static void BindItem18(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item19
		static void BindItem19(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item20
		static void BindItem20(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item21
		static void BindItem21(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item22
		static void BindItem22(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item23
		static void BindItem23(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item24
		static void BindItem24(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item25
		static void BindItem25(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item26
		static void BindItem26(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item27
		static void BindItem27(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item28
		static void BindItem28(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item29
		static void BindItem29(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item30
		static void BindItem30(aiserver_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeItemRareCode
	class MakeItemRareCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to LevelGrade
		static void BindLevelGrade(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UpgradeItem
		static void BindUpgradeItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RareItem
		static void BindRareItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicItem
		static void BindMagicItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GeneralItem
		static void BindGeneralItem(aiserver_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MakeWeapon
	class MakeWeapon
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class1
		static void BindClass1(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class2
		static void BindClass2(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class3
		static void BindClass3(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class4
		static void BindClass4(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class5
		static void BindClass5(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class6
		static void BindClass6(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class7
		static void BindClass7(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class8
		static void BindClass8(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class9
		static void BindClass9(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class10
		static void BindClass10(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class11
		static void BindClass11(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class12
		static void BindClass12(aiserver_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::MonsterSummonList
	class MonsterSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Probability
		static void BindProbability(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aiserver_model::ZoneInfo
	class ZoneInfo
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ServerId
		static void BindServerId(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitX
		static void BindInitX(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitZ
		static void BindInitZ(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitY
		static void BindInitY(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RoomEvent
		static void BindRoomEvent(aiserver_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

	};
}

#endif // AISERVER_BINDER_AISERVERBINDER_H