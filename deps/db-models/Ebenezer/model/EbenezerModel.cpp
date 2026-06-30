#include "EbenezerModel.h"

namespace ebenezer_model
{
	const std::string& Battle::TableName()
	{
		static const std::string tableName = "BATTLE";
		return tableName;
	}

	const std::unordered_set<std::string>& Battle::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIndex", "byNation"
		};
		return columnNames;
	}

	const std::vector<std::string>& Battle::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "byNation"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Battle::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Battle::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Battle::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sIndex"
		};
		return primaryKey;
	}

	const int16_t& Battle::MapKey() const
	{
		return Index;
	}
	const std::string& Coefficient::TableName()
	{
		static const std::string tableName = "COEFFICIENT";
		return tableName;
	}

	const std::unordered_set<std::string>& Coefficient::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sClass", "ShortSword", "Sword", "Axe", "Club", "Spear", "Pole", "Staff", "Bow", "Hp", "Mp", "Sp", "Ac", "Hitrate", "Evasionrate"
		};
		return columnNames;
	}

	const std::vector<std::string>& Coefficient::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sClass", "ShortSword", "Sword", "Axe", "Club", "Spear", "Pole", "Staff", "Bow", "Hp", "Mp", "Sp", "Ac", "Hitrate", "Evasionrate"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Coefficient::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Coefficient::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Coefficient::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sClass"
		};
		return primaryKey;
	}

	const int16_t& Coefficient::MapKey() const
	{
		return ClassId;
	}
	const std::string& CouponSerialList::TableName()
	{
		static const std::string tableName = "COUPON_SERIAL_LIST";
		return tableName;
	}

	const std::unordered_set<std::string>& CouponSerialList::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nIndex", "strSerialNum", "nItemNum", "sItemCount"
		};
		return columnNames;
	}

	const std::vector<std::string>& CouponSerialList::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "strSerialNum", "nItemNum", "sItemCount"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& CouponSerialList::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType CouponSerialList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& CouponSerialList::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nIndex"
		};
		return primaryKey;
	}

	const int32_t& CouponSerialList::MapKey() const
	{
		return Index;
	}
	const std::string& Event::TableName()
	{
		static const std::string tableName = "EVENT";
		return tableName;
	}

	const std::unordered_set<std::string>& Event::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"ZoneNum", "EventNum", "Type", "Exec1", "Exec2", "Exec3", "Exec4", "Exec5"
		};
		return columnNames;
	}

	const std::vector<std::string>& Event::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"ZoneNum", "EventNum", "Type", "Exec1", "Exec2", "Exec3", "Exec4", "Exec5"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Event::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Event::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Event::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& EventTrigger::TableName()
	{
		static const std::string tableName = "EVENT_TRIGGER";
		return tableName;
	}

	const std::unordered_set<std::string>& EventTrigger::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nIndex", "bNpcType", "sNpcID", "nTriggerNum"
		};
		return columnNames;
	}

	const std::vector<std::string>& EventTrigger::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "bNpcType", "sNpcID", "nTriggerNum"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& EventTrigger::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType EventTrigger::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& EventTrigger::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nIndex"
		};
		return primaryKey;
	}

	const int32_t& EventTrigger::MapKey() const
	{
		return Index;
	}
	const std::string& Home::TableName()
	{
		static const std::string tableName = "HOME";
		return tableName;
	}

	const std::unordered_set<std::string>& Home::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"Nation", "ElmoZoneX", "ElmoZoneZ", "ElmoZoneLX", "ElmoZoneLZ", "KarusZoneX", "KarusZoneZ", "KarusZoneLX", "KarusZoneLZ", "FreeZoneX", "FreeZoneZ", "FreeZoneLX", "FreeZoneLZ", "BattleZoneX", "BattleZoneZ", "BattleZoneLX", "BattleZoneLZ", "BattleZone2X", "BattleZone2Z", "BattleZone2LX", "BattleZone2LZ"
		};
		return columnNames;
	}

	const std::vector<std::string>& Home::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"Nation", "ElmoZoneX", "ElmoZoneZ", "ElmoZoneLX", "ElmoZoneLZ", "KarusZoneX", "KarusZoneZ", "KarusZoneLX", "KarusZoneLZ", "FreeZoneX", "FreeZoneZ", "FreeZoneLX", "FreeZoneLZ", "BattleZoneX", "BattleZoneZ", "BattleZoneLX", "BattleZoneLZ", "BattleZone2X", "BattleZone2Z", "BattleZone2LX", "BattleZone2LZ"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Home::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Home::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Home::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"Nation"
		};
		return primaryKey;
	}

	const uint8_t& Home::MapKey() const
	{
		return Nation;
	}
	const std::string& Item::TableName()
	{
		static const std::string tableName = "ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& Item::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"Num", "strName", "Kind", "Slot", "Race", "Class", "Damage", "Delay", "Range", "Weight", "Duration", "BuyPrice", "SellPrice", "Ac", "Countable", "Effect1", "Effect2", "ReqLevel", "ReqRank", "ReqTitle", "ReqStr", "ReqSta", "ReqDex", "ReqIntel", "ReqCha", "SellingGroup", "ItemType", "Hitrate", "Evasionrate", "DaggerAc", "SwordAc", "MaceAc", "AxeAc", "SpearAc", "BowAc", "FireDamage", "IceDamage", "LightningDamage", "PoisonDamage", "HPDrain", "MPDamage", "MPDrain", "MirrorDamage", "Droprate", "StrB", "StaB", "DexB", "IntelB", "ChaB", "MaxHpB", "MaxMpB", "FireR", "ColdR", "LightningR", "MagicR", "PoisonR", "CurseR"
		};
		return columnNames;
	}

	const std::vector<std::string>& Item::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"Num", "strName", "Kind", "Slot", "Race", "Class", "Damage", "Delay", "Range", "Weight", "Duration", "BuyPrice", "SellPrice", "Ac", "Countable", "Effect1", "Effect2", "ReqLevel", "ReqRank", "ReqTitle", "ReqStr", "ReqSta", "ReqDex", "ReqIntel", "ReqCha", "SellingGroup", "ItemType", "Hitrate", "Evasionrate", "DaggerAc", "SwordAc", "MaceAc", "AxeAc", "SpearAc", "BowAc", "FireDamage", "IceDamage", "LightningDamage", "PoisonDamage", "HPDrain", "MPDamage", "MPDrain", "MirrorDamage", "Droprate", "StrB", "StaB", "DexB", "IntelB", "ChaB", "MaxHpB", "MaxMpB", "FireR", "ColdR", "LightningR", "MagicR", "PoisonR", "CurseR"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Item::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Item::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Item::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"Num"
		};
		return primaryKey;
	}

	const int32_t& Item::MapKey() const
	{
		return ID;
	}
	const std::string& ItemExchange::TableName()
	{
		static const std::string tableName = "ITEM_EXCHANGE";
		return tableName;
	}

	const std::unordered_set<std::string>& ItemExchange::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nIndex", "nNpcNum", "bRandomFlag", "nOriginItemNum1", "nOriginItemCount1", "nOriginItemNum2", "nOriginItemCount2", "nOriginItemNum3", "nOriginItemCount3", "nOriginItemNum4", "nOriginItemCount4", "nOriginItemNum5", "nOriginItemCount5", "nExchangeItemNum1", "nExchangeItemCount1", "nExchangeItemNum2", "nExchangeItemCount2", "nExchangeItemNum3", "nExchangeItemCount3", "nExchangeItemNum4", "nExchangeItemCount4", "nExchangeItemNum5", "nExchangeItemCount5"
		};
		return columnNames;
	}

	const std::vector<std::string>& ItemExchange::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "nNpcNum", "bRandomFlag", "nOriginItemNum1", "nOriginItemCount1", "nOriginItemNum2", "nOriginItemCount2", "nOriginItemNum3", "nOriginItemCount3", "nOriginItemNum4", "nOriginItemCount4", "nOriginItemNum5", "nOriginItemCount5", "nExchangeItemNum1", "nExchangeItemCount1", "nExchangeItemNum2", "nExchangeItemCount2", "nExchangeItemNum3", "nExchangeItemCount3", "nExchangeItemNum4", "nExchangeItemCount4", "nExchangeItemNum5", "nExchangeItemCount5"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& ItemExchange::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType ItemExchange::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& ItemExchange::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nIndex"
		};
		return primaryKey;
	}

	const int32_t& ItemExchange::MapKey() const
	{
		return Index;
	}
	const std::string& ItemUpgrade::TableName()
	{
		static const std::string tableName = "ITEM_UPGRADE";
		return tableName;
	}

	const std::unordered_set<std::string>& ItemUpgrade::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nIndex", "nNPCNum", "nOriginType", "nOriginItem", "nReqItem1", "nReqItem2", "nReqItem3", "nReqItem4", "nReqItem5", "nReqItem6", "nReqItem7", "nReqItem8", "nReqNoah", "bRateType", "nGenRate", "nGiveItem"
		};
		return columnNames;
	}

	const std::vector<std::string>& ItemUpgrade::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "nNPCNum", "nOriginType", "nOriginItem", "nReqItem1", "nReqItem2", "nReqItem3", "nReqItem4", "nReqItem5", "nReqItem6", "nReqItem7", "nReqItem8", "nReqNoah", "bRateType", "nGenRate", "nGiveItem"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& ItemUpgrade::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType ItemUpgrade::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& ItemUpgrade::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nIndex"
		};
		return primaryKey;
	}

	const int32_t& ItemUpgrade::MapKey() const
	{
		return Index;
	}
	const std::string& Knights::TableName()
	{
		static const std::string tableName = "KNIGHTS";
		return tableName;
	}

	const std::unordered_set<std::string>& Knights::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"IDNum", "Flag", "Nation", "Ranking", "IDName", "Members", "Chief", "ViceChief_1", "ViceChief_2", "ViceChief_3", "strEnemyName", "byOldWarResult", "nWarEnemyID", "nVictory", "nLose", "Gold", "Domination", "Points", "sMarkVersion", "sMarkLen", "Mark", "bySiegeFlag", "sAllianceKnights", "sCape"
		};
		return columnNames;
	}

	const std::vector<std::string>& Knights::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"IDNum", "Flag", "Nation", "Ranking", "IDName", "Members", "Chief", "ViceChief_1", "ViceChief_2", "ViceChief_3", "strEnemyName", "byOldWarResult", "nWarEnemyID", "nVictory", "nLose", "Gold", "Domination", "Points", "sMarkVersion", "sMarkLen", "Mark", "bySiegeFlag", "sAllianceKnights", "sCape"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Knights::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"Mark"
		};
		return blobColumns;
	}

	modelUtil::DbType Knights::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Knights::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"IDNum"
		};
		return primaryKey;
	}

	const int16_t& Knights::MapKey() const
	{
		return ID;
	}
	const std::string& KnightsAlliance::TableName()
	{
		static const std::string tableName = "KNIGHTS_ALLIANCE";
		return tableName;
	}

	const std::unordered_set<std::string>& KnightsAlliance::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sMainAllianceKnights", "sSubAllianceKnights", "sMercenaryClan_1", "sMercenaryClan_2"
		};
		return columnNames;
	}

	const std::vector<std::string>& KnightsAlliance::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sMainAllianceKnights", "sSubAllianceKnights", "sMercenaryClan_1", "sMercenaryClan_2"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KnightsAlliance::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType KnightsAlliance::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KnightsAlliance::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sMainAllianceKnights"
		};
		return primaryKey;
	}

	const int16_t& KnightsAlliance::MapKey() const
	{
		return MainAllianceKnights;
	}
	const std::string& KnightsCape::TableName()
	{
		static const std::string tableName = "KNIGHTS_CAPE";
		return tableName;
	}

	const std::unordered_set<std::string>& KnightsCape::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sCapeIndex", "nBuyPrice", "nDuration", "byGrade"
		};
		return columnNames;
	}

	const std::vector<std::string>& KnightsCape::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sCapeIndex", "nBuyPrice", "nDuration", "byGrade"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KnightsCape::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType KnightsCape::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KnightsCape::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sCapeIndex"
		};
		return primaryKey;
	}

	const int16_t& KnightsCape::MapKey() const
	{
		return CapeIndex;
	}
	const std::string& KnightsRating::TableName()
	{
		static const std::string tableName = "KNIGHTS_RATING";
		return tableName;
	}

	const std::unordered_set<std::string>& KnightsRating::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nRank", "shIndex", "strName", "nPoints"
		};
		return columnNames;
	}

	const std::vector<std::string>& KnightsRating::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nRank", "shIndex", "strName", "nPoints"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KnightsRating::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType KnightsRating::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KnightsRating::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nRank"
		};
		return primaryKey;
	}

	const int32_t& KnightsRating::MapKey() const
	{
		return Rank;
	}
	const std::string& KnightsSiegeWarfare::TableName()
	{
		static const std::string tableName = "KNIGHTS_SIEGE_WARFARE";
		return tableName;
	}

	const std::unordered_set<std::string>& KnightsSiegeWarfare::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sCastleIndex", "sMasterKnights", "bySiegeType", "byWarDay", "byWarTime", "byWarMinute", "sChallengeList_1", "sChallengeList_2", "sChallengeList_3", "sChallengeList_4", "sChallengeList_5", "sChallengeList_6", "sChallengeList_7", "sChallengeList_8", "sChallengeList_9", "sChallengeList_10", "byWarRequestDay", "byWarRequestTime", "byWarRequestMinute", "byGuerrillaWarDay", "byGuerrillaWarTime", "byGuerrillaWarMinute", "strChallengeList", "sMoradonTariff", "sDellosTariff", "nDungeonCharge", "nMoradonTax", "nDellosTax", "sRequestList_1", "sRequestList_2", "sRequestList_3", "sRequestList_4", "sRequestList_5", "sRequestList_6", "sRequestList_7", "sRequestList_8", "sRequestList_9", "sRequestList_10"
		};
		return columnNames;
	}

	const std::vector<std::string>& KnightsSiegeWarfare::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sCastleIndex", "sMasterKnights", "bySiegeType", "byWarDay", "byWarTime", "byWarMinute", "sChallengeList_1", "sChallengeList_2", "sChallengeList_3", "sChallengeList_4", "sChallengeList_5", "sChallengeList_6", "sChallengeList_7", "sChallengeList_8", "sChallengeList_9", "sChallengeList_10", "byWarRequestDay", "byWarRequestTime", "byWarRequestMinute", "byGuerrillaWarDay", "byGuerrillaWarTime", "byGuerrillaWarMinute", "strChallengeList", "sMoradonTariff", "sDellosTariff", "nDungeonCharge", "nMoradonTax", "nDellosTax", "sRequestList_1", "sRequestList_2", "sRequestList_3", "sRequestList_4", "sRequestList_5", "sRequestList_6", "sRequestList_7", "sRequestList_8", "sRequestList_9", "sRequestList_10"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KnightsSiegeWarfare::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType KnightsSiegeWarfare::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KnightsSiegeWarfare::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sCastleIndex"
		};
		return primaryKey;
	}

	const int16_t& KnightsSiegeWarfare::MapKey() const
	{
		return CastleIndex;
	}
	const std::string& KnightsUser::TableName()
	{
		static const std::string tableName = "KNIGHTS_USER";
		return tableName;
	}

	const std::unordered_set<std::string>& KnightsUser::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIDNum", "strUserID"
		};
		return columnNames;
	}

	const std::vector<std::string>& KnightsUser::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIDNum", "strUserID"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KnightsUser::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType KnightsUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KnightsUser::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sIDNum", "strUserID"
		};
		return primaryKey;
	}

	std::tuple<const int16_t&, const std::string&> KnightsUser::MapKey() const
	{
		return std::tuple<const int16_t&, const std::string&>{KnightsId, UserId};
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
	const std::string& MagicType5::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE5";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType5::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iNum", "Type", "ExpRecover", "NeedStone"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType5::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Type", "ExpRecover", "NeedStone"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType5::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType5::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType5::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iNum"
		};
		return primaryKey;
	}

	const int32_t& MagicType5::MapKey() const
	{
		return ID;
	}
	const std::string& MagicType6::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE6";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType6::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iNum", "Size", "TransformID", "Duration", "MaxHp", "MaxMp", "Speed", "AttackSpeed", "TotalHit", "TotalAc", "TotalHitRate", "TotalEvasionRate", "TotalFireR", "TotalColdR", "TotalLightningR", "TotalMagicR", "TotalDiseaseR", "TotalPoisonR", "Class", "UserSkillUse", "NeedItem", "SkillSuccessRate", "MonsterFriendly"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType6::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Size", "TransformID", "Duration", "MaxHp", "MaxMp", "Speed", "AttackSpeed", "TotalHit", "TotalAc", "TotalHitRate", "TotalEvasionRate", "TotalFireR", "TotalColdR", "TotalLightningR", "TotalMagicR", "TotalDiseaseR", "TotalPoisonR", "Class", "UserSkillUse", "NeedItem", "SkillSuccessRate", "MonsterFriendly"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType6::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType6::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType6::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iNum"
		};
		return primaryKey;
	}

	const int32_t& MagicType6::MapKey() const
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
	const std::string& MagicType8::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE8";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType8::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iNum", "Target", "Radius", "WarpType", "ExpRecover"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType8::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Target", "Radius", "WarpType", "ExpRecover"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType8::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType8::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType8::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iNum"
		};
		return primaryKey;
	}

	const int32_t& MagicType8::MapKey() const
	{
		return ID;
	}
	const std::string& MagicType9::TableName()
	{
		static const std::string tableName = "MAGIC_TYPE9";
		return tableName;
	}

	const std::unordered_set<std::string>& MagicType9::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"iNum", "ValidGroup", "NationChange", "MonsterNum", "TargetChange", "StateChange", "Radius", "Hitrate", "Duration", "AddDamage", "Vision", "NeedItem"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType9::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "ValidGroup", "NationChange", "MonsterNum", "TargetChange", "StateChange", "Radius", "Hitrate", "Duration", "AddDamage", "Vision", "NeedItem"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MagicType9::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MagicType9::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MagicType9::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"iNum"
		};
		return primaryKey;
	}

	const int32_t& MagicType9::MapKey() const
	{
		return ID;
	}
	const std::string& MonsterChallenge::TableName()
	{
		static const std::string tableName = "MONSTER_CHALLENGE";
		return tableName;
	}

	const std::unordered_set<std::string>& MonsterChallenge::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIndex", "bStartTime1", "bStartTime2", "bStartTime3", "bLevelMin", "bLevelMax"
		};
		return columnNames;
	}

	const std::vector<std::string>& MonsterChallenge::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "bStartTime1", "bStartTime2", "bStartTime3", "bLevelMin", "bLevelMax"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MonsterChallenge::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MonsterChallenge::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MonsterChallenge::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sIndex"
		};
		return primaryKey;
	}

	const int16_t& MonsterChallenge::MapKey() const
	{
		return Index;
	}
	const std::string& MonsterChallengeSummonList::TableName()
	{
		static const std::string tableName = "MONSTER_CHALLENGE_SUMMON_LIST";
		return tableName;
	}

	const std::unordered_set<std::string>& MonsterChallengeSummonList::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIndex", "bLevel", "bStage", "bStageLevel", "sTime", "sSid", "sCount", "sPosX", "sPosZ", "bRange"
		};
		return columnNames;
	}

	const std::vector<std::string>& MonsterChallengeSummonList::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "bLevel", "bStage", "bStageLevel", "sTime", "sSid", "sCount", "sPosX", "sPosZ", "bRange"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MonsterChallengeSummonList::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MonsterChallengeSummonList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MonsterChallengeSummonList::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sIndex"
		};
		return primaryKey;
	}

	const int16_t& MonsterChallengeSummonList::MapKey() const
	{
		return Index;
	}
	const std::string& RentalItem::TableName()
	{
		static const std::string tableName = "RENTAL_ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& RentalItem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID"
		};
		return columnNames;
	}

	const std::vector<std::string>& RentalItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& RentalItem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType RentalItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& RentalItem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nRentalIndex"
		};
		return primaryKey;
	}

	const int32_t& RentalItem::MapKey() const
	{
		return RentalIndex;
	}
	const std::string& ServerResource::TableName()
	{
		static const std::string tableName = "SERVER_RESOURCE";
		return tableName;
	}

	const std::unordered_set<std::string>& ServerResource::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nResourceID", "strResource"
		};
		return columnNames;
	}

	const std::vector<std::string>& ServerResource::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nResourceID", "strResource"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& ServerResource::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType ServerResource::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& ServerResource::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nResourceID"
		};
		return primaryKey;
	}

	const int32_t& ServerResource::MapKey() const
	{
		return ResourceId;
	}
	const std::string& StartPosition::TableName()
	{
		static const std::string tableName = "START_POSITION";
		return tableName;
	}

	const std::unordered_set<std::string>& StartPosition::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"ZoneID", "sKarusX", "sKarusZ", "sElmoradX", "sElmoradZ", "bRangeX", "bRangeZ", "sKarusGateX", "sKarusGateZ", "sElmoGateX", "sElmoGateZ"
		};
		return columnNames;
	}

	const std::vector<std::string>& StartPosition::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"ZoneID", "sKarusX", "sKarusZ", "sElmoradX", "sElmoradZ", "bRangeX", "bRangeZ", "sKarusGateX", "sKarusGateZ", "sElmoGateX", "sElmoGateZ"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& StartPosition::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType StartPosition::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& StartPosition::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"ZoneID"
		};
		return primaryKey;
	}

	const int16_t& StartPosition::MapKey() const
	{
		return ZoneId;
	}
	const std::string& UserKnightsRank::TableName()
	{
		static const std::string tableName = "USER_KNIGHTS_RANK";
		return tableName;
	}

	const std::unordered_set<std::string>& UserKnightsRank::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"shIndex", "strElmoUserID", "strKarusUserID", "nMoney", "isClaimedElmo", "isClaimedKarus"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserKnightsRank::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"shIndex", "strElmoUserID", "strKarusUserID", "nMoney", "isClaimedElmo", "isClaimedKarus"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserKnightsRank::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType UserKnightsRank::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& UserKnightsRank::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"shIndex"
		};
		return primaryKey;
	}

	const int16_t& UserKnightsRank::MapKey() const
	{
		return Index;
	}
	const std::string& UserPersonalRank::TableName()
	{
		static const std::string tableName = "USER_PERSONAL_RANK";
		return tableName;
	}

	const std::unordered_set<std::string>& UserPersonalRank::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nRank", "strElmoUserID", "strKarusUserID", "nSalary", "isClaimedElmo", "isClaimedKarus"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserPersonalRank::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nRank", "strElmoUserID", "strKarusUserID", "nSalary", "isClaimedElmo", "isClaimedKarus"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserPersonalRank::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType UserPersonalRank::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& UserPersonalRank::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nRank"
		};
		return primaryKey;
	}

	const int16_t& UserPersonalRank::MapKey() const
	{
		return Rank;
	}
	const std::string& WebpageAddress::TableName()
	{
		static const std::string tableName = "WEBPAGE_ADDRESS";
		return tableName;
	}

	const std::unordered_set<std::string>& WebpageAddress::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nIndex", "strWebPageAddress"
		};
		return columnNames;
	}

	const std::vector<std::string>& WebpageAddress::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "strWebPageAddress"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& WebpageAddress::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType WebpageAddress::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& WebpageAddress::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"nIndex"
		};
		return primaryKey;
	}

	const int32_t& WebpageAddress::MapKey() const
	{
		return Index;
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