#include "VersionManagerBinder.h"
#include <VersionManager/model/VersionManagerModel.h>
#include <BinderUtil/BinderUtil.h>
#include <nanodbc/nanodbc.h>

namespace versionmanager_binder
{
	const Concurrent::BindingsMapType& Concurrent::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"serverid", &Concurrent::BindServerId},
			{"zone1_count", &Concurrent::BindZone1Count},
			{"zone2_count", &Concurrent::BindZone2Count},
			{"zone3_count", &Concurrent::BindZone3Count}
		};
		return bindingsMap;
	}

	void Concurrent::BindServerId(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	void Concurrent::BindZone1Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone1Count);
	}

	void Concurrent::BindZone2Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone2Count);
	}

	void Concurrent::BindZone3Count(versionmanager_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone3Count);
	}

	const CurrentUser::BindingsMapType& CurrentUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nServerNo", &CurrentUser::BindServerId},
			{"strServerIP", &CurrentUser::BindServerIP},
			{"strAccountID", &CurrentUser::BindAccountId}
		};
		return bindingsMap;
	}

	void CurrentUser::BindServerId(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ServerId);
	}

	void CurrentUser::BindServerIP(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ServerIP);
	}

	void CurrentUser::BindAccountId(versionmanager_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	const TbUser::BindingsMapType& TbUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &TbUser::BindAccountId},
			{"strPasswd", &TbUser::BindPassword},
			{"strAuthority", &TbUser::BindAuthority}
		};
		return bindingsMap;
	}

	void TbUser::BindAccountId(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void TbUser::BindPassword(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Password);
	}

	void TbUser::BindAuthority(versionmanager_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Authority);
	}

	const Version::BindingsMapType& Version::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sVersion", &Version::BindNumber},
			{"strFileName", &Version::BindFileName},
			{"strCompressName", &Version::BindCompressName},
			{"sHistoryVersion", &Version::BindHistoryVersion}
		};
		return bindingsMap;
	}

	void Version::BindNumber(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Number);
	}

	void Version::BindFileName(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.FileName);
	}

	void Version::BindCompressName(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CompressName);
	}

	void Version::BindHistoryVersion(versionmanager_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HistoryVersion);
	}
}