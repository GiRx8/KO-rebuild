#include "AujardModel.h"

namespace aujard_model
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
			"sIndex", "byNation", "strUserName"
		};
		return columnNames;
	}

	const std::vector<std::string>& Battle::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"sIndex", "byNation", "strUserName"
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
	const std::string& Item::TableName()
	{
		static const std::string tableName = "ITEM";
		return tableName;
	}

	const std::unordered_set<std::string>& Item::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"Num", "Countable"
		};
		return columnNames;
	}

	const std::vector<std::string>& Item::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"Num", "Countable"
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
	const std::string& Knights::TableName()
	{
		static const std::string tableName = "KNIGHTS";
		return tableName;
	}

	const std::unordered_set<std::string>& Knights::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"IDNum", "Nation", "Ranking", "IDName", "Members", "Points"
		};
		return columnNames;
	}

	const std::vector<std::string>& Knights::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"IDNum", "Nation", "Ranking", "IDName", "Members", "Points"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& Knights::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
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
	const std::string& UserData::TableName()
	{
		static const std::string tableName = "USERDATA";
		return tableName;
	}

	const std::unordered_set<std::string>& UserData::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strUserId", "Exp", "dwTime"
		};
		return columnNames;
	}

	const std::vector<std::string>& UserData::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strUserId", "Exp", "dwTime"
		};
		return orderedColumnNames;
	}

	const std::unordered_set<std::string>& UserData::BlobColumns()
	{
		static const std::unordered_set<std::string> blobColumns =
		{
			
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
}