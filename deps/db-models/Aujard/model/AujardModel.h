#ifndef AUJARD_MODEL_AUJARDMODEL_H
#define AUJARD_MODEL_AUJARDMODEL_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>
#include <vector>

namespace aujard_binder
{
	class Battle;
	class CurrentUser;
	class Item;
	class Knights;
	class UserData;
	class Warehouse;
}

namespace aujard_model
{
	/// \brief [BATTLE] Battle data for the game server
	/// \class Battle
	/// \xrefitem db_GAME_Aujard "GAME Database - Aujard Library" "GAME Database - Aujard Library" BATTLE Battle data for the game server
	class Battle 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Battle;

		/// \brief Column [sIndex]: Server Index
		///
		/// \property Index
		int16_t Index = {};

		/// \brief Column [byNation]: Nation Identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [strUserName]: User Name
		///
		/// \property UserName
		std::optional<std::string> UserName;

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

	/// \brief [CURRENTUSER] Keeps track of users currently connected to the server
	/// \class CurrentUser
	/// \xrefitem db_GAME_Aujard "GAME Database - Aujard Library" "GAME Database - Aujard Library" CURRENTUSER Keeps track of users currently connected to the server
	class CurrentUser 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::CurrentUser;

		/// \brief Column [nServerNo]: Server Index
		///
		/// \property ServerId
		int32_t ServerId = {};

		/// \brief Column [strServerIP]: Server IP Address
		///
		/// \property ServerIP
		std::string ServerIP;

		/// \brief Column [strAccountID]: User Account Identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strCharID]: User Character Name
		///
		/// \property CharId
		std::string CharId;

		/// \brief Column [strClientIP]: User IP Address
		///
		/// \property ClientIP
		std::string ClientIP;

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
		const std::string& MapKey() const;

	};

	/// \brief [ITEM] Item information
	/// \class Item
	/// \xrefitem db_GAME_Aujard "GAME Database - Aujard Library" "GAME Database - Aujard Library" ITEM Item information
	class Item 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Item;

		/// \brief Column [Num]: Item number
		///
		/// \property ID
		int32_t ID = {};

		/// \brief Column [Countable]: Price at which item can be sold to a merchant
		///
		/// \see EnumCountable
		/// \property Countable
		uint8_t Countable = {};

		/// \enum EnumCountable
		/// \brief Known valid values for Countable
		enum class EnumCountable
		{
			NonStackable = 0,
			Stackable = 1,
			Coins = 2
		};

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

	/// \brief [KNIGHTS] Knights are the clan/guild system of the game
	/// \class Knights
	/// \xrefitem db_GAME_Aujard "GAME Database - Aujard Library" "GAME Database - Aujard Library" KNIGHTS Knights are the clan/guild system of the game
	class Knights 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Knights;

		/// \brief Column [IDNum]: Identification number
		///
		/// \property ID
		int16_t ID = {};

		/// \brief Column [Nation]: Nation identifier
		///
		/// \property Nation
		uint8_t Nation = {};

		/// \brief Column [Ranking]: Ranking by sum of members National Points
		///
		/// \property Ranking
		uint8_t Ranking = {};

		/// \brief Column [IDName]: Name of the Knights clan
		///
		/// \property Name
		std::string Name;

		/// \brief Column [Members]: Member count
		///
		/// \property Members
		int16_t Members = {};

		/// \brief Column [Points]: National points
		///
		/// \property Points
		int32_t Points = {};

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

	/// \brief [USERDATA] User data contains saved character information
	/// \class UserData
	/// \xrefitem db_GAME_Aujard "GAME Database - Aujard Library" "GAME Database - Aujard Library" USERDATA User data contains saved character information
	class UserData 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::UserData;

		/// \brief Column [strUserId]: User identifier
		///
		/// \property UserId
		std::string UserId;

		/// \brief Column [Exp]: Experience
		///
		/// \property Exp
		int32_t Exp = {};

		/// \brief Column [dwTime]: DwTime TODO
		///
		/// \property DwTime
		int32_t DwTime = {};

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
		const std::string& MapKey() const;

	};

	/// \brief [WAREHOUSE] The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	/// \class Warehouse
	/// \xrefitem db_GAME_Aujard "GAME Database - Aujard Library" "GAME Database - Aujard Library" WAREHOUSE The warehouse system is referred to as the Inn in-game.  It is account-level storage for a user
	class Warehouse 
	{
	/// \publicsection
	public:
		using BinderType = aujard_binder::Warehouse;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [nMoney]: Money stored in the warehouse
		///
		/// \property Money
		int32_t Money = {};

		/// \brief Column [dwTime]: DwTime TODO
		///
		/// \property DwTime
		int32_t DwTime = {};

		/// \brief Column [WarehouseData]: Data on items stored in the warehouse
		///
		/// \property ItemData
		std::optional<std::vector<uint8_t>> ItemData;

		/// \brief Column [strSerial]: Serial TODO
		///
		/// \property Serial
		std::optional<std::vector<uint8_t>> Serial;

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
		const std::string& MapKey() const;

	};
}

#endif // AUJARD_MODEL_AUJARDMODEL_H