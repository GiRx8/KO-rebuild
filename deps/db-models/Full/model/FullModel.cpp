#include "FullModel.h"

namespace full_model
{
	const std::string& AccountChar::TableName()
	{
		static const std::string tableName = "ACCOUNT_CHAR";
		return tableName;
	}

	const std::unordered_set<std::string>& AccountChar::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "bNation", "bCharNum", "strCharID1", "strCharID2", "strCharID3"
		};
		return columnNames;
	}

	const std::vector<std::string>& AccountChar::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "bNation", "bCharNum", "strCharID1", "strCharID2", "strCharID3"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& AccountChar::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType AccountChar::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& AccountChar::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strAccountID"
		};
		return primaryKey;
	}

	const std::string& AccountChar::MapKey() const
	{
		return AccountId;
	}
	const std::string& Battle::TableName()
	{
		static const std::string tableName = "BATTLE";
		return tableName;
	}

	const std::unordered_set<std::string>& Battle::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIndex", "byNation", "strUserName", "byElmoArea", "byKarusArea", "byElmoAdvantage", "byKarusAdvantage", "byArea_1", "byArea_2", "byArea_3", "byArea_4", "byArea_5", "byArea_6", "byArea_7", "byArea_8", "byArea_9", "byArea_10", "byArea_11"
		};
		return columnNames;
	}

	const std::vector<std::string>& Battle::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "byNation", "strUserName", "byElmoArea", "byKarusArea", "byElmoAdvantage", "byKarusAdvantage", "byArea_1", "byArea_2", "byArea_3", "byArea_4", "byArea_5", "byArea_6", "byArea_7", "byArea_8", "byArea_9", "byArea_10", "byArea_11"
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
	const std::string& Concurrent::TableName()
	{
		static const std::string tableName = "CONCURRENT";
		return tableName;
	}

	const std::unordered_set<std::string>& Concurrent::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"serverid", "zone1_count", "zone2_count", "zone3_count", "bz"
		};
		return columnNames;
	}

	const std::vector<std::string>& Concurrent::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"serverid", "zone1_count", "zone2_count", "zone3_count", "bz"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Concurrent::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Concurrent::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Concurrent::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"serverid"
		};
		return primaryKey;
	}

	const uint8_t& Concurrent::MapKey() const
	{
		return ServerId;
	}
	const std::string& CopySerialItem::TableName()
	{
		static const std::string tableName = "COPY_SERIAL_ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& CopySerialItem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strUserId", "byType", "nPos", "ItemNum", "ItemSerial"
		};
		return columnNames;
	}

	const std::vector<std::string>& CopySerialItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strUserId", "byType", "nPos", "ItemNum", "ItemSerial"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& CopySerialItem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType CopySerialItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& CopySerialItem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& CopyTest::TableName()
	{
		static const std::string tableName = "COPY_TEST";
		return tableName;
	}

	const std::unordered_set<std::string>& CopyTest::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"ITEMSERIAL"
		};
		return columnNames;
	}

	const std::vector<std::string>& CopyTest::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"ITEMSERIAL"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& CopyTest::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType CopyTest::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& CopyTest::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
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
	const std::string& CurrentUser::TableName()
	{
		static const std::string tableName = "CURRENTUSER";
		return tableName;
	}

	const std::unordered_set<std::string>& CurrentUser::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nServerNo", "strServerIP", "strAccountID", "strCharID", "strClientIP"
		};
		return columnNames;
	}

	const std::vector<std::string>& CurrentUser::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nServerNo", "strServerIP", "strAccountID", "strCharID", "strClientIP"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& CurrentUser::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType CurrentUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& CurrentUser::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strAccountID"
		};
		return primaryKey;
	}

	const std::string& CurrentUser::MapKey() const
	{
		return AccountId;
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
			"ZoneNum", "EventNum", "Type", "Cond1", "Cond2", "Cond3", "Cond4", "Cond5", "Exec1", "Exec2", "Exec3", "Exec4", "Exec5"
		};
		return columnNames;
	}

	const std::vector<std::string>& Event::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"ZoneNum", "EventNum", "Type", "Cond1", "Cond2", "Cond3", "Cond4", "Cond5", "Exec1", "Exec2", "Exec3", "Exec4", "Exec5"
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
	const std::string& FriendList::TableName()
	{
		static const std::string tableName = "FRIEND_LIST";
		return tableName;
	}

	const std::unordered_set<std::string>& FriendList::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strUserID", "strFriend1", "strFriend2", "strFriend3", "strFriend4", "strFriend5", "strFriend6", "strFriend7", "strFriend8", "strFriend9", "strFriend10", "strFriend11", "strFriend12", "strFriend13", "strFriend14", "strFriend15", "strFriend16", "strFriend17", "strFriend18", "strFriend19", "strFriend20", "strFriend21", "strFriend22", "strFriend23", "strFriend24"
		};
		return columnNames;
	}

	const std::vector<std::string>& FriendList::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strUserID", "strFriend1", "strFriend2", "strFriend3", "strFriend4", "strFriend5", "strFriend6", "strFriend7", "strFriend8", "strFriend9", "strFriend10", "strFriend11", "strFriend12", "strFriend13", "strFriend14", "strFriend15", "strFriend16", "strFriend17", "strFriend18", "strFriend19", "strFriend20", "strFriend21", "strFriend22", "strFriend23", "strFriend24"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& FriendList::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType FriendList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& FriendList::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strUserID"
		};
		return primaryKey;
	}

	const std::string& FriendList::MapKey() const
	{
		return UserId;
	}
	const std::string& HacktoolUserLog::TableName()
	{
		static const std::string tableName = "HACKTOOL_USERLOG";
		return tableName;
	}

	const std::unordered_set<std::string>& HacktoolUserLog::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "strCharID", "strHackToolName", "tWriteTime"
		};
		return columnNames;
	}

	const std::vector<std::string>& HacktoolUserLog::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "strCharID", "strHackToolName", "tWriteTime"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& HacktoolUserLog::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"strHackToolName"
		};
		return blobColumns;
	}

	modelUtil::DbType HacktoolUserLog::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& HacktoolUserLog::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& HeroUser::TableName()
	{
		static const std::string tableName = "HERO_USER";
		return tableName;
	}

	const std::unordered_set<std::string>& HeroUser::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"shIndex", "strUserID", "strNation", "strClass", "strAchievement"
		};
		return columnNames;
	}

	const std::vector<std::string>& HeroUser::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"shIndex", "strUserID", "strNation", "strClass", "strAchievement"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& HeroUser::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType HeroUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& HeroUser::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
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
			"Num", "strName", "Kind", "Slot", "Race", "Class", "Damage", "Delay", "Range", "Weight", "Duration", "BuyPrice", "SellPrice", "Ac", "Countable", "Effect1", "Effect2", "ReqLevel", "ReqLevelMax", "ReqRank", "ReqTitle", "ReqStr", "ReqSta", "ReqDex", "ReqIntel", "ReqCha", "SellingGroup", "ItemType", "Hitrate", "Evasionrate", "DaggerAc", "SwordAc", "MaceAc", "AxeAc", "SpearAc", "BowAc", "FireDamage", "IceDamage", "LightningDamage", "PoisonDamage", "HPDrain", "MPDamage", "MPDrain", "MirrorDamage", "Droprate", "StrB", "StaB", "DexB", "IntelB", "ChaB", "MaxHpB", "MaxMpB", "FireR", "ColdR", "LightningR", "MagicR", "PoisonR", "CurseR"
		};
		return columnNames;
	}

	const std::vector<std::string>& Item::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"Num", "strName", "Kind", "Slot", "Race", "Class", "Damage", "Delay", "Range", "Weight", "Duration", "BuyPrice", "SellPrice", "Ac", "Countable", "Effect1", "Effect2", "ReqLevel", "ReqLevelMax", "ReqRank", "ReqTitle", "ReqStr", "ReqSta", "ReqDex", "ReqIntel", "ReqCha", "SellingGroup", "ItemType", "Hitrate", "Evasionrate", "DaggerAc", "SwordAc", "MaceAc", "AxeAc", "SpearAc", "BowAc", "FireDamage", "IceDamage", "LightningDamage", "PoisonDamage", "HPDrain", "MPDamage", "MPDrain", "MirrorDamage", "Droprate", "StrB", "StaB", "DexB", "IntelB", "ChaB", "MaxHpB", "MaxMpB", "FireR", "ColdR", "LightningR", "MagicR", "PoisonR", "CurseR"
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
			"nIndex", "nNpcNum", "strNpcName", "strNote", "bRandomFlag", "nOriginItemNum1", "nOriginItemCount1", "nOriginItemNum2", "nOriginItemCount2", "nOriginItemNum3", "nOriginItemCount3", "nOriginItemNum4", "nOriginItemCount4", "nOriginItemNum5", "nOriginItemCount5", "nExchangeItemNum1", "nExchangeItemCount1", "nExchangeItemNum2", "nExchangeItemCount2", "nExchangeItemNum3", "nExchangeItemCount3", "nExchangeItemNum4", "nExchangeItemCount4", "nExchangeItemNum5", "nExchangeItemCount5"
		};
		return columnNames;
	}

	const std::vector<std::string>& ItemExchange::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "nNpcNum", "strNpcName", "strNote", "bRandomFlag", "nOriginItemNum1", "nOriginItemCount1", "nOriginItemNum2", "nOriginItemCount2", "nOriginItemNum3", "nOriginItemCount3", "nOriginItemNum4", "nOriginItemCount4", "nOriginItemNum5", "nOriginItemCount5", "nExchangeItemNum1", "nExchangeItemCount1", "nExchangeItemNum2", "nExchangeItemCount2", "nExchangeItemNum3", "nExchangeItemCount3", "nExchangeItemNum4", "nExchangeItemCount4", "nExchangeItemNum5", "nExchangeItemCount5"
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
	const std::string& ItemGroup::TableName()
	{
		static const std::string tableName = "ITEM_GROUP";
		return tableName;
	}

	const std::unordered_set<std::string>& ItemGroup::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"group", "name", "item1", "item2", "item3", "item4", "item5", "item6", "item7", "item8", "item9", "item10", "item11", "item12", "item13", "item14", "item15", "item16", "item17", "item18", "item19", "item20", "item21", "item22", "item23", "item24", "item25", "item26", "item27", "item28", "item29", "item30"
		};
		return columnNames;
	}

	const std::vector<std::string>& ItemGroup::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"group", "name", "item1", "item2", "item3", "item4", "item5", "item6", "item7", "item8", "item9", "item10", "item11", "item12", "item13", "item14", "item15", "item16", "item17", "item18", "item19", "item20", "item21", "item22", "item23", "item24", "item25", "item26", "item27", "item28", "item29", "item30"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& ItemGroup::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType ItemGroup::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& ItemGroup::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
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
			"nIndex", "nNPCNum", "strName", "strNote", "nOriginType", "nOriginItem", "nReqItem1", "nReqItem2", "nReqItem3", "nReqItem4", "nReqItem5", "nReqItem6", "nReqItem7", "nReqItem8", "nReqNoah", "bRateType", "nGenRate", "nGiveItem"
		};
		return columnNames;
	}

	const std::vector<std::string>& ItemUpgrade::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "nNPCNum", "strName", "strNote", "nOriginType", "nOriginItem", "nReqItem1", "nReqItem2", "nReqItem3", "nReqItem4", "nReqItem5", "nReqItem6", "nReqItem7", "nReqItem8", "nReqNoah", "bRateType", "nGenRate", "nGiveItem"
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
	const std::string& ItemUpProbability::TableName()
	{
		static const std::string tableName = "ITEMUP_PROBABILITY";
		return tableName;
	}

	const std::unordered_set<std::string>& ItemUpProbability::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"bType", "nMaxSuccess", "nMaxFail", "nCurSuccess", "nCurFail"
		};
		return columnNames;
	}

	const std::vector<std::string>& ItemUpProbability::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"bType", "nMaxSuccess", "nMaxFail", "nCurSuccess", "nCurFail"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& ItemUpProbability::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType ItemUpProbability::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& ItemUpProbability::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"bType"
		};
		return primaryKey;
	}

	const uint8_t& ItemUpProbability::MapKey() const
	{
		return Type;
	}
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
	const std::string& NpcItem::TableName()
	{
		static const std::string tableName = "K_NPC_ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& NpcItem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
		};
		return columnNames;
	}

	const std::vector<std::string>& NpcItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& NpcItem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType NpcItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& NpcItem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sIndex"
		};
		return primaryKey;
	}

	const int16_t& NpcItem::MapKey() const
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
	const std::string& KingBallotBox::TableName()
	{
		static const std::string tableName = "KING_BALLOT_BOX";
		return tableName;
	}

	const std::unordered_set<std::string>& KingBallotBox::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "strCharID", "byNation", "strCandidacyID"
		};
		return columnNames;
	}

	const std::vector<std::string>& KingBallotBox::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "strCharID", "byNation", "strCandidacyID"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KingBallotBox::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType KingBallotBox::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KingBallotBox::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& KingCandidacyNoticeBoard::TableName()
	{
		static const std::string tableName = "KING_CANDIDACY_NOTICE_BOARD";
		return tableName;
	}

	const std::unordered_set<std::string>& KingCandidacyNoticeBoard::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strUserID", "byNation", "sNoticeLen", "strNotice"
		};
		return columnNames;
	}

	const std::vector<std::string>& KingCandidacyNoticeBoard::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strUserID", "byNation", "sNoticeLen", "strNotice"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KingCandidacyNoticeBoard::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"strNotice"
		};
		return blobColumns;
	}

	modelUtil::DbType KingCandidacyNoticeBoard::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KingCandidacyNoticeBoard::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strUserID"
		};
		return primaryKey;
	}

	const std::string& KingCandidacyNoticeBoard::MapKey() const
	{
		return CandidateId;
	}
	const std::string& KingElectionList::TableName()
	{
		static const std::string tableName = "KING_ELECTION_LIST";
		return tableName;
	}

	const std::unordered_set<std::string>& KingElectionList::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"byType", "byNation", "nKnights", "strName", "nMoney"
		};
		return columnNames;
	}

	const std::vector<std::string>& KingElectionList::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"byType", "byNation", "nKnights", "strName", "nMoney"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KingElectionList::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType KingElectionList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KingElectionList::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& KingSystem::TableName()
	{
		static const std::string tableName = "KING_SYSTEM";
		return tableName;
	}

	const std::unordered_set<std::string>& KingSystem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"byNation", "byType", "sYear", "byMonth", "byDay", "byHour", "byMinute", "byImType", "sImYear", "byImMonth", "byImDay", "byImHour", "byImMinute", "byNoahEvent", "byNoahEvent_Day", "byNoahEvent_Hour", "byNoahEvent_Minute", "sNoahEvent_Duration", "byExpEvent", "byExpEvent_Day", "byExpEvent_Hour", "byExpEvent_Minute", "sExpEvent_Duration", "nTribute", "byTerritoryTariff", "nTerritoryTax", "nNationalTreasury", "strKingName", "strImRequestID"
		};
		return columnNames;
	}

	const std::vector<std::string>& KingSystem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"byNation", "byType", "sYear", "byMonth", "byDay", "byHour", "byMinute", "byImType", "sImYear", "byImMonth", "byImDay", "byImHour", "byImMinute", "byNoahEvent", "byNoahEvent_Day", "byNoahEvent_Hour", "byNoahEvent_Minute", "sNoahEvent_Duration", "byExpEvent", "byExpEvent_Day", "byExpEvent_Hour", "byExpEvent_Minute", "sExpEvent_Duration", "nTribute", "byTerritoryTariff", "nTerritoryTax", "nNationalTreasury", "strKingName", "strImRequestID"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& KingSystem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType KingSystem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& KingSystem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
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
			"IDNum", "Flag", "Nation", "Ranking", "IDName", "Members", "Chief", "ViceChief_1", "ViceChief_2", "ViceChief_3", "strEnemyName", "byOldWarResult", "nWarEnemyID", "nVictory", "nLose", "Gold", "Domination", "Points", "CreateTime", "sMarkVersion", "sMarkLen", "Mark", "Stash", "bySiegeFlag", "sAllianceKnights", "sCape"
		};
		return columnNames;
	}

	const std::vector<std::string>& Knights::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"IDNum", "Flag", "Nation", "Ranking", "IDName", "Members", "Chief", "ViceChief_1", "ViceChief_2", "ViceChief_3", "strEnemyName", "byOldWarResult", "nWarEnemyID", "nVictory", "nLose", "Gold", "Domination", "Points", "CreateTime", "sMarkVersion", "sMarkLen", "Mark", "Stash", "bySiegeFlag", "sAllianceKnights", "sCape"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Knights::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"Mark", "Stash"
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
			"sCapeIndex", "strName", "nBuyPrice", "nDuration", "byGrade"
		};
		return columnNames;
	}

	const std::vector<std::string>& KnightsCape::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sCapeIndex", "strName", "nBuyPrice", "nDuration", "byGrade"
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
			"MagicNum", "EnName", "KrName", "Description", "BeforeAction", "TargetAction", "SelfEffect", "FlyingEffect", "TargetEffect", "Moral", "SkillLevel", "Skill", "Msp", "HP", "ItemGroup", "UseItem", "CastTime", "ReCastTime", "SuccessRate", "Type1", "Type2", "Range", "Etc", "Event"
		};
		return columnNames;
	}

	const std::vector<std::string>& Magic::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"MagicNum", "EnName", "KrName", "Description", "BeforeAction", "TargetAction", "SelfEffect", "FlyingEffect", "TargetEffect", "Moral", "SkillLevel", "Skill", "Msp", "HP", "ItemGroup", "UseItem", "CastTime", "ReCastTime", "SuccessRate", "Type1", "Type2", "Range", "Etc", "Event"
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
			"iNum", "Name", "Description", "Type", "HitRate", "Hit", "AddDamage", "Delay", "ComboType", "ComboCount", "ComboDamage", "Range"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType1::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Name", "Description", "Type", "HitRate", "Hit", "AddDamage", "Delay", "ComboType", "ComboCount", "ComboDamage", "Range"
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
			"iNum", "Name", "Description", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType2::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Name", "Description", "HitType", "HitRate", "AddDamage", "AddRange", "NeedArrow", "AddDamagePlus"
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
			"iNum", "Name", "Description", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType3::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Name", "Description", "Radius", "Angle", "DirectType", "FirstDamage", "EndDamage", "TimeDamage", "Duration", "Attribute"
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
			"iNum", "Name", "Description", "BuffType", "Radius", "Duration", "AttackSpeed", "Speed", "AC", "ACPct", "Attack", "MagicAttack", "MaxHP", "MaxHpPct", "MaxMP", "MaxMpPct", "HitRate", "AvoidRate", "Str", "Sta", "Dex", "Intel", "Cha", "FireR", "ColdR", "LightningR", "MagicR", "DiseaseR", "PoisonR", "ExpPct"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType4::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Name", "Description", "BuffType", "Radius", "Duration", "AttackSpeed", "Speed", "AC", "ACPct", "Attack", "MagicAttack", "MaxHP", "MaxHpPct", "MaxMP", "MaxMpPct", "HitRate", "AvoidRate", "Str", "Sta", "Dex", "Intel", "Cha", "FireR", "ColdR", "LightningR", "MagicR", "DiseaseR", "PoisonR", "ExpPct"
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
			"iNum", "Name", "Description", "Type", "ExpRecover", "NeedStone"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType5::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Name", "Description", "Type", "ExpRecover", "NeedStone"
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
			"iNum", "Name", "Description", "Size", "TransformID", "Duration", "MaxHp", "MaxMp", "Speed", "AttackSpeed", "TotalHit", "TotalAc", "TotalHitRate", "TotalEvasionRate", "TotalFireR", "TotalColdR", "TotalLightningR", "TotalMagicR", "TotalDiseaseR", "TotalPoisonR", "Class", "UserSkillUse", "NeedItem", "SkillSuccessRate", "MonsterFriendly"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType6::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Name", "Description", "Size", "TransformID", "Duration", "MaxHp", "MaxMp", "Speed", "AttackSpeed", "TotalHit", "TotalAc", "TotalHitRate", "TotalEvasionRate", "TotalFireR", "TotalColdR", "TotalLightningR", "TotalMagicR", "TotalDiseaseR", "TotalPoisonR", "Class", "UserSkillUse", "NeedItem", "SkillSuccessRate", "MonsterFriendly"
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
			"nIndex", "strName", "strNote", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType7::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nIndex", "strName", "strNote", "byValidGroup", "byNatoinChange", "shMonsterNum", "byTargetChange", "byStateChange", "byRadius", "shHitrate", "shDuration", "shDamage", "byVisoin", "nNeedItem"
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
			"iNum", "Name", "Description", "Target", "Radius", "WarpType", "ExpRecover"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType8::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Name", "Description", "Target", "Radius", "WarpType", "ExpRecover"
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
			"iNum", "Name", "Description", "ValidGroup", "NationChange", "MonsterNum", "TargetChange", "StateChange", "Radius", "Hitrate", "Duration", "AddDamage", "Vision", "NeedItem"
		};
		return columnNames;
	}

	const std::vector<std::string>& MagicType9::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"iNum", "Name", "Description", "ValidGroup", "NationChange", "MonsterNum", "TargetChange", "StateChange", "Radius", "Hitrate", "Duration", "AddDamage", "Vision", "NeedItem"
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
			"sIndex", "strItemInfo", "iItemCode", "byItemLevel"
		};
		return columnNames;
	}

	const std::vector<std::string>& MakeItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "strItemInfo", "iItemCode", "byItemLevel"
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
	const std::string& MonsterItemTest::TableName()
	{
		static const std::string tableName = "MONSTER_ITEM_TEST";
		return tableName;
	}

	const std::unordered_set<std::string>& MonsterItemTest::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
		};
		return columnNames;
	}

	const std::vector<std::string>& MonsterItemTest::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "iItem01", "sPersent01", "iItem02", "sPersent02", "iItem03", "sPersent03", "iItem04", "sPersent04", "iItem05", "sPersent05"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& MonsterItemTest::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType MonsterItemTest::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& MonsterItemTest::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
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
	const std::string& ProgramListLog::TableName()
	{
		static const std::string tableName = "PROGRAMLIST_LOG";
		return tableName;
	}

	const std::unordered_set<std::string>& ProgramListLog::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"id", "strAccountID", "strCharID", "strHackToolName", "tWriteTime"
		};
		return columnNames;
	}

	const std::vector<std::string>& ProgramListLog::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"id", "strAccountID", "strCharID", "strHackToolName", "tWriteTime"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& ProgramListLog::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"strHackToolName"
		};
		return blobColumns;
	}

	modelUtil::DbType ProgramListLog::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& ProgramListLog::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"id"
		};
		return primaryKey;
	}

	const int32_t& ProgramListLog::MapKey() const
	{
		return Id;
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
			"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID", "timeLender", "timeRegister"
		};
		return columnNames;
	}

	const std::vector<std::string>& RentalItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID", "timeLender", "timeRegister"
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
	const std::string& RentalItemList::TableName()
	{
		static const std::string tableName = "RENTAL_ITEM_LIST";
		return tableName;
	}

	const std::unordered_set<std::string>& RentalItemList::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID", "timeLender", "timeRegister"
		};
		return columnNames;
	}

	const std::vector<std::string>& RentalItemList::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "byRegType", "byItemType", "byClass", "sRentalTime", "nRentalMoney", "strLenderCharID", "strLenderAcID", "strBorrowerCharID", "strBorrowerAcID", "timeLender", "timeRegister"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& RentalItemList::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType RentalItemList::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& RentalItemList::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
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
			"nResourceID", "strName", "strResource"
		};
		return columnNames;
	}

	const std::vector<std::string>& ServerResource::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nResourceID", "strName", "strResource"
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
	const std::string& TbUser::TableName()
	{
		static const std::string tableName = "TB_USER";
		return tableName;
	}

	const std::unordered_set<std::string>& TbUser::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "strPasswd", "strSocNo", "strEmail", "strAuthority", "PremiumExpire"
		};
		return columnNames;
	}

	const std::vector<std::string>& TbUser::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "strPasswd", "strSocNo", "strEmail", "strAuthority", "PremiumExpire"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& TbUser::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType TbUser::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& TbUser::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strAccountID"
		};
		return primaryKey;
	}

	const std::string& TbUser::MapKey() const
	{
		return AccountId;
	}
	const std::string& UserEditor::TableName()
	{
		static const std::string tableName = "USER_EDITOR";
		return tableName;
	}

	const std::unordered_set<std::string>& UserEditor::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strCharID", "strAccountID", "strOpID", "strOpIP", "strOldUserValue", "strNewUserValue", "strOldUserSkill", "strNewUserSkill", "strOldUserItem", "strNewUserItem", "strOldWHValue", "strNewWHValue", "strOldWHItem", "strNewWHItem", "EditorTime"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserEditor::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strCharID", "strAccountID", "strOpID", "strOpIP", "strOldUserValue", "strNewUserValue", "strOldUserSkill", "strNewUserSkill", "strOldUserItem", "strNewUserItem", "strOldWHValue", "strNewWHValue", "strOldWHItem", "strNewWHItem", "EditorTime"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserEditor::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"strOldUserValue", "strNewUserValue", "strOldUserItem", "strNewUserItem", "strOldWHItem", "strNewWHItem"
		};
		return blobColumns;
	}

	modelUtil::DbType UserEditor::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& UserEditor::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& UserEditorItem::TableName()
	{
		static const std::string tableName = "USER_EDITOR_ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& UserEditorItem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strCharID", "strAccountID", "strOpID", "strOpIP", "sDBIndex", "sPos", "byType", "nItemID1", "nItemID2", "UpdateTime"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserEditorItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strCharID", "strAccountID", "strOpID", "strOpIP", "sDBIndex", "sPos", "byType", "nItemID1", "nItemID2", "UpdateTime"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserEditorItem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType UserEditorItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& UserEditorItem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
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
			"shIndex", "strName", "strElmoUserID", "strElmoKnightsName", "nElmoLoyalty", "strKarusUserID", "strKarusKnightsName", "nKarusLoyalty", "nMoney", "isClaimedElmo", "isClaimedKarus"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserKnightsRank::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"shIndex", "strName", "strElmoUserID", "strElmoKnightsName", "nElmoLoyalty", "strKarusUserID", "strKarusKnightsName", "nKarusLoyalty", "nMoney", "isClaimedElmo", "isClaimedKarus"
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
			"nRank", "strPosition", "nElmoUP", "strElmoUserID", "nElmoLoyaltyMonthly", "nElmoCheck", "nKarusUP", "strKarusUserID", "nKarusLoyaltyMonthly", "nKarusCheck", "nSalary", "UpdateDate", "isClaimedElmo", "isClaimedKarus"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserPersonalRank::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nRank", "strPosition", "nElmoUP", "strElmoUserID", "nElmoLoyaltyMonthly", "nElmoCheck", "nKarusUP", "strKarusUserID", "nKarusLoyaltyMonthly", "nKarusCheck", "nSalary", "UpdateDate", "isClaimedElmo", "isClaimedKarus"
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
	const std::string& UserRentalItem::TableName()
	{
		static const std::string tableName = "USER_RENTAL_ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& UserRentalItem::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strUserID", "strAccountID", "byRentalType", "byRegType", "nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "nRentalMoney", "sRentalTime", "sDuringTime", "timeRental", "timeRegister"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserRentalItem::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strUserID", "strAccountID", "byRentalType", "byRegType", "nRentalIndex", "nItemIndex", "sDurability", "nSerialNumber", "nRentalMoney", "sRentalTime", "sDuringTime", "timeRental", "timeRegister"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserRentalItem::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType UserRentalItem::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& UserRentalItem::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& UserSavedMagic::TableName()
	{
		static const std::string tableName = "USER_SAVED_MAGIC";
		return tableName;
	}

	const std::unordered_set<std::string>& UserSavedMagic::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strCharID", "nSkill1", "nDuring1", "nSkill2", "nDuring2", "nSkill3", "nDuring3", "nSkill4", "nDuring4", "nSkill5", "nDuring5", "nSkill6", "nDuring6", "nSkill7", "nDuring7", "nSkill8", "nDuring8", "nSkill9", "nDuring9", "nSkill10", "nDuring10"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserSavedMagic::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strCharID", "nSkill1", "nDuring1", "nSkill2", "nDuring2", "nSkill3", "nDuring3", "nSkill4", "nDuring4", "nSkill5", "nDuring5", "nSkill6", "nDuring6", "nSkill7", "nDuring7", "nSkill8", "nDuring8", "nSkill9", "nDuring9", "nSkill10", "nDuring10"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserSavedMagic::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType UserSavedMagic::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& UserSavedMagic::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strCharID"
		};
		return primaryKey;
	}

	const std::string& UserSavedMagic::MapKey() const
	{
		return CharId;
	}
	const std::string& UserData::TableName()
	{
		static const std::string tableName = "USERDATA";
		return tableName;
	}

	const std::unordered_set<std::string>& UserData::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strUserId", "Nation", "Race", "Class", "HairColor", "Rank", "Title", "Level", "Exp", "Loyalty", "Face", "City", "Knights", "Fame", "Hp", "Mp", "Sp", "Strong", "Sta", "Dex", "Intel", "Cha", "Authority", "Points", "Gold", "Zone", "Bind", "PX", "PZ", "PY", "dwTime", "strSkill", "strItem", "strSerial", "sQuestCount", "strQuest", "MannerPoint", "LoyaltyMonthly", "CreateTime", "UpdateTime"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserData::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strUserId", "Nation", "Race", "Class", "HairColor", "Rank", "Title", "Level", "Exp", "Loyalty", "Face", "City", "Knights", "Fame", "Hp", "Mp", "Sp", "Strong", "Sta", "Dex", "Intel", "Cha", "Authority", "Points", "Gold", "Zone", "Bind", "PX", "PZ", "PY", "dwTime", "strSkill", "strItem", "strSerial", "sQuestCount", "strQuest", "MannerPoint", "LoyaltyMonthly", "CreateTime", "UpdateTime"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserData::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"strItem", "strSerial", "strQuest"
		};
		return blobColumns;
	}

	modelUtil::DbType UserData::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& UserData::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strUserId"
		};
		return primaryKey;
	}

	const std::string& UserData::MapKey() const
	{
		return UserId;
	}
	const std::string& UserDataSkillShortcut::TableName()
	{
		static const std::string tableName = "USERDATA_SKILLSHORTCUT";
		return tableName;
	}

	const std::unordered_set<std::string>& UserDataSkillShortcut::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strCharID", "nCount", "strSkillData"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserDataSkillShortcut::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strCharID", "nCount", "strSkillData"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserDataSkillShortcut::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"strSkillData"
		};
		return blobColumns;
	}

	modelUtil::DbType UserDataSkillShortcut::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& UserDataSkillShortcut::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strCharID"
		};
		return primaryKey;
	}

	const std::string& UserDataSkillShortcut::MapKey() const
	{
		return CharId;
	}
	const std::string& Version::TableName()
	{
		static const std::string tableName = "VERSION";
		return tableName;
	}

	const std::unordered_set<std::string>& Version::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"sVersion", "strFileName", "strCompressName", "sHistoryVersion"
		};
		return columnNames;
	}

	const std::vector<std::string>& Version::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sVersion", "strFileName", "strCompressName", "sHistoryVersion"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Version::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType Version::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Version::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"sVersion"
		};
		return primaryKey;
	}

	const int16_t& Version::MapKey() const
	{
		return Number;
	}
	const std::string& Warehouse::TableName()
	{
		static const std::string tableName = "WAREHOUSE";
		return tableName;
	}

	const std::unordered_set<std::string>& Warehouse::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "nMoney", "dwTime", "WarehouseData", "strSerial"
		};
		return columnNames;
	}

	const std::vector<std::string>& Warehouse::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "nMoney", "dwTime", "WarehouseData", "strSerial"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Warehouse::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			"WarehouseData", "strSerial"
		};
		return blobColumns;
	}

	modelUtil::DbType Warehouse::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& Warehouse::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			"strAccountID"
		};
		return primaryKey;
	}

	const std::string& Warehouse::MapKey() const
	{
		return AccountId;
	}
	const std::string& WebItemMall::TableName()
	{
		static const std::string tableName = "WEB_ITEMMALL";
		return tableName;
	}

	const std::unordered_set<std::string>& WebItemMall::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "strCharID", "ServerNo", "ItemID", "ItemCount", "BuyTime", "img_file_name", "strItemName", "price", "pay_type"
		};
		return columnNames;
	}

	const std::vector<std::string>& WebItemMall::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "strCharID", "ServerNo", "ItemID", "ItemCount", "BuyTime", "img_file_name", "strItemName", "price", "pay_type"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& WebItemMall::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType WebItemMall::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& WebItemMall::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
	}
	const std::string& WebItemMallLog::TableName()
	{
		static const std::string tableName = "WEB_ITEMMALL_LOG";
		return tableName;
	}

	const std::unordered_set<std::string>& WebItemMallLog::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "strCharID", "ServerNo", "ItemID", "ItemCount", "BuyTime", "img_file_name", "strItemName", "price", "pay_type"
		};
		return columnNames;
	}

	const std::vector<std::string>& WebItemMallLog::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "strCharID", "ServerNo", "ItemID", "ItemCount", "BuyTime", "img_file_name", "strItemName", "price", "pay_type"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& WebItemMallLog::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
		};
		return blobColumns;
	}

	modelUtil::DbType WebItemMallLog::DbType()
	{
		return modelUtil::DbType::GAME;
	}

	const std::vector<std::string>& WebItemMallLog::PrimaryKey()
	{
		static const std::vector<std::string> primaryKey =
		{
			
		};
		return primaryKey;
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
			"ServerNo", "ZoneNo", "strZoneName", "InitX", "InitZ", "InitY", "Type", "RoomEvent", "bz"
		};
		return columnNames;
	}

	const std::vector<std::string>& ZoneInfo::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"ServerNo", "ZoneNo", "strZoneName", "InitX", "InitZ", "InitY", "Type", "RoomEvent", "bz"
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