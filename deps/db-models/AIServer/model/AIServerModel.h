#ifndef AISERVER_MODEL_AISERVERMODEL_H
#define AISERVER_MODEL_AISERVERMODEL_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>
#include <vector>

namespace aiserver_binder
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

namespace aiserver_model
{
	/// \brief [K_MONSTER] Monster definitions
	/// \class Monster
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" K_MONSTER Monster definitions
	class Monster 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::Monster;

		/// \brief Column [sSid]: Monster Identifier
		///
		/// \property MonsterId
		int16_t MonsterId = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [sPid]: Picture identifier
		///
		/// \property PictureId
		int16_t PictureId = {};

		/// \brief Column [sSize]: Size multiplier
		///
		/// \property Size
		int16_t Size = {};

		/// \brief Column [iWeapon1]: Weapon 1 ItemNum
		///
		/// \property Weapon1
		int32_t Weapon1 = {};

		/// \brief Column [iWeapon2]: Weapon 2 ItemNum
		///
		/// \property Weapon2
		int32_t Weapon2 = {};

		/// \brief Column [byGroup]: Group
		///
		/// \property Group
		uint8_t Group = {};

		/// \brief Column [byActType]: Act Type
		///
		/// \property ActType
		uint8_t ActType = {};

		/// \brief Column [byType]: Type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = {};

		/// \enum EnumType
		/// \brief Known valid values for byType
		enum class EnumType
		{
			Monster = 0,
			Npc = 1,
			Event = 2,
			Unknown3 = 3,
			Unknown4 = 4,
			Trap = 5,
			RangedOrc = 6,
			Unknown9 = 9
		};

		/// \brief Column [byFamily]: Family
		///
		/// \property Family
		uint8_t Family = {};

		/// \brief Column [byRank]: Rank
		///
		/// \property Rank
		uint8_t Rank = {};

		/// \brief Column [byTitle]: Title
		///
		/// \property Title
		uint8_t Title = {};

		/// \brief Column [iSellingGroup]: Npc selling group
		///
		/// \property SellingGroup
		int32_t SellingGroup = {};

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = {};

		/// \brief Column [iExp]: Experience granted when killed
		///
		/// \property Exp
		int32_t Exp = {};

		/// \brief Column [iLoyalty]: NP granted when killed
		///
		/// \property Loyalty
		int32_t Loyalty = {};

		/// \brief Column [iHpPoint]: Max health
		///
		/// \property HitPoints
		int32_t HitPoints = {};

		/// \brief Column [sMpPoint]: Max mana
		///
		/// \property ManaPoints
		int16_t ManaPoints = {};

		/// \brief Column [sAtk]: TODO: Doc usage
		///
		/// \property Attack
		int16_t Attack = {};

		/// \brief Column [sAc]: Armor
		///
		/// \property Armor
		int16_t Armor = {};

		/// \brief Column [sHitRate]: Attack success rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [sEvadeRate]: Evasion Rate
		///
		/// \property EvadeRate
		int16_t EvadeRate = {};

		/// \brief Column [sDamage]: Raw damage dealt
		///
		/// \property Damage
		int16_t Damage = {};

		/// \brief Column [sAttackDelay]: Time to wait between attacks
		///
		/// \property AttackDelay
		int16_t AttackDelay = {};

		/// \brief Column [bySpeed1]: Walk movement speed
		///
		/// \property WalkSpeed
		uint8_t WalkSpeed = {};

		/// \brief Column [bySpeed2]: Run movement speed
		///
		/// \property RunSpeed
		uint8_t RunSpeed = {};

		/// \brief Column [sStandtime]: Delay time while in standing state
		///
		/// \property StandTime
		int16_t StandTime = {};

		/// \brief Column [iMagic1]: Magic identifier 1
		///
		/// \property Magic1
		int32_t Magic1 = {};

		/// \brief Column [iMagic2]: Magic identifier 2
		///
		/// \property Magic2
		int32_t Magic2 = {};

		/// \brief Column [iMagic3]: Magic identifier 3
		///
		/// \property Magic3
		int32_t Magic3 = {};

		/// \brief Column [sFireR]: Fire resistance
		///
		/// \property FireResist
		int16_t FireResist = {};

		/// \brief Column [sColdR]: Cold resistance
		///
		/// \property ColdResist
		int16_t ColdResist = {};

		/// \brief Column [sLightningR]: Lightning resistance
		///
		/// \property LightningResist
		int16_t LightningResist = {};

		/// \brief Column [sMagicR]: Magic resistance
		///
		/// \property MagicResist
		int16_t MagicResist = {};

		/// \brief Column [sDiseaseR]: Disease resistance
		///
		/// \property DiseaseResist
		int16_t DiseaseResist = {};

		/// \brief Column [sPoisonR]: Poison resistance
		///
		/// \property PoisonResist
		int16_t PoisonResist = {};

		/// \brief Column [sLightR]: Light resistance
		///
		/// \property LightResist
		int16_t LightResist = {};

		/// \brief Column [sBulk]: Bulk
		///
		/// \property Bulk
		int16_t Bulk = {};

		/// \brief Column [byAttackRange]: Attack range
		///
		/// \property AttackRange
		uint8_t AttackRange = {};

		/// \brief Column [bySearchRange]: Search range
		///
		/// \property SearchRange
		uint8_t SearchRange = {};

		/// \brief Column [byTracingRange]: Tracing range
		///
		/// \property TracingRange
		uint8_t TracingRange = {};

		/// \brief Column [iMoney]: Coins dropped on death
		///
		/// \property Money
		int32_t Money = {};

		/// \brief Column [sItem]: K_MONSTER_ITEM.Index drop table reference
		///
		/// \property Item
		int16_t Item = {};

		/// \brief Column [byDirectAttack]: Direct attack
		///
		/// \property DirectAttack
		uint8_t DirectAttack = {};

		/// \brief Column [byMagicAttack]: Magic attack
		///
		/// \property MagicAttack
		uint8_t MagicAttack = {};

		/// \brief Column [byMoneyType]: Money type
		///
		/// \property MoneyType
		uint8_t MoneyType = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const;

	};

	/// \brief [K_MONSTER_ITEM] Monster loot table
	/// \class MonsterItem
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" K_MONSTER_ITEM Monster loot table
	class MonsterItem 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MonsterItem;

		/// \brief Column [sIndex]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = {};

		/// \brief Array grouping for columns [iItem01] to [iItem05]
		///
		/// Column [iItem01]: Item identifier 1
		/// Column [iItem02]: Item identifier 2
		/// Column [iItem03]: Item identifier 3
		/// Column [iItem04]: Item identifier 4
		/// Column [iItem05]: Item identifier 5
		///
		/// \property ItemId
		int32_t ItemId[5] = {};


		/// \brief Array grouping for columns [sPersent01] to [sPersent05]
		///
		/// Column [sPersent01]: Chance for item 1 to drop
		/// Column [sPersent02]: Chance for item 2 to drop
		/// Column [sPersent03]: Chance for item 3 to drop
		/// Column [sPersent04]: Chance for item 4 to drop
		/// Column [sPersent05]: Chance for item 5 to drop
		///
		/// \property DropChance
		int16_t DropChance[5] = {};


		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const;

	};

	/// \brief [K_NPC] Non-Player Character
	/// \class Npc
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" K_NPC Non-Player Character
	class Npc 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::Npc;

		/// \brief Column [sSid]: NPC Identifier
		///
		/// \property NpcId
		int16_t NpcId = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::optional<std::string> Name;

		/// \brief Column [sPid]: Picture identifier
		///
		/// \property PictureId
		int16_t PictureId = {};

		/// \brief Column [sSize]: Size multiplier
		///
		/// \property Size
		int16_t Size = {};

		/// \brief Column [iWeapon1]: Weapon 1 ItemNum
		///
		/// \property Weapon1
		int32_t Weapon1 = {};

		/// \brief Column [iWeapon2]: Weapon 2 ItemNum
		///
		/// \property Weapon2
		int32_t Weapon2 = {};

		/// \brief Column [byGroup]: Group
		///
		/// \property Group
		uint8_t Group = {};

		/// \brief Column [byActType]: Act Type
		///
		/// \property ActType
		uint8_t ActType = {};

		/// \brief Column [byType]: Type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = {};

		/// \enum EnumType
		/// \brief Known valid values for byType
		enum class EnumType
		{
			Monster = 0,
			Npc = 1,
			Event = 2,
			Unknown3 = 3,
			Unknown4 = 4,
			Trap = 5,
			RangedOrc = 6,
			Unknown9 = 9
		};

		/// \brief Column [byFamily]: Family
		///
		/// \property Family
		uint8_t Family = {};

		/// \brief Column [byRank]: Rank
		///
		/// \property Rank
		uint8_t Rank = {};

		/// \brief Column [byTitle]: Title
		///
		/// \property Title
		uint8_t Title = {};

		/// \brief Column [iSellingGroup]: Npc selling group
		///
		/// \property SellingGroup
		int32_t SellingGroup = {};

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = {};

		/// \brief Column [iExp]: Experience granted when killed
		///
		/// \property Exp
		int32_t Exp = {};

		/// \brief Column [iLoyalty]: NP granted when killed
		///
		/// \property Loyalty
		int32_t Loyalty = {};

		/// \brief Column [iHpPoint]: Max health
		///
		/// \property HitPoints
		int32_t HitPoints = {};

		/// \brief Column [sMpPoint]: Max mana
		///
		/// \property ManaPoints
		int16_t ManaPoints = {};

		/// \brief Column [sAtk]: TODO: Doc usage
		///
		/// \property Attack
		int16_t Attack = {};

		/// \brief Column [sAc]: Armor
		///
		/// \property Armor
		int16_t Armor = {};

		/// \brief Column [sHitRate]: Attack success rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [sEvadeRate]: Evasion Rate
		///
		/// \property EvadeRate
		int16_t EvadeRate = {};

		/// \brief Column [sDamage]: Raw damage dealt
		///
		/// \property Damage
		int16_t Damage = {};

		/// \brief Column [sAttackDelay]: Time to wait between attacks
		///
		/// \property AttackDelay
		int16_t AttackDelay = {};

		/// \brief Column [bySpeed1]: Walk movement speed
		///
		/// \property WalkSpeed
		uint8_t WalkSpeed = {};

		/// \brief Column [bySpeed2]: Run movement speed
		///
		/// \property RunSpeed
		uint8_t RunSpeed = {};

		/// \brief Column [sStandtime]: Delay time while in standing state
		///
		/// \property StandTime
		int16_t StandTime = {};

		/// \brief Column [iMagic1]: Magic identifier 1
		///
		/// \property Magic1
		int32_t Magic1 = {};

		/// \brief Column [iMagic2]: Magic identifier 2
		///
		/// \property Magic2
		int32_t Magic2 = {};

		/// \brief Column [iMagic3]: Magic identifier 3
		///
		/// \property Magic3
		int32_t Magic3 = {};

		/// \brief Column [sFireR]: Fire resistance
		///
		/// \property FireResist
		int16_t FireResist = {};

		/// \brief Column [sColdR]: Cold resistance
		///
		/// \property ColdResist
		int16_t ColdResist = {};

		/// \brief Column [sLightningR]: Lightning resistance
		///
		/// \property LightningResist
		int16_t LightningResist = {};

		/// \brief Column [sMagicR]: Magic resistance
		///
		/// \property MagicResist
		int16_t MagicResist = {};

		/// \brief Column [sDiseaseR]: Disease resistance
		///
		/// \property DiseaseResist
		int16_t DiseaseResist = {};

		/// \brief Column [sPoisonR]: Poison resistance
		///
		/// \property PoisonResist
		int16_t PoisonResist = {};

		/// \brief Column [sLightR]: Light resistance
		///
		/// \property LightResist
		int16_t LightResist = {};

		/// \brief Column [sBulk]: Bulk
		///
		/// \property Bulk
		int16_t Bulk = {};

		/// \brief Column [byAttackRange]: Attack range
		///
		/// \property AttackRange
		uint8_t AttackRange = {};

		/// \brief Column [bySearchRange]: Search range
		///
		/// \property SearchRange
		uint8_t SearchRange = {};

		/// \brief Column [byTracingRange]: Tracing range
		///
		/// \property TracingRange
		uint8_t TracingRange = {};

		/// \brief Column [iMoney]: Coins dropped on death
		///
		/// \property Money
		int32_t Money = {};

		/// \brief Column [sItem]: K_MONSTER_ITEM.Index drop table reference
		///
		/// \property Item
		int16_t Item = {};

		/// \brief Column [byDirectAttack]: Direct attack
		///
		/// \property DirectAttack
		uint8_t DirectAttack = {};

		/// \brief Column [byMagicAttack]: Magic attack
		///
		/// \property MagicAttack
		uint8_t MagicAttack = {};

		/// \brief Column [byMoneyType]: Money type
		///
		/// \property MoneyType
		uint8_t MoneyType = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const;

	};

	/// \brief [K_NPC_MOVE_ITEM] NPC Move Item: TODO
	/// \class NpcMoveItem
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" K_NPC_MOVE_ITEM NPC Move Item: TODO
	class NpcMoveItem 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::NpcMoveItem;

		/// \brief Column [sCastleIndex]: Castle identifier TODO mostly lines up with k_npc.ssid
		///
		/// \property CastleIndex
		int16_t CastleIndex = {};

		/// \brief Column [byChangeItem]: Change Item TODO
		///
		/// \property ChangeItem
		std::optional<int32_t> ChangeItem;

		/// \brief Column [sChangeSid]: Change identifier TODO
		///
		/// \property ChangeId
		std::optional<int32_t> ChangeId;

		/// \brief Column [byMoveItem]: Move item to do
		///
		/// \property MoveItem
		std::optional<int32_t> MoveItem;

		/// \brief Column [sMoveMinX]: Minimum x-axis movement
		///
		/// \property MoveMinX
		std::optional<int16_t> MoveMinX;

		/// \brief Column [sMoveMinY]: Minimum y-axis movement
		///
		/// \property MoveMinY
		std::optional<int16_t> MoveMinY;

		/// \brief Column [sMoveMaxX]: Maximum x-axis movement
		///
		/// \property MoveMaxX
		std::optional<int16_t> MoveMaxX;

		/// \brief Column [sMoveMaxY]: Maximum y-axis movement
		///
		/// \property MoveMaxY
		std::optional<int16_t> MoveMaxY;

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const;

	};

	/// \brief [K_NPCPOS] NPC Spawn Positions
	/// \class NpcPos
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" K_NPCPOS NPC Spawn Positions
	class NpcPos 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::NpcPos;

		/// \brief Column [ZoneID]: Zone Identifier
		///
		/// \property ZoneId
		int16_t ZoneId = {};

		/// \brief Column [NpcID]: NPC Identifier (K_NPC.sSid)
		///
		/// \property NpcId
		int32_t NpcId = {};

		/// \brief Column [ActType]: Act type TODO
		///
		/// \property ActType
		uint8_t ActType = {};

		/// \brief Column [RegenType]: Regen type TODO
		///
		/// \property RegenType
		uint8_t RegenType = {};

		/// \brief Column [DungeonFamily]: Dungeon family TODO
		///
		/// \property DungeonFamily
		uint8_t DungeonFamily = {};

		/// \brief Column [SpecialType]: Special type TODO
		///
		/// \property SpecialType
		uint8_t SpecialType = {};

		/// \brief Column [TrapNumber]: Trap number
		///
		/// \property TrapNumber
		uint8_t TrapNumber = {};

		/// \brief Column [LeftX]: X-coordinate representing the left side of the spawn area
		///
		/// \property LeftX
		int32_t LeftX = {};

		/// \brief Column [TopZ]: Z-coordinate representing the top side of the spawn area
		///
		/// \property TopZ
		int32_t TopZ = {};

		/// \brief Column [RightX]: X-coordinate representing the right side of the spawn area
		///
		/// \property RightX
		int32_t RightX = {};

		/// \brief Column [BottomZ]: Z-coordinate representing the bottom side of the spawn area
		///
		/// \property BottomZ
		int32_t BottomZ = {};

		/// \brief Column [LimitMinZ]: Minimum z-coordinate value for valid roaming
		///
		/// \property LimitMinZ
		int32_t LimitMinZ = {};

		/// \brief Column [LimitMinX]: Minimum x-coordinate value for valid roaming
		///
		/// \property LimitMinX
		int32_t LimitMinX = {};

		/// \brief Column [LimitMaxX]: Maximum x-coordinate value for valid roaming
		///
		/// \property LimitMaxX
		int32_t LimitMaxX = {};

		/// \brief Column [LimitMaxZ]: Maximum z-coordinate value for valid roaming
		///
		/// \property LimitMaxZ
		int32_t LimitMaxZ = {};

		/// \brief Column [NumNPC]: Target number of NPCs for the spawn area
		///
		/// \property NumNpc
		uint8_t NumNpc = {};

		/// \brief Column [RegTime]: How long it takes for a dead NPC to respawn
		///
		/// \property RespawnTime
		int16_t RespawnTime = {};

		/// \brief Column [byDirection]: Direction TODO
		///
		/// \property Direction
		int32_t Direction = {};

		/// \brief Column [DotCnt]: The number of points contained within Path
		///
		/// \property PathPointCount
		uint8_t PathPointCount = {};

		/// \brief Column [path]: Pathfinding data. Each point contains an x and z coordinate. Each coordinate is 4-digits wide and zero-padded
		///
		/// \property Path
		std::optional<std::string> Path;

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

	};

	/// \brief [LEVEL_UP] Level experience requirements
	/// \class LevelUp
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" LEVEL_UP Level experience requirements
	class LevelUp 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::LevelUp;

		/// \brief Column [level]: Level
		///
		/// \property Level
		uint8_t Level = {};

		/// \brief Column [Exp]: Experience required to advance to the next level
		///
		/// \property RequiredExp
		int32_t RequiredExp = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const;

	};

	/// \brief [MAGIC] Contains the configuration for magic and abilities
	/// \class Magic
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAGIC Contains the configuration for magic and abilities
	class Magic 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::Magic;

		/// \brief Column [MagicNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [BeforeAction]: Before action check
		///
		/// \property BeforeAction
		uint8_t BeforeAction = {};

		/// \brief Column [TargetAction]: Target action check
		///
		/// \property TargetAction
		uint8_t TargetAction = {};

		/// \brief Column [SelfEffect]: Self effect TODO
		///
		/// \property SelfEffect
		uint8_t SelfEffect = {};

		/// \brief Column [FlyingEffect]: Does the skill fire a projectile
		///
		/// \property FlyingEffect
		uint8_t FlyingEffect = {};

		/// \brief Column [TargetEffect]: Effect identifier to use on the target
		///
		/// \property TargetEffect
		int16_t TargetEffect = {};

		/// \brief Column [Moral]: Targeting constraints
		///
		/// \property Moral
		uint8_t Moral = {};

		/// \brief Column [SkillLevel]: Skill points required in the tree to unlock the skill
		///
		/// \property SkillLevel
		int16_t SkillLevel = {};

		/// \brief Column [Skill]: Associated skill tree
		///
		/// \property Skill
		int16_t Skill = {};

		/// \brief Column [Msp]: Mana cost
		///
		/// \property ManaCost
		int16_t ManaCost = {};

		/// \brief Column [HP]: Health cost
		///
		/// \property HpCost
		int16_t HpCost = {};

		/// \brief Column [ItemGroup]: Item group allows a skill to be constrained to having an item type equipped
		///
		/// \property ItemGroup
		uint8_t ItemGroup = {};

		/// \brief Column [UseItem]: Must consume this item from inventory in order to activate ability
		///
		/// \property UseItem
		int32_t UseItem = {};

		/// \brief Column [CastTime]: Time needed to cast the ability
		///
		/// \property CastTime
		uint8_t CastTime = {};

		/// \brief Column [ReCastTime]: Cooldown
		///
		/// \property RecastTime
		uint8_t RecastTime = {};

		/// \brief Column [SuccessRate]: Chance the skill will hit target
		///
		/// \property SuccessRate
		uint8_t SuccessRate = {};

		/// \brief Column [Type1]: Look up effect in MAGIC_TYPEX table
		///
		/// \property Type1
		uint8_t Type1 = {};

		/// \brief Column [Type2]: Look up effect in MAGIC_TYPEX table
		///
		/// \property Type2
		uint8_t Type2 = {};

		/// \brief Column [Range]: Maximum range from target
		///
		/// \property Range
		int16_t Range = {};

		/// \brief Column [Etc]: Etc TODO
		///
		/// \property Etc
		uint8_t Etc = {};

		/// \brief Column [Event]: Event TODO
		///
		/// \property Event
		int32_t Event = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const;

	};

	/// \brief [MAGIC_TYPE1] Supports melee abilities
	/// \class MagicType1
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAGIC_TYPE1 Supports melee abilities
	class MagicType1 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MagicType1;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Type]: Attack special type
		///
		/// \see EnumType
		/// \property Type
		uint8_t Type = {};

		/// \enum EnumType
		/// \brief Known valid values for Type
		enum class EnumType
		{
			Normal = 0, ///< Subject to all normal defence checks
			AlwaysHit = 1, ///< Ability always hits
			IgnoreDefense = 2 ///< Ability ignores defense
		};

		/// \brief Column [HitRate]: Hit chance modifier - 100 is normal
		///
		/// \property HitRateMod
		int16_t HitRateMod = {};

		/// \brief Column [Hit]: Hit damage modifier - 100 is normal
		///
		/// \property DamageMod
		int16_t DamageMod = {};

		/// \brief Column [AddDamage]: Additional flat damage caused by ability
		///
		/// \property AddDamage
		int16_t AddDamage = {};

		/// \brief Column [Delay]: Delay TODO
		///
		/// \property Delay
		uint8_t Delay = {};

		/// \brief Column [ComboType]: Combo type TODO
		///
		/// \property ComboType
		uint8_t ComboType = {};

		/// \brief Column [ComboCount]: Combo count TODO
		///
		/// \property ComboCount
		uint8_t ComboCount = {};

		/// \brief Column [ComboDamage]: Combo damage multiplier
		///
		/// \property ComboDamage
		int16_t ComboDamage = {};

		/// \brief Column [Range]: Maximum distance to target
		///
		/// \property Range
		int16_t Range = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const;

	};

	/// \brief [MAGIC_TYPE2] Supports bow abilities
	/// \class MagicType2
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAGIC_TYPE2 Supports bow abilities
	class MagicType2 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MagicType2;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [HitType]: Projectile type
		///
		/// \see EnumHitType
		/// \property HitType
		uint8_t HitType = {};

		/// \enum EnumHitType
		/// \brief Known valid values for HitType
		enum class EnumHitType
		{
			Normal = 0, ///< Fire and forget targeting
			Seeking = 0 ///< Projectile follows target and always hits (unless blocked by collision)
		};

		/// \brief Column [HitRate]: Hit chance modifier - 100 is normal
		///
		/// \property HitRateMod
		int16_t HitRateMod = {};

		/// \brief Column [AddDamage]: Hit damage modifier - 100 is normal
		///
		/// \property DamageMod
		int16_t DamageMod = {};

		/// \brief Column [AddRange]: Range modifier - 100 is normal
		///
		/// \property RangeMod
		int16_t RangeMod = {};

		/// \brief Column [NeedArrow]: Number of arrows needed for ability
		///
		/// \property NeedArrow
		uint8_t NeedArrow = {};

		/// \brief Column [AddDamagePlus]: Additional flat damage caused by ability
		///
		/// \property AddDamagePlus
		int16_t AddDamagePlus = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const;

	};

	/// \brief [MAGIC_TYPE3] Supports Area of Effect and Damage over Time effects
	/// \class MagicType3
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAGIC_TYPE3 Supports Area of Effect and Damage over Time effects
	class MagicType3 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MagicType3;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Radius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = {};

		/// \brief Column [Angle]: Angle seems unused/unimplemented TODO
		///
		/// \property Angle
		int16_t Angle = {};

		/// \brief Column [DirectType]: Damage calculation type
		///
		/// \see EnumDirectType
		/// \property DirectType
		uint8_t DirectType = {};

		/// \enum EnumDirectType
		/// \brief Known valid values for DirectType
		enum class EnumDirectType
		{
			Unknown0 = 0, ///< TODO: Used by some 300000+ DoT abilities
			FlatHp = 1, ///< Flat damage against health
			FlatMana = 2, ///< Flat damage against mana
			FlatDurability = 4, ///< Flat damage applied to durability
			Unknown5 = 5, ///< TODO: Used by some 400000+ abilities
			AbsorbHp = 8, ///< Absorbs health from target
			PercentHp = 9, ///< Deals damage relative to targets current health
			Unknown11 = 11, ///< TODO: Used by 220011
			Unknown12 = 12, ///< TODO: Used by 490402
			Unknown255 = 255 ///< TODO: Used by 501011
		};

		/// \brief Column [FirstDamage]: Damage applied on hit
		///
		/// \property FirstDamage
		int16_t FirstDamage = {};

		/// \brief Column [EndDamage]: Damage taken at end of effect
		///
		/// \property EndDamage
		int16_t EndDamage = {};

		/// \brief Column [TimeDamage]: Total damage dealt over Duration
		///
		/// \property TimeDamage
		int16_t TimeDamage = {};

		/// \brief Column [Duration]: Duration of damage over time effects
		///
		/// \property Duration
		uint8_t Duration = {};

		/// \brief Column [Attribute]: Attribute TODO
		///
		/// \property Attribute
		uint8_t Attribute = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const;

	};

	/// \brief [MAGIC_TYPE4] Supports stat modification skills
	/// \class MagicType4
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAGIC_TYPE4 Supports stat modification skills
	class MagicType4 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MagicType4;

		/// \brief Column [iNum]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [BuffType]: Buff type
		///
		/// \see EnumBuffType
		/// \property BuffType
		uint8_t BuffType = {};

		/// \enum EnumBuffType
		/// \brief Known valid values for BuffType
		enum class EnumBuffType
		{
			None = 0,
			HealthMana = 1, ///< Maximum health/mana buffs
			Armor = 2, ///< Armor modifiers
			Size = 3, ///< Affects target size
			AttackPower = 4, ///< Attack power modifiers
			AttackSpeed = 5, ///< Attack speed modifiers
			MovementSpeed = 6, ///< Movement speed modifiers
			Stats = 7, ///< Stat modifiers
			Resistance = 8, ///< Resistance modifiers
			HitChance = 9, ///< Hit Chance modifier
			MagicPower = 10, ///< Magic power modifier
			Experience = 11, ///< Experience modifier
			Weight = 12, ///< Experience modifier
			WeaponEnchant = 13, ///< Weapon damage enchant effect
			ArmorEnchant = 14 ///< Armor enchant effect
		};

		/// \brief Column [Radius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = {};

		/// \brief Column [Duration]: Effect duration
		///
		/// \property Duration
		int16_t Duration = {};

		/// \brief Column [AttackSpeed]: Attack speed modifier - 100 is normal
		///
		/// \property AttackSpeed
		uint8_t AttackSpeed = {};

		/// \brief Column [Speed]: Movement speed modifier - 100 is normal
		///
		/// \property Speed
		uint8_t Speed = {};

		/// \brief Column [AC]: Armor modifier
		///
		/// \property Armor
		int16_t Armor = {};

		/// \brief Column [ACPct]: Armor percent modifier
		///
		/// \property ArmorPercent
		int16_t ArmorPercent = {};

		/// \brief Column [Attack]: Attack power modifier
		///
		/// \property AttackPower
		uint8_t AttackPower = {};

		/// \brief Column [MagicAttack]: Magic power modifier
		///
		/// \property MagicPower
		uint8_t MagicPower = {};

		/// \brief Column [MaxHP]: Maximum health modifier
		///
		/// \property MaxHp
		int16_t MaxHp = {};

		/// \brief Column [MaxHpPct]: Maximum health percent modifier
		///
		/// \property MaxHpPercent
		int16_t MaxHpPercent = {};

		/// \brief Column [MaxMP]: Maximum mana modifier
		///
		/// \property MaxMp
		int16_t MaxMp = {};

		/// \brief Column [MaxMpPct]: Maximum mana percent modifier
		///
		/// \property MaxMpPercent
		int16_t MaxMpPercent = {};

		/// \brief Column [HitRate]: Hit chance multiplier
		///
		/// \property HitRate
		uint8_t HitRate = {};

		/// \brief Column [AvoidRate]: Evasion chance multiplier
		///
		/// \property AvoidRate
		int16_t AvoidRate = {};

		/// \brief Column [Str]: Strength modifier
		///
		/// \property Strength
		int16_t Strength = {};

		/// \brief Column [Sta]: Stamina modifier
		///
		/// \property Stamina
		int16_t Stamina = {};

		/// \brief Column [Dex]: Dexterity modifier
		///
		/// \property Dexterity
		int16_t Dexterity = {};

		/// \brief Column [Intel]: Intelligence modifier
		///
		/// \property Intelligence
		int16_t Intelligence = {};

		/// \brief Column [Cha]: Charisma modifier
		///
		/// \property Charisma
		int16_t Charisma = {};

		/// \brief Column [FireR]: Fire resistance
		///
		/// \property FireResist
		uint8_t FireResist = {};

		/// \brief Column [ColdR]: Cold resistance
		///
		/// \property ColdResist
		uint8_t ColdResist = {};

		/// \brief Column [LightningR]: Lightning resistance
		///
		/// \property LightningResist
		uint8_t LightningResist = {};

		/// \brief Column [MagicR]: Magic resistance
		///
		/// \property MagicResist
		uint8_t MagicResist = {};

		/// \brief Column [DiseaseR]: Disease resistance
		///
		/// \property DiseaseResist
		uint8_t DiseaseResist = {};

		/// \brief Column [PoisonR]: Poison resistance
		///
		/// \property PoisonResist
		uint8_t PoisonResist = {};

		/// \brief Column [ExpPct]: Experience percentage modifier
		///
		/// \property ExpPercent
		uint8_t ExpPercent = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const;

	};

	/// \brief [MAGIC_TYPE7] Supports targeting modifications
	/// \class MagicType7
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAGIC_TYPE7 Supports targeting modifications
	class MagicType7 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MagicType7;

		/// \brief Column [nIndex]: Magic identification number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [byValidGroup]: Valid group
		///
		/// \property ValidGroup
		uint8_t ValidGroup = {};

		/// \brief Column [byNatoinChange]: Nation change
		///
		/// \property NationChange
		uint8_t NationChange = {};

		/// \brief Column [shMonsterNum]: Monster number
		///
		/// \property MonsterNumber
		int16_t MonsterNumber = {};

		/// \brief Column [byTargetChange]: Monster target mode change
		///
		/// \see EnumTargetChange
		/// \property TargetChange
		uint8_t TargetChange = {};

		/// \enum EnumTargetChange
		/// \brief Known valid values for byTargetChange
		enum class EnumTargetChange
		{
			Provoke = 0, ///< Target will target attacker
			Sleep = 1 ///< Target gets put to sleep
		};

		/// \brief Column [byStateChange]: State change
		///
		/// \property StateChange
		uint8_t StateChange = {};

		/// \brief Column [byRadius]: Area of effect circle radius
		///
		/// \property Radius
		uint8_t Radius = {};

		/// \brief Column [shHitrate]: Hit rate
		///
		/// \property HitRate
		int16_t HitRate = {};

		/// \brief Column [shDuration]: Duration
		///
		/// \property Duration
		int16_t Duration = {};

		/// \brief Column [shDamage]: Damage
		///
		/// \property Damage
		int16_t Damage = {};

		/// \brief Column [byVisoin]: Vision
		///
		/// \property Vision
		uint8_t Vision = {};

		/// \brief Column [nNeedItem]: Needs item
		///
		/// \property NeedItem
		int32_t NeedItem = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const;

	};

	/// \brief [MAKE_DEFENSIVE] Make defensive
	/// \class MakeDefensive
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAKE_DEFENSIVE Make defensive
	class MakeDefensive 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeDefensive;

		/// \brief Column [byLevel]: Level
		///
		/// \property Level
		uint8_t Level = {};

		/// \brief Column [sClass_1]: Class 1
		///
		/// \property Class1
		int16_t Class1 = {};

		/// \brief Column [sClass_2]: Class 2
		///
		/// \property Class2
		int16_t Class2 = {};

		/// \brief Column [sClass_3]: Class 3
		///
		/// \property Class3
		int16_t Class3 = {};

		/// \brief Column [sClass_4]: Class 4
		///
		/// \property Class4
		int16_t Class4 = {};

		/// \brief Column [sClass_5]: Class 5
		///
		/// \property Class5
		int16_t Class5 = {};

		/// \brief Column [sClass_6]: Class 6
		///
		/// \property Class6
		int16_t Class6 = {};

		/// \brief Column [sClass_7]: Class 7
		///
		/// \property Class7
		int16_t Class7 = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const;

	};

	/// \brief [MAKE_ITEM] Make item
	/// \class MakeItem
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAKE_ITEM Make item
	class MakeItem 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeItem;

		/// \brief Column [sIndex]: Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [iItemCode]: Item Code
		///
		/// \property ItemCode
		int32_t ItemCode = {};

		/// \brief Column [byItemLevel]: Item level
		///
		/// \property ItemLevel
		uint8_t ItemLevel = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const;

	};

	/// \brief [MAKE_ITEM_GRADECODE] Make item grade code
	/// \class MakeItemGradeCode
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAKE_ITEM_GRADECODE Make item grade code
	class MakeItemGradeCode 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeItemGradeCode;

		/// \brief Column [byItemIndex]: Item index
		///
		/// \property ItemIndex
		uint8_t ItemIndex = {};

		/// \brief Array grouping for columns [byGrade_1] to [byGrade_9]
		///
		/// Column [byGrade_1]: Grade 1
		/// Column [byGrade_2]: Grade 2
		/// Column [byGrade_3]: Grade 3
		/// Column [byGrade_4]: Grade 4
		/// Column [byGrade_5]: Grade 5
		/// Column [byGrade_6]: Grade 6
		/// Column [byGrade_7]: Grade 7
		/// Column [byGrade_8]: Grade 8
		/// Column [byGrade_9]: Grade 9
		///
		/// \property Grade
		int16_t Grade[9] = {};


		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const;

	};

	/// \brief [MAKE_ITEM_GROUP] Make item group
	/// \class MakeItemGroup
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAKE_ITEM_GROUP Make item group
	class MakeItemGroup 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeItemGroup;

		/// \brief Column [iItemGroupNum]: Item group number
		///
		/// \property ItemGroupNumber
		int32_t ItemGroupNumber = {};

		/// \brief Array grouping for columns [iItem_1] to [iItem_30]
		///
		/// Column [iItem_1]: Item 1
		/// Column [iItem_2]: Item 2
		/// Column [iItem_3]: Item 3
		/// Column [iItem_4]: Item 4
		/// Column [iItem_5]: Item 5
		/// Column [iItem_6]: Item 6
		/// Column [iItem_7]: Item 7
		/// Column [iItem_8]: Item 8
		/// Column [iItem_9]: Item 9
		/// Column [iItem_10]: Item10
		/// Column [iItem_11]: Item 11
		/// Column [iItem_12]: Item 12
		/// Column [iItem_13]: Item 13
		/// Column [iItem_14]: Item 14
		/// Column [iItem_15]: Item 15
		/// Column [iItem_16]: Item 16
		/// Column [iItem_17]: Item 17
		/// Column [iItem_18]: Item 18
		/// Column [iItem_19]: Item 19
		/// Column [iItem_20]: Item 20
		/// Column [iItem_21]: Item 21
		/// Column [iItem_22]: Item 22
		/// Column [iItem_23]: Item 23
		/// Column [iItem_24]: Item 24
		/// Column [iItem_25]: Item 25
		/// Column [iItem_26]: Item 26
		/// Column [iItem_27]: Item 27
		/// Column [iItem_28]: Item 28
		/// Column [iItem_29]: Item 29
		/// Column [iItem_30]: Item 30
		///
		/// \property Item
		int32_t Item[30] = {};


		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int32_t& MapKey() const;

	};

	/// \brief [MAKE_ITEM_LARECODE] Make item rarity codes
	/// \class MakeItemRareCode
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAKE_ITEM_LARECODE Make item rarity codes
	class MakeItemRareCode 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeItemRareCode;

		/// \brief Column [byLevelGrade]: Level grade
		///
		/// \property LevelGrade
		uint8_t LevelGrade = {};

		/// \brief Column [sUpgradeItem]: Upgrade item
		///
		/// \property UpgradeItem
		int16_t UpgradeItem = {};

		/// \brief Column [sLareItem]: Rare item
		///
		/// \property RareItem
		int16_t RareItem = {};

		/// \brief Column [sMagicItem]: Magic item
		///
		/// \property MagicItem
		int16_t MagicItem = {};

		/// \brief Column [sGereralItem]: General item
		///
		/// \property GeneralItem
		int16_t GeneralItem = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const;

	};

	/// \brief [MAKE_WEAPON] Make weapon
	/// \class MakeWeapon
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MAKE_WEAPON Make weapon
	class MakeWeapon 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MakeWeapon;

		/// \brief Column [byLevel]: Level
		///
		/// \property Level
		uint8_t Level = {};

		/// \brief Array grouping for columns [sClass_1] to [sClass_12]
		///
		/// Column [sClass_1]: Class 1
		/// Column [sClass_2]: Class 2
		/// Column [sClass_3]: Class 3
		/// Column [sClass_4]: Class 4
		/// Column [sClass_5]: Class 5
		/// Column [sClass_6]: Class 6
		/// Column [sClass_7]: Class 7
		/// Column [sClass_8]: Class 8
		/// Column [sClass_9]: Class 9
		/// Column [sClass_10]: Class 10
		/// Column [sClass_11]: Class 11
		/// Column [sClass_12]: Class 12
		///
		/// \property Class
		int16_t Class[12] = {};


		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const uint8_t& MapKey() const;

	};

	/// \brief [MONSTER_SUMMON_LIST] Monster summon list
	/// \class MonsterSummonList
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" MONSTER_SUMMON_LIST Monster summon list
	class MonsterSummonList 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::MonsterSummonList;

		/// \brief Column [sSid]: Monster identifier (K_MONSTER.sSid)
		///
		/// \property MonsterId
		int16_t MonsterId = {};

		/// \brief Column [strName]: Name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [sLevel]: Level
		///
		/// \property Level
		int16_t Level = {};

		/// \brief Column [sProbability]: Probability
		///
		/// \property Probability
		int16_t Probability = {};

		/// \brief Column [bType]: Type
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const;

	};

	/// \brief [ZONE_INFO] Zone (map) information
	/// \class ZoneInfo
	/// \xrefitem db_GAME_AIServer "GAME Database - AIServer Library" "GAME Database - AIServer Library" ZONE_INFO Zone (map) information
	class ZoneInfo 
	{
	/// \publicsection
	public:
		using BinderType = aiserver_binder::ZoneInfo;

		/// \brief Column [ServerNo]: Server identifier
		///
		/// \property ServerId
		uint8_t ServerId = {};

		/// \brief Column [ZoneNo]: Zone identifier
		///
		/// \property ZoneId
		int16_t ZoneId = {};

		/// \brief Column [strZoneName]: Zone name
		///
		/// \property Name
		std::string Name;

		/// \brief Column [InitX]: X-coordinate location for a player loading into the zone
		///
		/// \property InitX
		int32_t InitX = {};

		/// \brief Column [InitZ]: Z-coordinate location for a player loading into the zone
		///
		/// \property InitZ
		int32_t InitZ = {};

		/// \brief Column [InitY]: Y-coordinate location for a player loading into the zone
		///
		/// \property InitY
		int32_t InitY = {};

		/// \brief Column [Type]: Type
		///
		/// \property Type
		uint8_t Type = {};

		/// \brief Column [RoomEvent]: Map EventId
		///
		/// \property RoomEvent
		uint8_t RoomEvent = {};

		/// \brief Returns the table name
		static const std::string& TableName();

		/// \brief Returns a set of column names for the table
		static const std::unordered_set<std::string>& ColumnNames();

		/// \brief Returns an ordered vector of column names for the table
		static const std::vector<std::string>& OrderedColumnNames();

		/// \brief Returns a set of blob column names for the table
		static const std::unordered_set<std::string>& BlobColumns();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Returns the columns associated with the table's Primary Key
		static const std::vector<std::string>& PrimaryKey();

		/// \brief Returns a value for use in map keys based on the table's primary key
		const int16_t& MapKey() const;

	};
}

#endif // AISERVER_MODEL_AISERVERMODEL_H