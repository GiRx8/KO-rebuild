#include "AIServerModel.h"

namespace aiserver_model
{
	const std::string& Monster::TableName()
	{
		static const std::string tableName = "K_MONSTER";
		return tableName;
	}

	const std::unordered_set<std::string>& Monster::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sSid", "strName", "sPid", "sSize", "iWeapon1", "iWeapon2", "byGroup", "byActType", "byType", "byFamily", "byRank", "byTitle", "iSellingGroup", "sLevel", "iExp", "iLoyalty", "iHpPoint", "sMpPoint", "sAtk", "sAc", "sHitRate", "sEvadeRate", "sDamage", "sAttackDelay", "bySpeed1", "bySpeed2", "sStandtime", "iMagic1", "iMagic2", "iMagic3", "sFireR", "sColdR", "sLightningR", "sMagicR", "sDiseaseR", "sPoisonR", "sLightR", "sBulk", "byAttackRange", "bySearchRange", "byTracingRange", "iMoney", "sItem", "byDirectAttack", "byMagicAttack", "byMoneyType"
		};
		return columnNames;
	}

	const std::vector<std::string>& Monster::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sSid", "strName", "sPid", "sSize", "iWeapon1", "iWeapon2", "byGroup", "byActType", "byType", "byFamily", "byRank", "byTitle", "iSellingGroup", "sLevel", "iExp", "iLoyalty", "iHpPoint", "sMpPoint", "sAtk", "sAc", "sHitRate", "sEvadeRate", "sDamage", "sAttackDelay", "bySpeed1", "bySpeed2", "sStandtime", "iMagic1", "iMagic2", "iMagic3", "sFireR", "sColdR", "sLightningR", "sMagicR", "sDiseaseR", "sPoisonR", "sLightR", "sBulk", "byAttackRange", "bySearchRange", "byTracingRange", "iMoney", "sItem", "byDirectAttack", "byMagicAttack", "byMoneyType"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Monster::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Monster::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Monster::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sSid"
		};
		return primaryKey;
	}

	const int16_t& Monster::MapKey() const
	{
		return MonsterId;
	}
	const std::string& MonsterItem::TableName()
	{
		static const std::string tableName = "K_MONSTER_ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& MonsterItem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
		};
		return columnNames;
	}

	const std::vector<std::string>& MonsterItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MonsterItem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MonsterItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MonsterItem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sIndex"
		};
		return primaryKey;
	}

	const int16_t& MonsterItem::MapKey() const
	{
		return MonsterId;
	}
	const std::string& Npc::TableName()
	{
		static const std::string tableName = "K_NPC";
		return tableName;
	}

	const std::unordered_set<std::string>& Npc::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sSid", "strName", "sPid", "sSize", "iWeapon1", "iWeapon2", "byGroup", "byActType", "byType", "byFamily", "byRank", "byTitle", "iSellingGroup", "sLevel", "iExp", "iLoyalty", "iHpPoint", "sMpPoint", "sAtk", "sAc", "sHitRate", "sEvadeRate", "sDamage", "sAttackDelay", "bySpeed1", "bySpeed2", "sStandtime", "iMagic1", "iMagic2", "iMagic3", "sFireR", "sColdR", "sLightningR", "sMagicR", "sDiseaseR", "sPoisonR", "sLightR", "sBulk", "byAttackRange", "bySearchRange", "byTracingRange", "iMoney", "sItem", "byDirectAttack", "byMagicAttack", "byMoneyType"
		};
		return columnNames;
	}

	const std::vector<std::string>& Npc::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sSid", "strName", "sPid", "sSize", "iWeapon1", "iWeapon2", "byGroup", "byActType", "byType", "byFamily", "byRank", "byTitle", "iSellingGroup", "sLevel", "iExp", "iLoyalty", "iHpPoint", "sMpPoint", "sAtk", "sAc", "sHitRate", "sEvadeRate", "sDamage", "sAttackDelay", "bySpeed1", "bySpeed2", "sStandtime", "iMagic1", "iMagic2", "iMagic3", "sFireR", "sColdR", "sLightningR", "sMagicR", "sDiseaseR", "sPoisonR", "sLightR", "sBulk", "byAttackRange", "bySearchRange", "byTracingRange", "iMoney", "sItem", "byDirectAttack", "byMagicAttack", "byMoneyType"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Npc::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Npc::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Npc::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sSid"
		};
		return primaryKey;
	}

	const int16_t& Npc::MapKey() const
	{
		return NpcId;
	}
	const std::string& NpcMoveItem::TableName()
	{
		static const std::string tableName = "K_NPC_MOVE_ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& NpcMoveItem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sCastleIndex", "byChangeItem", "sChangeSid", "byMoveItem", "sMoveMinX", "sMoveMinY", "sMoveMaxX", "sMoveMaxY"
		};
		return columnNames;
	}

	const std::vector<std::string>& NpcMoveItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sCastleIndex", "byChangeItem", "sChangeSid", "byMoveItem", "sMoveMinX", "sMoveMinY", "sMoveMaxX", "sMoveMaxY"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& NpcMoveItem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType NpcMoveItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& NpcMoveItem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sCastleIndex"
		};
		return primaryKey;
	}

	const int16_t& NpcMoveItem::MapKey() const
	{
		return CastleIndex;
	}
	const std::string& NpcPos::TableName()
	{
		static const std::string tableName = "K_NPCPOS";
		return tableName;
	}

	const std::unordered_set<std::string>& NpcPos::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"ZoneID", "NpcID", "ActType", "RegenType", "DungeonFamily", "SpecialType", "TrapNumber", "LeftX", "TopZ", "RightX", "BottomZ", "LimitMinZ", "LimitMinX", "LimitMaxX", "LimitMaxZ", "NumNPC", "RegTime", "byDirection", "DotCnt", "path"
		};
		return columnNames;
	}

	const std::vector<std::string>& NpcPos::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"ZoneID", "NpcID", "ActType", "RegenType", "DungeonFamily", "SpecialType", "TrapNumber", "LeftX", "TopZ", "RightX", "BottomZ", "LimitMinZ", "LimitMinX", "LimitMaxX", "LimitMaxZ", "NumNPC", "RegTime", "byDirection", "DotCnt", "path"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& NpcPos::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"path"
		};
		return blobColumns;
	}

	modelUtil::DbType NpcPos::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& NpcPos::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& LevelUp::TableName()
	{
		static const std::string tableName = "LEVEL_UP";
		return tableName;
	}

	const std::unordered_set<std::string>& LevelUp::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"level", "Exp"
		};
		return columnNames;
	}

	const std::vector<std::string>& LevelUp::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"level", "Exp"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& LevelUp::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType LevelUp::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& LevelUp::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"level"
		};
		return primaryKey;
	}

	const uint8_t& LevelUp::MapKey() const
	{
		return Level;
	}
	const std::string& Magic::TableName()
	{
		static const std::string tableName = "MAGIC";
		return tableName;
	}

	const std::unordered_set<std::string>& Magic::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"MagicNum", "BeforeAction", "TargetAction", "SelfEffect", "FlyingEffect", "TargetEffect", "Moral", "SkillLevel", "Skill", "Msp", "HP", "ItemGroup", "UseItem", "CastTime", "ReCastTime", "SuccessRate", "Type1", "Type2", "Range", "Etc", "Event"
		};
		return columnNames;
	}

	const std::vector<std::string>& Magic::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"MagicNum", "BeforeAction", "TargetAction", "SelfEffect", "FlyingEffect", "TargetEffect", "Moral", "SkillLevel", "Skill", "Msp", "HP", "ItemGroup", "UseItem", "CastTime", "ReCastTime", "SuccessRate", "Type1", "Type2", "Range", "Etc", "Event"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Magic::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Magic::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Magic::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"MagicNum"
		};
		return primaryKey;
	}

	const int32_t& Magic::MapKey() const
	{
		return ID;
	}
	const std::string& MagicType1::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE1";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType1::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iNum", "Type", "HitRate", "Hit", "AddDamage", "Delay", "ComboType", "ComboCount", "ComboDamage", "Range"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType1::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Type", "HitRate", "Hit", "AddDamage", "Delay", "ComboType", "ComboCount", "ComboDamage", "Range"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType1::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType1::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType1::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iNum"
		};
		return primaryKey;
	}

	const int32_t& MagicType1::MapKey() const
	{
		return ID;
	}
	const std::string& MagicType2::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE2";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType2::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iNum", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType2::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType2::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType2::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType2::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iNum"
		};
		return primaryKey;
	}

	const int32_t& MagicType2::MapKey() const
	{
		return ID;
	}
	const std::string& MagicType3::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE3";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType3::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iNum", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType3::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType3::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType3::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType3::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iNum"
		};
		return primaryKey;
	}

	const int32_t& MagicType3::MapKey() const
	{
		return ID;
	}
	const std::string& MagicType4::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE4";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType4::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iNum", "BuffType", "Radius", "Duration", "AttackSpeed", "Speed", "AC", "ACPct", "Attack", "MagicAttack", "MaxHP", "MaxHpPct", "MaxMP", "MaxMpPct", "HitRate", "AvoidRate", "Str", "Sta", "Dex", "Intel", "Cha", "FireR", "ColdR", "LightningR", "MagicR", "DiseaseR", "PoisonR", "ExpPct"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType4::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "BuffType", "Radius", "Duration", "AttackSpeed", "Speed", "AC", "ACPct", "Attack", "MagicAttack", "MaxHP", "MaxHpPct", "MaxMP", "MaxMpPct", "HitRate", "AvoidRate", "Str", "Sta", "Dex", "Intel", "Cha", "FireR", "ColdR", "LightningR", "MagicR", "DiseaseR", "PoisonR", "ExpPct"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType4::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType4::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType4::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iNum"
		};
		return primaryKey;
	}

	const int32_t& MagicType4::MapKey() const
	{
		return ID;
	}
	const std::string& MagicType7::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE7";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType7::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nIndex", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType7::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType7::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType7::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType7::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nIndex"
		};
		return primaryKey;
	}

	const int32_t& MagicType7::MapKey() const
	{
		return ID;
	}
	const std::string& MakeDefensive::TableName()
	{
		static const std::string tableName = "MAKE_DEFENSIVE";
		return tableName;
	}

	const std::unordered_set<std::string>& MakeDefensive::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"byLevel", "sClass_1", "sClass_2", "sClass_3", "sClass_4", "sClass_5", "sClass_6", "sClass_7"
		};
		return columnNames;
	}

	const std::vector<std::string>& MakeDefensive::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"byLevel", "sClass_1", "sClass_2", "sClass_3", "sClass_4", "sClass_5", "sClass_6", "sClass_7"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MakeDefensive::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MakeDefensive::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MakeDefensive::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"byLevel"
		};
		return primaryKey;
	}

	const uint8_t& MakeDefensive::MapKey() const
	{
		return Level;
	}
	const std::string& MakeItem::TableName()
	{
		static const std::string tableName = "MAKE_ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& MakeItem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIndex", "iItemCode", "byItemLevel"
		};
		return columnNames;
	}

	const std::vector<std::string>& MakeItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "iItemCode", "byItemLevel"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MakeItem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MakeItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MakeItem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sIndex"
		};
		return primaryKey;
	}

	const int16_t& MakeItem::MapKey() const
	{
		return Index;
	}
	const std::string& MakeItemGradeCode::TableName()
	{
		static const std::string tableName = "MAKE_ITEM_GRADECODE";
		return tableName;
	}

	const std::unordered_set<std::string>& MakeItemGradeCode::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"byItemIndex", "byGrade_1", "byGrade_2", "byGrade_3", "byGrade_4", "byGrade_5", "byGrade_6", "byGrade_7", "byGrade_8", "byGrade_9"
		};
		return columnNames;
	}

	const std::vector<std::string>& MakeItemGradeCode::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"byItemIndex", "byGrade_1", "byGrade_2", "byGrade_3", "byGrade_4", "byGrade_5", "byGrade_6", "byGrade_7", "byGrade_8", "byGrade_9"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MakeItemGradeCode::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MakeItemGradeCode::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MakeItemGradeCode::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"byItemIndex"
		};
		return primaryKey;
	}

	const uint8_t& MakeItemGradeCode::MapKey() const
	{
		return ItemIndex;
	}
	const std::string& MakeItemGroup::TableName()
	{
		static const std::string tableName = "MAKE_ITEM_GROUP";
		return tableName;
	}

	const std::unordered_set<std::string>& MakeItemGroup::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iItemGroupNum", "iItem_1", "iItem_2", "iItem_3", "iItem_4", "iItem_5", "iItem_6", "iItem_7", "iItem_8", "iItem_9", "iItem_10", "iItem_11", "iItem_12", "iItem_13", "iItem_14", "iItem_15", "iItem_16", "iItem_17", "iItem_18", "iItem_19", "iItem_20", "iItem_21", "iItem_22", "iItem_23", "iItem_24", "iItem_25", "iItem_26", "iItem_27", "iItem_28", "iItem_29", "iItem_30"
		};
		return columnNames;
	}

	const std::vector<std::string>& MakeItemGroup::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iItemGroupNum", "iItem_1", "iItem_2", "iItem_3", "iItem_4", "iItem_5", "iItem_6", "iItem_7", "iItem_8", "iItem_9", "iItem_10", "iItem_11", "iItem_12", "iItem_13", "iItem_14", "iItem_15", "iItem_16", "iItem_17", "iItem_18", "iItem_19", "iItem_20", "iItem_21", "iItem_22", "iItem_23", "iItem_24", "iItem_25", "iItem_26", "iItem_27", "iItem_28", "iItem_29", "iItem_30"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MakeItemGroup::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MakeItemGroup::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MakeItemGroup::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iItemGroupNum"
		};
		return primaryKey;
	}

	const int32_t& MakeItemGroup::MapKey() const
	{
		return ItemGroupNumber;
	}
	const std::string& MakeItemRareCode::TableName()
	{
		static const std::string tableName = "MAKE_ITEM_LARECODE";
		return tableName;
	}

	const std::unordered_set<std::string>& MakeItemRareCode::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"byLevelGrade", "sUpgradeItem", "sLareItem", "sMagicItem", "sGereralItem"
		};
		return columnNames;
	}

	const std::vector<std::string>& MakeItemRareCode::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"byLevelGrade", "sUpgradeItem", "sLareItem", "sMagicItem", "sGereralItem"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MakeItemRareCode::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MakeItemRareCode::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MakeItemRareCode::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"byLevelGrade"
		};
		return primaryKey;
	}

	const uint8_t& MakeItemRareCode::MapKey() const
	{
		return LevelGrade;
	}
	const std::string& MakeWeapon::TableName()
	{
		static const std::string tableName = "MAKE_WEAPON";
		return tableName;
	}

	const std::unordered_set<std::string>& MakeWeapon::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"byLevel", "sClass_1", "sClass_2", "sClass_3", "sClass_4", "sClass_5", "sClass_6", "sClass_7", "sClass_8", "sClass_9", "sClass_10", "sClass_11", "sClass_12"
		};
		return columnNames;
	}

	const std::vector<std::string>& MakeWeapon::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"byLevel", "sClass_1", "sClass_2", "sClass_3", "sClass_4", "sClass_5", "sClass_6", "sClass_7", "sClass_8", "sClass_9", "sClass_10", "sClass_11", "sClass_12"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MakeWeapon::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MakeWeapon::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MakeWeapon::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"byLevel"
		};
		return primaryKey;
	}

	const uint8_t& MakeWeapon::MapKey() const
	{
		return Level;
	}
	const std::string& MonsterSummonList::TableName()
	{
		static const std::string tableName = "MONSTER_SUMMON_LIST";
		return tableName;
	}

	const std::unordered_set<std::string>& MonsterSummonList::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sSid", "strName", "sLevel", "sProbability", "bType"
		};
		return columnNames;
	}

	const std::vector<std::string>& MonsterSummonList::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sSid", "strName", "sLevel", "sProbability", "bType"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MonsterSummonList::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MonsterSummonList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MonsterSummonList::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sSid"
		};
		return primaryKey;
	}

	const int16_t& MonsterSummonList::MapKey() const
	{
		return MonsterId;
	}
	const std::string& ZoneInfo::TableName()
	{
		static const std::string tableName = "ZONE_INFO";
		return tableName;
	}

	const std::unordered_set<std::string>& ZoneInfo::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"ServerNo", "ZoneNo", "strZoneName", "InitX", "InitZ", "InitY", "Type", "RoomEvent"
		};
		return columnNames;
	}

	const std::vector<std::string>& ZoneInfo::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"ServerNo", "ZoneNo", "strZoneName", "InitX", "InitZ", "InitY", "Type", "RoomEvent"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& ZoneInfo::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType ZoneInfo::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& ZoneInfo::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"ZoneNo"
		};
		return primaryKey;
	}

	const int16_t& ZoneInfo::MapKey() const
	{
		return ZoneId;
	}
}