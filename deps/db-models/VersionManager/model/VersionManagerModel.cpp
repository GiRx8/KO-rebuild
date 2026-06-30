#include "VersionManagerModel.h"

namespace versionmanager_model
{
	const std::string& Concurrent::TableName()
	{
		static const std::string tableName = "CONCURRENT";
		return tableName;
	}

	const std::unordered_set<std::string>& Concurrent::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"serverid", "zone1_count", "zone2_count", "zone3_count"
		};
		return columnNames;
	}

	const std::vector<std::string>& Concurrent::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"serverid", "zone1_count", "zone2_count", "zone3_count"
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
	const std::string& CurrentUser::TableName()
	{
		static const std::string tableName = "CURRENTUSER";
		return tableName;
	}

	const std::unordered_set<std::string>& CurrentUser::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"nServerNo", "strServerIP", "strAccountID"
		};
		return columnNames;
	}

	const std::vector<std::string>& CurrentUser::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"nServerNo", "strServerIP", "strAccountID"
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
	const std::string& TbUser::TableName()
	{
		static const std::string tableName = "TB_USER";
		return tableName;
	}

	const std::unordered_set<std::string>& TbUser::ColumnNames()
	{
		static const std::unordered_set<std::string> columnNames =
		{
			"strAccountID", "strPasswd", "strAuthority"
		};
		return columnNames;
	}

	const std::vector<std::string>& TbUser::OrderedColumnNames()
	{
		static const std::vector<std::string> orderedColumnNames =
		{
			"strAccountID", "strPasswd", "strAuthority"
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
}