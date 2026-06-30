#ifndef AUJARD_BINDER_AUJARDBINDER_H
#define AUJARD_BINDER_AUJARDBINDER_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <string>
#include <unordered_map>

namespace nanodbc
{
	class result;
}

namespace aujard_model
{
	class Battle;
	class CurrentUser;
	class Item;
	class Knights;
	class UserData;
	class Warehouse;
}

namespace aujard_binder
{
	/// \brief generated nanodbc column binder for aujard_model::Battle
	class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(aujard_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(aujard_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UserName
		static void BindUserName(aujard_model::Battle& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aujard_model::CurrentUser
	class CurrentUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ServerId
		static void BindServerId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ServerIP
		static void BindServerIP(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId
		static void BindCharId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ClientIP
		static void BindClientIP(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aujard_model::Item
	class Item
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(aujard_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Countable
		static void BindCountable(aujard_model::Item& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aujard_model::Knights
	class Knights
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Knights& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(aujard_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(aujard_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Ranking
		static void BindRanking(aujard_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(aujard_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Members
		static void BindMembers(aujard_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Points
		static void BindPoints(aujard_model::Knights& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aujard_model::UserData
	class UserData
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::UserData& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to UserId
		static void BindUserId(aujard_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Exp
		static void BindExp(aujard_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(aujard_model::UserData& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for aujard_model::Warehouse
	class Warehouse
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemData
		static void BindItemData(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Serial
		static void BindSerial(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex);

	};
}

#endif // AUJARD_BINDER_AUJARDBINDER_H