#ifndef VERSIONMANAGER_MODEL_VERSIONMANAGERMODEL_H
#define VERSIONMANAGER_MODEL_VERSIONMANAGERMODEL_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <cstdint>
#include <string>
#include <unordered_set>
#include <vector>

namespace versionmanager_binder
{
	class Concurrent;
	class CurrentUser;
	class TbUser;
	class Version;
}

namespace versionmanager_model
{
	/// \brief [CONCURRENT] Keeps track of concurrent user counts
	/// \class Concurrent
	/// \xrefitem db_GAME_VersionManager "GAME Database - VersionManager Library" "GAME Database - VersionManager Library" CONCURRENT Keeps track of concurrent user counts
	class Concurrent 
	{
	/// \publicsection
	public:
		using BinderType = versionmanager_binder::Concurrent;

		/// \brief Column [serverid]: Server Identifier
		///
		/// \property ServerId
		uint8_t ServerId = {};

		/// \brief Column [zone1_count]: Zone 1 Count
		///
		/// \property Zone1Count
		int16_t Zone1Count = {};

		/// \brief Column [zone2_count]: Zone 2 Count
		///
		/// \property Zone2Count
		int16_t Zone2Count = {};

		/// \brief Column [zone3_count]: Zone 3 Count
		///
		/// \property Zone3Count
		int16_t Zone3Count = {};

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

	/// \brief [CURRENTUSER] Keeps track of users currently connected to the server
	/// \class CurrentUser
	/// \xrefitem db_GAME_VersionManager "GAME Database - VersionManager Library" "GAME Database - VersionManager Library" CURRENTUSER Keeps track of users currently connected to the server
	class CurrentUser 
	{
	/// \publicsection
	public:
		using BinderType = versionmanager_binder::CurrentUser;

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

	/// \brief [TB_USER] User Account Information
	/// \class TbUser
	/// \xrefitem db_GAME_VersionManager "GAME Database - VersionManager Library" "GAME Database - VersionManager Library" TB_USER User Account Information
	class TbUser 
	{
	/// \publicsection
	public:
		using BinderType = versionmanager_binder::TbUser;

		/// \brief Column [strAccountID]: Account identifier
		///
		/// \property AccountId
		std::string AccountId;

		/// \brief Column [strPasswd]: Password
		///
		/// \property Password
		std::string Password;

		/// \brief Column [strAuthority]: Authority level
		///
		/// \property Authority
		uint8_t Authority = {};

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

	/// \brief [VERSION] Version data and patch management
	/// \class Version
	/// \xrefitem db_GAME_VersionManager "GAME Database - VersionManager Library" "GAME Database - VersionManager Library" VERSION Version data and patch management
	class Version 
	{
	/// \publicsection
	public:
		using BinderType = versionmanager_binder::Version;

		/// \brief Column [sVersion]: Game version number
		///
		/// \property Number
		int16_t Number = {};

		/// \brief Column [strFileName]: Patch file name
		///
		/// \property FileName
		std::string FileName;

		/// \brief Column [strCompressName]: User-friendly patch name
		///
		/// \property CompressName
		std::string CompressName;

		/// \brief Column [sHistoryVersion]: Previous patch version
		///
		/// \property HistoryVersion
		int16_t HistoryVersion = {};

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

#endif // VERSIONMANAGER_MODEL_VERSIONMANAGERMODEL_H