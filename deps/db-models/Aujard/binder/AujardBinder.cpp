#include "AujardBinder.h"
#include <Aujard/model/AujardModel.h>
#include <BinderUtil/BinderUtil.h>
#include <nanodbc/nanodbc.h>

namespace aujard_binder
{
	const Battle::BindingsMapType& Battle::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &Battle::BindIndex},
			{"byNation", &Battle::BindNation},
			{"strUserName", &Battle::BindUserName}
		};
		return bindingsMap;
	}

	void Battle::BindIndex(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void Battle::BindNation(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void Battle::BindUserName(aujard_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.UserName);
	}

	const CurrentUser::BindingsMapType& CurrentUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nServerNo", &CurrentUser::BindServerId},
			{"strServerIP", &CurrentUser::BindServerIP},
			{"strAccountID", &CurrentUser::BindAccountId},
			{"strCharID", &CurrentUser::BindCharId},
			{"strClientIP", &CurrentUser::BindClientIP}
		};
		return bindingsMap;
	}

	void CurrentUser::BindServerId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ServerId);
	}

	void CurrentUser::BindServerIP(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ServerIP);
	}

	void CurrentUser::BindAccountId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void CurrentUser::BindCharId(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void CurrentUser::BindClientIP(aujard_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ClientIP);
	}

	const Item::BindingsMapType& Item::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"Num", &Item::BindID},
			{"Countable", &Item::BindCountable}
		};
		return bindingsMap;
	}

	void Item::BindID(aujard_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void Item::BindCountable(aujard_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Countable);
	}

	const Knights::BindingsMapType& Knights::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"IDNum", &Knights::BindID},
			{"Nation", &Knights::BindNation},
			{"Ranking", &Knights::BindRanking},
			{"IDName", &Knights::BindName},
			{"Members", &Knights::BindMembers},
			{"Points", &Knights::BindPoints}
		};
		return bindingsMap;
	}

	void Knights::BindID(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ID);
	}

	void Knights::BindNation(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void Knights::BindRanking(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Ranking);
	}

	void Knights::BindName(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void Knights::BindMembers(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Members);
	}

	void Knights::BindPoints(aujard_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	const UserData::BindingsMapType& UserData::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserId", &UserData::BindUserId},
			{"Exp", &UserData::BindExp},
			{"dwTime", &UserData::BindDwTime}
		};
		return bindingsMap;
	}

	void UserData::BindUserId(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	void UserData::BindExp(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	void UserData::BindDwTime(aujard_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DwTime);
	}

	const Warehouse::BindingsMapType& Warehouse::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &Warehouse::BindAccountId},
			{"nMoney", &Warehouse::BindMoney},
			{"dwTime", &Warehouse::BindDwTime},
			{"WarehouseData", &Warehouse::BindItemData},
			{"strSerial", &Warehouse::BindSerial}
		};
		return bindingsMap;
	}

	void Warehouse::BindAccountId(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void Warehouse::BindMoney(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	void Warehouse::BindDwTime(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DwTime);
	}

	void Warehouse::BindItemData(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemData);
	}

	void Warehouse::BindSerial(aujard_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Serial);
	}
}