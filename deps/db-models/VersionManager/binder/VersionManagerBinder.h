#ifndef VERSIONMANAGER_BINDER_VERSIONMANAGERBINDER_H
#define VERSIONMANAGER_BINDER_VERSIONMANAGERBINDER_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <string>
#include <unordered_map>

namespace nanodbc
{
	class result;
}

namespace versionmanager_model
{
	class Concurrent;
	class CurrentUser;
	class TbUser;
	class Version;
}

namespace versionmanager_binder
{
	/// \brief generated nanodbc column binder for versionmanager_model::Concurrent
	class Concurrent
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ServerId
		static void BindServerId(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Zone1Count
		static void BindZone1Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Zone2Count
		static void BindZone2Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Zone3Count
		static void BindZone3Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for versionmanager_model::CurrentUser
	class CurrentUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ServerId
		static void BindServerId(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ServerIP
		static void BindServerIP(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for versionmanager_model::TbUser
	class TbUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Password
		static void BindPassword(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Authority
		static void BindAuthority(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for versionmanager_model::Version
	class Version
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Number
		static void BindNumber(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FileName
		static void BindFileName(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CompressName
		static void BindCompressName(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HistoryVersion
		static void BindHistoryVersion(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex);

	};
}

#endif // VERSIONMANAGER_BINDER_VERSIONMANAGERBINDER_H