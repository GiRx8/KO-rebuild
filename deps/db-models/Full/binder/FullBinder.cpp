#include "FullBinder.h"
#include <Full/model/FullModel.h>
#include <BinderUtil/BinderUtil.h>
#include <nanodbc/nanodbc.h>

namespace full_binder
{
	const AccountChar::BindingsMapType& AccountChar::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &AccountChar::BindAccountId},
			{"bNation", &AccountChar::BindNation},
			{"bCharNum", &AccountChar::BindCharNum},
			{"strCharID1", &AccountChar::BindCharId1},
			{"strCharID2", &AccountChar::BindCharId2},
			{"strCharID3", &AccountChar::BindCharId3}
		};
		return bindingsMap;
	}

	void AccountChar::BindAccountId(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void AccountChar::BindNation(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void AccountChar::BindCharNum(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.CharNum);
	}

	void AccountChar::BindCharId1(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.CharId1);
	}

	void AccountChar::BindCharId2(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.CharId2);
	}

	void AccountChar::BindCharId3(full_model::AccountChar& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.CharId3);
	}

	const Battle::BindingsMapType& Battle::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &Battle::BindIndex},
			{"byNation", &Battle::BindNation},
			{"strUserName", &Battle::BindUserName},
			{"byElmoArea", &Battle::BindElmoArea},
			{"byKarusArea", &Battle::BindKarusArea},
			{"byElmoAdvantage", &Battle::BindElmoAdvantage},
			{"byKarusAdvantage", &Battle::BindKarusAdvantage},
			{"byArea_1", &Battle::BindArea1},
			{"byArea_2", &Battle::BindArea2},
			{"byArea_3", &Battle::BindArea3},
			{"byArea_4", &Battle::BindArea4},
			{"byArea_5", &Battle::BindArea5},
			{"byArea_6", &Battle::BindArea6},
			{"byArea_7", &Battle::BindArea7},
			{"byArea_8", &Battle::BindArea8},
			{"byArea_9", &Battle::BindArea9},
			{"byArea_10", &Battle::BindArea10},
			{"byArea_11", &Battle::BindArea11}
		};
		return bindingsMap;
	}

	void Battle::BindIndex(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void Battle::BindNation(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void Battle::BindUserName(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.UserName);
	}

	void Battle::BindElmoArea(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoArea);
	}

	void Battle::BindKarusArea(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusArea);
	}

	void Battle::BindElmoAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoAdvantage);
	}

	void Battle::BindKarusAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusAdvantage);
	}

	void Battle::BindArea1(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area1);
	}

	void Battle::BindArea2(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area2);
	}

	void Battle::BindArea3(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area3);
	}

	void Battle::BindArea4(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area4);
	}

	void Battle::BindArea5(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area5);
	}

	void Battle::BindArea6(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area6);
	}

	void Battle::BindArea7(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area7);
	}

	void Battle::BindArea8(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area8);
	}

	void Battle::BindArea9(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area9);
	}

	void Battle::BindArea10(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area10);
	}

	void Battle::BindArea11(full_model::Battle& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Area11);
	}

	const Coefficient::BindingsMapType& Coefficient::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sClass", &Coefficient::BindClassId},
			{"ShortSword", &Coefficient::BindShortSword},
			{"Sword", &Coefficient::BindSword},
			{"Axe", &Coefficient::BindAxe},
			{"Club", &Coefficient::BindClub},
			{"Spear", &Coefficient::BindSpear},
			{"Pole", &Coefficient::BindPole},
			{"Staff", &Coefficient::BindStaff},
			{"Bow", &Coefficient::BindBow},
			{"Hp", &Coefficient::BindHitPoint},
			{"Mp", &Coefficient::BindManaPoint},
			{"Sp", &Coefficient::BindSp},
			{"Ac", &Coefficient::BindArmor},
			{"Hitrate", &Coefficient::BindHitRate},
			{"Evasionrate", &Coefficient::BindEvasionrate}
		};
		return bindingsMap;
	}

	void Coefficient::BindClassId(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ClassId);
	}

	void Coefficient::BindShortSword(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.ShortSword);
	}

	void Coefficient::BindSword(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Sword);
	}

	void Coefficient::BindAxe(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Axe);
	}

	void Coefficient::BindClub(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Club);
	}

	void Coefficient::BindSpear(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Spear);
	}

	void Coefficient::BindPole(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Pole);
	}

	void Coefficient::BindStaff(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Staff);
	}

	void Coefficient::BindBow(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Bow);
	}

	void Coefficient::BindHitPoint(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.HitPoint);
	}

	void Coefficient::BindManaPoint(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.ManaPoint);
	}

	void Coefficient::BindSp(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Sp);
	}

	void Coefficient::BindArmor(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Armor);
	}

	void Coefficient::BindHitRate(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.HitRate);
	}

	void Coefficient::BindEvasionrate(full_model::Coefficient& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<double>(colIndex, m.Evasionrate);
	}

	const Concurrent::BindingsMapType& Concurrent::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"serverid", &Concurrent::BindServerId},
			{"zone1_count", &Concurrent::BindZone1Count},
			{"zone2_count", &Concurrent::BindZone2Count},
			{"zone3_count", &Concurrent::BindZone3Count},
			{"bz", &Concurrent::BindBz}
		};
		return bindingsMap;
	}

	void Concurrent::BindServerId(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	void Concurrent::BindZone1Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone1Count);
	}

	void Concurrent::BindZone2Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone2Count);
	}

	void Concurrent::BindZone3Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Zone3Count);
	}

	void Concurrent::BindBz(full_model::Concurrent& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Bz);
	}

	const CopySerialItem::BindingsMapType& CopySerialItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserId", &CopySerialItem::BindUserId},
			{"byType", &CopySerialItem::BindType},
			{"nPos", &CopySerialItem::BindPos},
			{"ItemNum", &CopySerialItem::BindItemNum},
			{"ItemSerial", &CopySerialItem::BindItemSerial}
		};
		return bindingsMap;
	}

	void CopySerialItem::BindUserId(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.UserId);
	}

	void CopySerialItem::BindType(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<uint8_t>>(colIndex, m.Type);
	}

	void CopySerialItem::BindPos(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Pos);
	}

	void CopySerialItem::BindItemNum(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemNum);
	}

	void CopySerialItem::BindItemSerial(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemSerial);
	}

	const CopyTest::BindingsMapType& CopyTest::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ITEMSERIAL", &CopyTest::BindItemSerial}
		};
		return bindingsMap;
	}

	void CopyTest::BindItemSerial(full_model::CopyTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.ItemSerial);
	}

	const CouponSerialList::BindingsMapType& CouponSerialList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &CouponSerialList::BindIndex},
			{"strSerialNum", &CouponSerialList::BindSerialNum},
			{"nItemNum", &CouponSerialList::BindItemNumber},
			{"sItemCount", &CouponSerialList::BindItemCount}
		};
		return bindingsMap;
	}

	void CouponSerialList::BindIndex(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void CouponSerialList::BindSerialNum(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.SerialNum);
	}

	void CouponSerialList::BindItemNumber(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemNumber);
	}

	void CouponSerialList::BindItemCount(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ItemCount);
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

	void CurrentUser::BindServerId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ServerId);
	}

	void CurrentUser::BindServerIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ServerIP);
	}

	void CurrentUser::BindAccountId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void CurrentUser::BindCharId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void CurrentUser::BindClientIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.ClientIP);
	}

	const Event::BindingsMapType& Event::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneNum", &Event::BindZoneNumber},
			{"EventNum", &Event::BindEventNumber},
			{"Type", &Event::BindEventType},
			{"Cond1", &Event::BindCondition1},
			{"Cond2", &Event::BindCondition2},
			{"Cond3", &Event::BindCondition3},
			{"Cond4", &Event::BindCondition4},
			{"Cond5", &Event::BindCondition5},
			{"Exec1", &Event::BindExecute1},
			{"Exec2", &Event::BindExecute2},
			{"Exec3", &Event::BindExecute3},
			{"Exec4", &Event::BindExecute4},
			{"Exec5", &Event::BindExecute5}
		};
		return bindingsMap;
	}

	void Event::BindZoneNumber(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ZoneNumber);
	}

	void Event::BindEventNumber(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EventNumber);
	}

	void Event::BindEventType(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.EventType);
	}

	void Event::BindCondition1(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition1);
	}

	void Event::BindCondition2(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition2);
	}

	void Event::BindCondition3(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition3);
	}

	void Event::BindCondition4(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition4);
	}

	void Event::BindCondition5(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Condition5);
	}

	void Event::BindExecute1(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute1);
	}

	void Event::BindExecute2(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute2);
	}

	void Event::BindExecute3(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute3);
	}

	void Event::BindExecute4(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute4);
	}

	void Event::BindExecute5(full_model::Event& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Execute5);
	}

	const EventTrigger::BindingsMapType& EventTrigger::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &EventTrigger::BindIndex},
			{"bNpcType", &EventTrigger::BindNpcType},
			{"sNpcID", &EventTrigger::BindNpcId},
			{"nTriggerNum", &EventTrigger::BindTriggerNumber}
		};
		return bindingsMap;
	}

	void EventTrigger::BindIndex(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void EventTrigger::BindNpcType(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NpcType);
	}

	void EventTrigger::BindNpcId(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	void EventTrigger::BindTriggerNumber(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TriggerNumber);
	}

	const FriendList::BindingsMapType& FriendList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserID", &FriendList::BindUserId},
			{"strFriend1", &FriendList::BindFriend1},
			{"strFriend2", &FriendList::BindFriend2},
			{"strFriend3", &FriendList::BindFriend3},
			{"strFriend4", &FriendList::BindFriend4},
			{"strFriend5", &FriendList::BindFriend5},
			{"strFriend6", &FriendList::BindFriend6},
			{"strFriend7", &FriendList::BindFriend7},
			{"strFriend8", &FriendList::BindFriend8},
			{"strFriend9", &FriendList::BindFriend9},
			{"strFriend10", &FriendList::BindFriend10},
			{"strFriend11", &FriendList::BindFriend11},
			{"strFriend12", &FriendList::BindFriend12},
			{"strFriend13", &FriendList::BindFriend13},
			{"strFriend14", &FriendList::BindFriend14},
			{"strFriend15", &FriendList::BindFriend15},
			{"strFriend16", &FriendList::BindFriend16},
			{"strFriend17", &FriendList::BindFriend17},
			{"strFriend18", &FriendList::BindFriend18},
			{"strFriend19", &FriendList::BindFriend19},
			{"strFriend20", &FriendList::BindFriend20},
			{"strFriend21", &FriendList::BindFriend21},
			{"strFriend22", &FriendList::BindFriend22},
			{"strFriend23", &FriendList::BindFriend23},
			{"strFriend24", &FriendList::BindFriend24}
		};
		return bindingsMap;
	}

	void FriendList::BindUserId(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	void FriendList::BindFriend1(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend1);
	}

	void FriendList::BindFriend2(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend2);
	}

	void FriendList::BindFriend3(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend3);
	}

	void FriendList::BindFriend4(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend4);
	}

	void FriendList::BindFriend5(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend5);
	}

	void FriendList::BindFriend6(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend6);
	}

	void FriendList::BindFriend7(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend7);
	}

	void FriendList::BindFriend8(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend8);
	}

	void FriendList::BindFriend9(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend9);
	}

	void FriendList::BindFriend10(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend10);
	}

	void FriendList::BindFriend11(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend11);
	}

	void FriendList::BindFriend12(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend12);
	}

	void FriendList::BindFriend13(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend13);
	}

	void FriendList::BindFriend14(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend14);
	}

	void FriendList::BindFriend15(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend15);
	}

	void FriendList::BindFriend16(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend16);
	}

	void FriendList::BindFriend17(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend17);
	}

	void FriendList::BindFriend18(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend18);
	}

	void FriendList::BindFriend19(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend19);
	}

	void FriendList::BindFriend20(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend20);
	}

	void FriendList::BindFriend21(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend21);
	}

	void FriendList::BindFriend22(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend22);
	}

	void FriendList::BindFriend23(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend23);
	}

	void FriendList::BindFriend24(full_model::FriendList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Friend24);
	}

	const HacktoolUserLog::BindingsMapType& HacktoolUserLog::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &HacktoolUserLog::BindAccountId},
			{"strCharID", &HacktoolUserLog::BindCharId},
			{"strHackToolName", &HacktoolUserLog::BindHackToolName},
			{"tWriteTime", &HacktoolUserLog::BindWriteTime}
		};
		return bindingsMap;
	}

	void HacktoolUserLog::BindAccountId(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void HacktoolUserLog::BindCharId(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void HacktoolUserLog::BindHackToolName(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.HackToolName);
	}

	void HacktoolUserLog::BindWriteTime(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.WriteTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	const HeroUser::BindingsMapType& HeroUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"shIndex", &HeroUser::BindIndex},
			{"strUserID", &HeroUser::BindUserId},
			{"strNation", &HeroUser::BindNation},
			{"strClass", &HeroUser::BindClassName},
			{"strAchievement", &HeroUser::BindAchievement}
		};
		return bindingsMap;
	}

	void HeroUser::BindIndex(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void HeroUser::BindUserId(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.UserId);
	}

	void HeroUser::BindNation(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Nation);
	}

	void HeroUser::BindClassName(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ClassName);
	}

	void HeroUser::BindAchievement(full_model::HeroUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Achievement);
	}

	const Home::BindingsMapType& Home::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"Nation", &Home::BindNation},
			{"ElmoZoneX", &Home::BindElmoZoneX},
			{"ElmoZoneZ", &Home::BindElmoZoneZ},
			{"ElmoZoneLX", &Home::BindElmoZoneLX},
			{"ElmoZoneLZ", &Home::BindElmoZoneLZ},
			{"KarusZoneX", &Home::BindKarusZoneX},
			{"KarusZoneZ", &Home::BindKarusZoneZ},
			{"KarusZoneLX", &Home::BindKarusZoneLX},
			{"KarusZoneLZ", &Home::BindKarusZoneLZ},
			{"FreeZoneX", &Home::BindFreeZoneX},
			{"FreeZoneZ", &Home::BindFreeZoneZ},
			{"FreeZoneLX", &Home::BindFreeZoneLX},
			{"FreeZoneLZ", &Home::BindFreeZoneLZ},
			{"BattleZoneX", &Home::BindBattleZoneX},
			{"BattleZoneZ", &Home::BindBattleZoneZ},
			{"BattleZoneLX", &Home::BindBattleZoneLX},
			{"BattleZoneLZ", &Home::BindBattleZoneLZ},
			{"BattleZone2X", &Home::BindBattleZone2X},
			{"BattleZone2Z", &Home::BindBattleZone2Z},
			{"BattleZone2LX", &Home::BindBattleZone2LX},
			{"BattleZone2LZ", &Home::BindBattleZone2LZ}
		};
		return bindingsMap;
	}

	void Home::BindNation(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void Home::BindElmoZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoZoneX);
	}

	void Home::BindElmoZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoZoneZ);
	}

	void Home::BindElmoZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoZoneLX);
	}

	void Home::BindElmoZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ElmoZoneLZ);
	}

	void Home::BindKarusZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusZoneX);
	}

	void Home::BindKarusZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusZoneZ);
	}

	void Home::BindKarusZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusZoneLX);
	}

	void Home::BindKarusZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.KarusZoneLZ);
	}

	void Home::BindFreeZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.FreeZoneX);
	}

	void Home::BindFreeZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.FreeZoneZ);
	}

	void Home::BindFreeZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FreeZoneLX);
	}

	void Home::BindFreeZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FreeZoneLZ);
	}

	void Home::BindBattleZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZoneX);
	}

	void Home::BindBattleZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZoneZ);
	}

	void Home::BindBattleZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZoneLX);
	}

	void Home::BindBattleZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZoneLZ);
	}

	void Home::BindBattleZone2X(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZone2X);
	}

	void Home::BindBattleZone2Z(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BattleZone2Z);
	}

	void Home::BindBattleZone2LX(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZone2LX);
	}

	void Home::BindBattleZone2LZ(full_model::Home& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BattleZone2LZ);
	}

	const Item::BindingsMapType& Item::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"Num", &Item::BindID},
			{"strName", &Item::BindName},
			{"Kind", &Item::BindKind},
			{"Slot", &Item::BindSlot},
			{"Race", &Item::BindRace},
			{"Class", &Item::BindClassId},
			{"Damage", &Item::BindDamage},
			{"Delay", &Item::BindDelay},
			{"Range", &Item::BindRange},
			{"Weight", &Item::BindWeight},
			{"Duration", &Item::BindDurability},
			{"BuyPrice", &Item::BindBuyPrice},
			{"SellPrice", &Item::BindSellPrice},
			{"Ac", &Item::BindArmor},
			{"Countable", &Item::BindCountable},
			{"Effect1", &Item::BindMagicEffect},
			{"Effect2", &Item::BindSpecialEffect},
			{"ReqLevel", &Item::BindMinLevel},
			{"ReqLevelMax", &Item::BindMaxLevel},
			{"ReqRank", &Item::BindRequiredRank},
			{"ReqTitle", &Item::BindRequiredTitle},
			{"ReqStr", &Item::BindRequiredStrength},
			{"ReqSta", &Item::BindRequiredStamina},
			{"ReqDex", &Item::BindRequiredDexterity},
			{"ReqIntel", &Item::BindRequiredIntelligence},
			{"ReqCha", &Item::BindRequiredCharisma},
			{"SellingGroup", &Item::BindSellingGroup},
			{"ItemType", &Item::BindType},
			{"Hitrate", &Item::BindHitRate},
			{"Evasionrate", &Item::BindEvasionRate},
			{"DaggerAc", &Item::BindDaggerArmor},
			{"SwordAc", &Item::BindSwordArmor},
			{"MaceAc", &Item::BindMaceArmor},
			{"AxeAc", &Item::BindAxeArmor},
			{"SpearAc", &Item::BindSpearArmor},
			{"BowAc", &Item::BindBowArmor},
			{"FireDamage", &Item::BindFireDamage},
			{"IceDamage", &Item::BindIceDamage},
			{"LightningDamage", &Item::BindLightningDamage},
			{"PoisonDamage", &Item::BindPoisonDamage},
			{"HPDrain", &Item::BindHpDrain},
			{"MPDamage", &Item::BindMpDamage},
			{"MPDrain", &Item::BindMpDrain},
			{"MirrorDamage", &Item::BindMirrorDamage},
			{"Droprate", &Item::BindDropRate},
			{"StrB", &Item::BindStrengthBonus},
			{"StaB", &Item::BindStaminaBonus},
			{"DexB", &Item::BindDexterityBonus},
			{"IntelB", &Item::BindIntelligenceBonus},
			{"ChaB", &Item::BindCharismaBonus},
			{"MaxHpB", &Item::BindMaxHpBonus},
			{"MaxMpB", &Item::BindMaxMpBonus},
			{"FireR", &Item::BindFireResist},
			{"ColdR", &Item::BindColdResist},
			{"LightningR", &Item::BindLightningResist},
			{"MagicR", &Item::BindMagicResist},
			{"PoisonR", &Item::BindPoisonResist},
			{"CurseR", &Item::BindCurseResist}
		};
		return bindingsMap;
	}

	void Item::BindID(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void Item::BindName(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void Item::BindKind(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Kind);
	}

	void Item::BindSlot(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Slot);
	}

	void Item::BindRace(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Race);
	}

	void Item::BindClassId(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ClassId);
	}

	void Item::BindDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void Item::BindDelay(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Delay);
	}

	void Item::BindRange(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	void Item::BindWeight(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Weight);
	}

	void Item::BindDurability(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	void Item::BindBuyPrice(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BuyPrice);
	}

	void Item::BindSellPrice(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellPrice);
	}

	void Item::BindArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void Item::BindCountable(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Countable);
	}

	void Item::BindMagicEffect(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MagicEffect);
	}

	void Item::BindSpecialEffect(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SpecialEffect);
	}

	void Item::BindMinLevel(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MinLevel);
	}

	void Item::BindMaxLevel(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MaxLevel);
	}

	void Item::BindRequiredRank(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredRank);
	}

	void Item::BindRequiredTitle(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredTitle);
	}

	void Item::BindRequiredStrength(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredStrength);
	}

	void Item::BindRequiredStamina(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredStamina);
	}

	void Item::BindRequiredDexterity(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredDexterity);
	}

	void Item::BindRequiredIntelligence(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredIntelligence);
	}

	void Item::BindRequiredCharisma(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RequiredCharisma);
	}

	void Item::BindSellingGroup(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SellingGroup);
	}

	void Item::BindType(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void Item::BindHitRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void Item::BindEvasionRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvasionRate);
	}

	void Item::BindDaggerArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DaggerArmor);
	}

	void Item::BindSwordArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SwordArmor);
	}

	void Item::BindMaceArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaceArmor);
	}

	void Item::BindAxeArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AxeArmor);
	}

	void Item::BindSpearArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SpearArmor);
	}

	void Item::BindBowArmor(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.BowArmor);
	}

	void Item::BindFireDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireDamage);
	}

	void Item::BindIceDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IceDamage);
	}

	void Item::BindLightningDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningDamage);
	}

	void Item::BindPoisonDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonDamage);
	}

	void Item::BindHpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HpDrain);
	}

	void Item::BindMpDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MpDamage);
	}

	void Item::BindMpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MpDrain);
	}

	void Item::BindMirrorDamage(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MirrorDamage);
	}

	void Item::BindDropRate(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DropRate);
	}

	void Item::BindStrengthBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StrengthBonus);
	}

	void Item::BindStaminaBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StaminaBonus);
	}

	void Item::BindDexterityBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DexterityBonus);
	}

	void Item::BindIntelligenceBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.IntelligenceBonus);
	}

	void Item::BindCharismaBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CharismaBonus);
	}

	void Item::BindMaxHpBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpBonus);
	}

	void Item::BindMaxMpBonus(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpBonus);
	}

	void Item::BindFireResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	void Item::BindColdResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	void Item::BindLightningResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	void Item::BindMagicResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	void Item::BindPoisonResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	void Item::BindCurseResist(full_model::Item& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CurseResist);
	}

	const ItemExchange::BindingsMapType& ItemExchange::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &ItemExchange::BindIndex},
			{"nNpcNum", &ItemExchange::BindNpcNumber},
			{"strNpcName", &ItemExchange::BindNpcName},
			{"strNote", &ItemExchange::BindNote},
			{"bRandomFlag", &ItemExchange::BindRandomFlag},
			{"nOriginItemNum1", &ItemExchange::BindOriginItemNumber1},
			{"nOriginItemCount1", &ItemExchange::BindOriginItemCount1},
			{"nOriginItemNum2", &ItemExchange::BindOriginItemNumber2},
			{"nOriginItemCount2", &ItemExchange::BindOriginItemCount2},
			{"nOriginItemNum3", &ItemExchange::BindOriginItemNumber3},
			{"nOriginItemCount3", &ItemExchange::BindOriginItemCount3},
			{"nOriginItemNum4", &ItemExchange::BindOriginItemNumber4},
			{"nOriginItemCount4", &ItemExchange::BindOriginItemCount4},
			{"nOriginItemNum5", &ItemExchange::BindOriginItemNumber5},
			{"nOriginItemCount5", &ItemExchange::BindOriginItemCount5},
			{"nExchangeItemNum1", &ItemExchange::BindExchangeItemNumber1},
			{"nExchangeItemCount1", &ItemExchange::BindExchangeItemCount1},
			{"nExchangeItemNum2", &ItemExchange::BindExchangeItemNumber2},
			{"nExchangeItemCount2", &ItemExchange::BindExchangeItemCount2},
			{"nExchangeItemNum3", &ItemExchange::BindExchangeItemNumber3},
			{"nExchangeItemCount3", &ItemExchange::BindExchangeItemCount3},
			{"nExchangeItemNum4", &ItemExchange::BindExchangeItemNumber4},
			{"nExchangeItemCount4", &ItemExchange::BindExchangeItemCount4},
			{"nExchangeItemNum5", &ItemExchange::BindExchangeItemNumber5},
			{"nExchangeItemCount5", &ItemExchange::BindExchangeItemCount5}
		};
		return bindingsMap;
	}

	void ItemExchange::BindIndex(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void ItemExchange::BindNpcNumber(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcNumber);
	}

	void ItemExchange::BindNpcName(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.NpcName);
	}

	void ItemExchange::BindNote(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Note);
	}

	void ItemExchange::BindRandomFlag(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RandomFlag);
	}

	void ItemExchange::BindOriginItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[0]);
	}

	void ItemExchange::BindOriginItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[0]);
	}

	void ItemExchange::BindOriginItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[1]);
	}

	void ItemExchange::BindOriginItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[1]);
	}

	void ItemExchange::BindOriginItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[2]);
	}

	void ItemExchange::BindOriginItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[2]);
	}

	void ItemExchange::BindOriginItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[3]);
	}

	void ItemExchange::BindOriginItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[3]);
	}

	void ItemExchange::BindOriginItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.OriginItemNumber[4]);
	}

	void ItemExchange::BindOriginItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItemCount[4]);
	}

	void ItemExchange::BindExchangeItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[0]);
	}

	void ItemExchange::BindExchangeItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[0]);
	}

	void ItemExchange::BindExchangeItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[1]);
	}

	void ItemExchange::BindExchangeItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[1]);
	}

	void ItemExchange::BindExchangeItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[2]);
	}

	void ItemExchange::BindExchangeItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[2]);
	}

	void ItemExchange::BindExchangeItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[3]);
	}

	void ItemExchange::BindExchangeItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[3]);
	}

	void ItemExchange::BindExchangeItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ExchangeItemNumber[4]);
	}

	void ItemExchange::BindExchangeItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExchangeItemCount[4]);
	}

	const ItemGroup::BindingsMapType& ItemGroup::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"group", &ItemGroup::BindGroup},
			{"name", &ItemGroup::BindName},
			{"item1", &ItemGroup::BindItem1},
			{"item2", &ItemGroup::BindItem2},
			{"item3", &ItemGroup::BindItem3},
			{"item4", &ItemGroup::BindItem4},
			{"item5", &ItemGroup::BindItem5},
			{"item6", &ItemGroup::BindItem6},
			{"item7", &ItemGroup::BindItem7},
			{"item8", &ItemGroup::BindItem8},
			{"item9", &ItemGroup::BindItem9},
			{"item10", &ItemGroup::BindItem10},
			{"item11", &ItemGroup::BindItem11},
			{"item12", &ItemGroup::BindItem12},
			{"item13", &ItemGroup::BindItem13},
			{"item14", &ItemGroup::BindItem14},
			{"item15", &ItemGroup::BindItem15},
			{"item16", &ItemGroup::BindItem16},
			{"item17", &ItemGroup::BindItem17},
			{"item18", &ItemGroup::BindItem18},
			{"item19", &ItemGroup::BindItem19},
			{"item20", &ItemGroup::BindItem20},
			{"item21", &ItemGroup::BindItem21},
			{"item22", &ItemGroup::BindItem22},
			{"item23", &ItemGroup::BindItem23},
			{"item24", &ItemGroup::BindItem24},
			{"item25", &ItemGroup::BindItem25},
			{"item26", &ItemGroup::BindItem26},
			{"item27", &ItemGroup::BindItem27},
			{"item28", &ItemGroup::BindItem28},
			{"item29", &ItemGroup::BindItem29},
			{"item30", &ItemGroup::BindItem30}
		};
		return bindingsMap;
	}

	void ItemGroup::BindGroup(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Group);
	}

	void ItemGroup::BindName(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void ItemGroup::BindItem1(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item1);
	}

	void ItemGroup::BindItem2(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item2);
	}

	void ItemGroup::BindItem3(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item3);
	}

	void ItemGroup::BindItem4(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item4);
	}

	void ItemGroup::BindItem5(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item5);
	}

	void ItemGroup::BindItem6(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item6);
	}

	void ItemGroup::BindItem7(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item7);
	}

	void ItemGroup::BindItem8(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item8);
	}

	void ItemGroup::BindItem9(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item9);
	}

	void ItemGroup::BindItem10(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item10);
	}

	void ItemGroup::BindItem11(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item11);
	}

	void ItemGroup::BindItem12(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item12);
	}

	void ItemGroup::BindItem13(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item13);
	}

	void ItemGroup::BindItem14(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item14);
	}

	void ItemGroup::BindItem15(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item15);
	}

	void ItemGroup::BindItem16(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item16);
	}

	void ItemGroup::BindItem17(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item17);
	}

	void ItemGroup::BindItem18(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item18);
	}

	void ItemGroup::BindItem19(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item19);
	}

	void ItemGroup::BindItem20(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item20);
	}

	void ItemGroup::BindItem21(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item21);
	}

	void ItemGroup::BindItem22(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item22);
	}

	void ItemGroup::BindItem23(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item23);
	}

	void ItemGroup::BindItem24(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item24);
	}

	void ItemGroup::BindItem25(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item25);
	}

	void ItemGroup::BindItem26(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item26);
	}

	void ItemGroup::BindItem27(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item27);
	}

	void ItemGroup::BindItem28(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item28);
	}

	void ItemGroup::BindItem29(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item29);
	}

	void ItemGroup::BindItem30(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item30);
	}

	const ItemUpgrade::BindingsMapType& ItemUpgrade::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &ItemUpgrade::BindIndex},
			{"nNPCNum", &ItemUpgrade::BindNpcNumber},
			{"strName", &ItemUpgrade::BindName},
			{"strNote", &ItemUpgrade::BindNote},
			{"nOriginType", &ItemUpgrade::BindOriginType},
			{"nOriginItem", &ItemUpgrade::BindOriginItem},
			{"nReqItem1", &ItemUpgrade::BindRequiredItem1},
			{"nReqItem2", &ItemUpgrade::BindRequiredItem2},
			{"nReqItem3", &ItemUpgrade::BindRequiredItem3},
			{"nReqItem4", &ItemUpgrade::BindRequiredItem4},
			{"nReqItem5", &ItemUpgrade::BindRequiredItem5},
			{"nReqItem6", &ItemUpgrade::BindRequiredItem6},
			{"nReqItem7", &ItemUpgrade::BindRequiredItem7},
			{"nReqItem8", &ItemUpgrade::BindRequiredItem8},
			{"nReqNoah", &ItemUpgrade::BindRequiredCoins},
			{"bRateType", &ItemUpgrade::BindRateType},
			{"nGenRate", &ItemUpgrade::BindGenRate},
			{"nGiveItem", &ItemUpgrade::BindGiveItem}
		};
		return bindingsMap;
	}

	void ItemUpgrade::BindIndex(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void ItemUpgrade::BindNpcNumber(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcNumber);
	}

	void ItemUpgrade::BindName(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void ItemUpgrade::BindNote(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Note);
	}

	void ItemUpgrade::BindOriginType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginType);
	}

	void ItemUpgrade::BindOriginItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.OriginItem);
	}

	void ItemUpgrade::BindRequiredItem1(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[0]);
	}

	void ItemUpgrade::BindRequiredItem2(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[1]);
	}

	void ItemUpgrade::BindRequiredItem3(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[2]);
	}

	void ItemUpgrade::BindRequiredItem4(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[3]);
	}

	void ItemUpgrade::BindRequiredItem5(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[4]);
	}

	void ItemUpgrade::BindRequiredItem6(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[5]);
	}

	void ItemUpgrade::BindRequiredItem7(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[6]);
	}

	void ItemUpgrade::BindRequiredItem8(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredItem[7]);
	}

	void ItemUpgrade::BindRequiredCoins(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredCoins);
	}

	void ItemUpgrade::BindRateType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RateType);
	}

	void ItemUpgrade::BindGenRate(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GenRate);
	}

	void ItemUpgrade::BindGiveItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GiveItem);
	}

	const ItemUpProbability::BindingsMapType& ItemUpProbability::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"bType", &ItemUpProbability::BindType},
			{"nMaxSuccess", &ItemUpProbability::BindMaxSuccess},
			{"nMaxFail", &ItemUpProbability::BindMaxFail},
			{"nCurSuccess", &ItemUpProbability::BindCurrentSuccess},
			{"nCurFail", &ItemUpProbability::BindCurrentFailure}
		};
		return bindingsMap;
	}

	void ItemUpProbability::BindType(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void ItemUpProbability::BindMaxSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxSuccess);
	}

	void ItemUpProbability::BindMaxFail(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxFail);
	}

	void ItemUpProbability::BindCurrentSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CurrentSuccess);
	}

	void ItemUpProbability::BindCurrentFailure(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CurrentFailure);
	}

	const Monster::BindingsMapType& Monster::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &Monster::BindMonsterId},
			{"strName", &Monster::BindName},
			{"sPid", &Monster::BindPictureId},
			{"sSize", &Monster::BindSize},
			{"iWeapon1", &Monster::BindWeapon1},
			{"iWeapon2", &Monster::BindWeapon2},
			{"byGroup", &Monster::BindGroup},
			{"byActType", &Monster::BindActType},
			{"byType", &Monster::BindType},
			{"byFamily", &Monster::BindFamily},
			{"byRank", &Monster::BindRank},
			{"byTitle", &Monster::BindTitle},
			{"iSellingGroup", &Monster::BindSellingGroup},
			{"sLevel", &Monster::BindLevel},
			{"iExp", &Monster::BindExp},
			{"iLoyalty", &Monster::BindLoyalty},
			{"iHpPoint", &Monster::BindHitPoints},
			{"sMpPoint", &Monster::BindManaPoints},
			{"sAtk", &Monster::BindAttack},
			{"sAc", &Monster::BindArmor},
			{"sHitRate", &Monster::BindHitRate},
			{"sEvadeRate", &Monster::BindEvadeRate},
			{"sDamage", &Monster::BindDamage},
			{"sAttackDelay", &Monster::BindAttackDelay},
			{"bySpeed1", &Monster::BindWalkSpeed},
			{"bySpeed2", &Monster::BindRunSpeed},
			{"sStandtime", &Monster::BindStandTime},
			{"iMagic1", &Monster::BindMagic1},
			{"iMagic2", &Monster::BindMagic2},
			{"iMagic3", &Monster::BindMagic3},
			{"sFireR", &Monster::BindFireResist},
			{"sColdR", &Monster::BindColdResist},
			{"sLightningR", &Monster::BindLightningResist},
			{"sMagicR", &Monster::BindMagicResist},
			{"sDiseaseR", &Monster::BindDiseaseResist},
			{"sPoisonR", &Monster::BindPoisonResist},
			{"sLightR", &Monster::BindLightResist},
			{"sBulk", &Monster::BindBulk},
			{"byAttackRange", &Monster::BindAttackRange},
			{"bySearchRange", &Monster::BindSearchRange},
			{"byTracingRange", &Monster::BindTracingRange},
			{"iMoney", &Monster::BindMoney},
			{"sItem", &Monster::BindItem},
			{"byDirectAttack", &Monster::BindDirectAttack},
			{"byMagicAttack", &Monster::BindMagicAttack},
			{"byMoneyType", &Monster::BindMoneyType}
		};
		return bindingsMap;
	}

	void Monster::BindMonsterId(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	void Monster::BindName(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void Monster::BindPictureId(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PictureId);
	}

	void Monster::BindSize(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	void Monster::BindWeapon1(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon1);
	}

	void Monster::BindWeapon2(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon2);
	}

	void Monster::BindGroup(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Group);
	}

	void Monster::BindActType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	void Monster::BindType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void Monster::BindFamily(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Family);
	}

	void Monster::BindRank(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	void Monster::BindTitle(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	void Monster::BindSellingGroup(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellingGroup);
	}

	void Monster::BindLevel(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	void Monster::BindExp(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	void Monster::BindLoyalty(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	void Monster::BindHitPoints(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.HitPoints);
	}

	void Monster::BindManaPoints(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaPoints);
	}

	void Monster::BindAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Attack);
	}

	void Monster::BindArmor(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void Monster::BindHitRate(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void Monster::BindEvadeRate(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvadeRate);
	}

	void Monster::BindDamage(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void Monster::BindAttackDelay(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackDelay);
	}

	void Monster::BindWalkSpeed(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
	}

	void Monster::BindRunSpeed(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RunSpeed);
	}

	void Monster::BindStandTime(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StandTime);
	}

	void Monster::BindMagic1(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic1);
	}

	void Monster::BindMagic2(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic2);
	}

	void Monster::BindMagic3(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic3);
	}

	void Monster::BindFireResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	void Monster::BindColdResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	void Monster::BindLightningResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	void Monster::BindMagicResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	void Monster::BindDiseaseResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DiseaseResist);
	}

	void Monster::BindPoisonResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	void Monster::BindLightResist(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightResist);
	}

	void Monster::BindBulk(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Bulk);
	}

	void Monster::BindAttackRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackRange);
	}

	void Monster::BindSearchRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SearchRange);
	}

	void Monster::BindTracingRange(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TracingRange);
	}

	void Monster::BindMoney(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	void Monster::BindItem(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Item);
	}

	void Monster::BindDirectAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectAttack);
	}

	void Monster::BindMagicAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicAttack);
	}

	void Monster::BindMoneyType(full_model::Monster& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MoneyType);
	}

	const MonsterItem::BindingsMapType& MonsterItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterItem::BindMonsterId},
			{"iItem01", &MonsterItem::BindItemId1},
			{"sPersent01", &MonsterItem::BindDropChance1},
			{"iItem02", &MonsterItem::BindItemId2},
			{"sPersent02", &MonsterItem::BindDropChance2},
			{"iItem03", &MonsterItem::BindItemId3},
			{"sPersent03", &MonsterItem::BindDropChance3},
			{"iItem04", &MonsterItem::BindItemId4},
			{"sPersent04", &MonsterItem::BindDropChance4},
			{"iItem05", &MonsterItem::BindItemId5},
			{"sPersent05", &MonsterItem::BindDropChance5}
		};
		return bindingsMap;
	}

	void MonsterItem::BindMonsterId(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	void MonsterItem::BindItemId1(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[0]);
	}

	void MonsterItem::BindDropChance1(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[0]);
	}

	void MonsterItem::BindItemId2(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[1]);
	}

	void MonsterItem::BindDropChance2(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[1]);
	}

	void MonsterItem::BindItemId3(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[2]);
	}

	void MonsterItem::BindDropChance3(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[2]);
	}

	void MonsterItem::BindItemId4(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[3]);
	}

	void MonsterItem::BindDropChance4(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[3]);
	}

	void MonsterItem::BindItemId5(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId[4]);
	}

	void MonsterItem::BindDropChance5(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DropChance[4]);
	}

	const Npc::BindingsMapType& Npc::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &Npc::BindNpcId},
			{"strName", &Npc::BindName},
			{"sPid", &Npc::BindPictureId},
			{"sSize", &Npc::BindSize},
			{"iWeapon1", &Npc::BindWeapon1},
			{"iWeapon2", &Npc::BindWeapon2},
			{"byGroup", &Npc::BindGroup},
			{"byActType", &Npc::BindActType},
			{"byType", &Npc::BindType},
			{"byFamily", &Npc::BindFamily},
			{"byRank", &Npc::BindRank},
			{"byTitle", &Npc::BindTitle},
			{"iSellingGroup", &Npc::BindSellingGroup},
			{"sLevel", &Npc::BindLevel},
			{"iExp", &Npc::BindExp},
			{"iLoyalty", &Npc::BindLoyalty},
			{"iHpPoint", &Npc::BindHitPoints},
			{"sMpPoint", &Npc::BindManaPoints},
			{"sAtk", &Npc::BindAttack},
			{"sAc", &Npc::BindArmor},
			{"sHitRate", &Npc::BindHitRate},
			{"sEvadeRate", &Npc::BindEvadeRate},
			{"sDamage", &Npc::BindDamage},
			{"sAttackDelay", &Npc::BindAttackDelay},
			{"bySpeed1", &Npc::BindWalkSpeed},
			{"bySpeed2", &Npc::BindRunSpeed},
			{"sStandtime", &Npc::BindStandTime},
			{"iMagic1", &Npc::BindMagic1},
			{"iMagic2", &Npc::BindMagic2},
			{"iMagic3", &Npc::BindMagic3},
			{"sFireR", &Npc::BindFireResist},
			{"sColdR", &Npc::BindColdResist},
			{"sLightningR", &Npc::BindLightningResist},
			{"sMagicR", &Npc::BindMagicResist},
			{"sDiseaseR", &Npc::BindDiseaseResist},
			{"sPoisonR", &Npc::BindPoisonResist},
			{"sLightR", &Npc::BindLightResist},
			{"sBulk", &Npc::BindBulk},
			{"byAttackRange", &Npc::BindAttackRange},
			{"bySearchRange", &Npc::BindSearchRange},
			{"byTracingRange", &Npc::BindTracingRange},
			{"iMoney", &Npc::BindMoney},
			{"sItem", &Npc::BindItem},
			{"byDirectAttack", &Npc::BindDirectAttack},
			{"byMagicAttack", &Npc::BindMagicAttack},
			{"byMoneyType", &Npc::BindMoneyType}
		};
		return bindingsMap;
	}

	void Npc::BindNpcId(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	void Npc::BindName(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void Npc::BindPictureId(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PictureId);
	}

	void Npc::BindSize(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	void Npc::BindWeapon1(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon1);
	}

	void Npc::BindWeapon2(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Weapon2);
	}

	void Npc::BindGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Group);
	}

	void Npc::BindActType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	void Npc::BindType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void Npc::BindFamily(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Family);
	}

	void Npc::BindRank(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	void Npc::BindTitle(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	void Npc::BindSellingGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.SellingGroup);
	}

	void Npc::BindLevel(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	void Npc::BindExp(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	void Npc::BindLoyalty(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	void Npc::BindHitPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.HitPoints);
	}

	void Npc::BindManaPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaPoints);
	}

	void Npc::BindAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Attack);
	}

	void Npc::BindArmor(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void Npc::BindHitRate(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void Npc::BindEvadeRate(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EvadeRate);
	}

	void Npc::BindDamage(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void Npc::BindAttackDelay(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackDelay);
	}

	void Npc::BindWalkSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WalkSpeed);
	}

	void Npc::BindRunSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RunSpeed);
	}

	void Npc::BindStandTime(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.StandTime);
	}

	void Npc::BindMagic1(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic1);
	}

	void Npc::BindMagic2(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic2);
	}

	void Npc::BindMagic3(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Magic3);
	}

	void Npc::BindFireResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FireResist);
	}

	void Npc::BindColdResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ColdResist);
	}

	void Npc::BindLightningResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightningResist);
	}

	void Npc::BindMagicResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicResist);
	}

	void Npc::BindDiseaseResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DiseaseResist);
	}

	void Npc::BindPoisonResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PoisonResist);
	}

	void Npc::BindLightResist(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.LightResist);
	}

	void Npc::BindBulk(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Bulk);
	}

	void Npc::BindAttackRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackRange);
	}

	void Npc::BindSearchRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SearchRange);
	}

	void Npc::BindTracingRange(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TracingRange);
	}

	void Npc::BindMoney(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	void Npc::BindItem(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Item);
	}

	void Npc::BindDirectAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectAttack);
	}

	void Npc::BindMagicAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicAttack);
	}

	void Npc::BindMoneyType(full_model::Npc& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MoneyType);
	}

	const NpcItem::BindingsMapType& NpcItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &NpcItem::BindNpcId},
			{"iItem01", &NpcItem::BindItemId1},
			{"sPersent01", &NpcItem::BindDropChance1},
			{"iItem02", &NpcItem::BindItemId2},
			{"sPersent02", &NpcItem::BindDropChance2},
			{"iItem03", &NpcItem::BindItemId3},
			{"sPersent03", &NpcItem::BindDropChance3},
			{"iItem04", &NpcItem::BindItemId4},
			{"sPersent04", &NpcItem::BindDropChance4},
			{"iItem05", &NpcItem::BindItemId5},
			{"sPersent05", &NpcItem::BindDropChance5}
		};
		return bindingsMap;
	}

	void NpcItem::BindNpcId(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NpcId);
	}

	void NpcItem::BindItemId1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId1);
	}

	void NpcItem::BindDropChance1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance[0]);
	}

	void NpcItem::BindItemId2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId2);
	}

	void NpcItem::BindDropChance2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance[1]);
	}

	void NpcItem::BindItemId3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId3);
	}

	void NpcItem::BindDropChance3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance[2]);
	}

	void NpcItem::BindItemId4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId4);
	}

	void NpcItem::BindDropChance4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance[3]);
	}

	void NpcItem::BindItemId5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ItemId5);
	}

	void NpcItem::BindDropChance5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.DropChance[4]);
	}

	const NpcMoveItem::BindingsMapType& NpcMoveItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCastleIndex", &NpcMoveItem::BindCastleIndex},
			{"byChangeItem", &NpcMoveItem::BindChangeItem},
			{"sChangeSid", &NpcMoveItem::BindChangeId},
			{"byMoveItem", &NpcMoveItem::BindMoveItem},
			{"sMoveMinX", &NpcMoveItem::BindMoveMinX},
			{"sMoveMinY", &NpcMoveItem::BindMoveMinY},
			{"sMoveMaxX", &NpcMoveItem::BindMoveMaxX},
			{"sMoveMaxY", &NpcMoveItem::BindMoveMaxY}
		};
		return bindingsMap;
	}

	void NpcMoveItem::BindCastleIndex(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CastleIndex);
	}

	void NpcMoveItem::BindChangeItem(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeItem);
	}

	void NpcMoveItem::BindChangeId(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ChangeId);
	}

	void NpcMoveItem::BindMoveItem(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.MoveItem);
	}

	void NpcMoveItem::BindMoveMinX(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinX);
	}

	void NpcMoveItem::BindMoveMinY(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMinY);
	}

	void NpcMoveItem::BindMoveMaxX(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxX);
	}

	void NpcMoveItem::BindMoveMaxY(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.MoveMaxY);
	}

	const NpcPos::BindingsMapType& NpcPos::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneID", &NpcPos::BindZoneId},
			{"NpcID", &NpcPos::BindNpcId},
			{"ActType", &NpcPos::BindActType},
			{"RegenType", &NpcPos::BindRegenType},
			{"DungeonFamily", &NpcPos::BindDungeonFamily},
			{"SpecialType", &NpcPos::BindSpecialType},
			{"TrapNumber", &NpcPos::BindTrapNumber},
			{"LeftX", &NpcPos::BindLeftX},
			{"TopZ", &NpcPos::BindTopZ},
			{"RightX", &NpcPos::BindRightX},
			{"BottomZ", &NpcPos::BindBottomZ},
			{"LimitMinZ", &NpcPos::BindLimitMinZ},
			{"LimitMinX", &NpcPos::BindLimitMinX},
			{"LimitMaxX", &NpcPos::BindLimitMaxX},
			{"LimitMaxZ", &NpcPos::BindLimitMaxZ},
			{"NumNPC", &NpcPos::BindNumNpc},
			{"RegTime", &NpcPos::BindRespawnTime},
			{"byDirection", &NpcPos::BindDirection},
			{"DotCnt", &NpcPos::BindPathPointCount},
			{"path", &NpcPos::BindPath}
		};
		return bindingsMap;
	}

	void NpcPos::BindZoneId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	void NpcPos::BindNpcId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NpcId);
	}

	void NpcPos::BindActType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ActType);
	}

	void NpcPos::BindRegenType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegenType);
	}

	void NpcPos::BindDungeonFamily(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DungeonFamily);
	}

	void NpcPos::BindSpecialType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SpecialType);
	}

	void NpcPos::BindTrapNumber(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TrapNumber);
	}

	void NpcPos::BindLeftX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LeftX);
	}

	void NpcPos::BindTopZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TopZ);
	}

	void NpcPos::BindRightX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RightX);
	}

	void NpcPos::BindBottomZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BottomZ);
	}

	void NpcPos::BindLimitMinZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMinZ);
	}

	void NpcPos::BindLimitMinX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMinX);
	}

	void NpcPos::BindLimitMaxX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMaxX);
	}

	void NpcPos::BindLimitMaxZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LimitMaxZ);
	}

	void NpcPos::BindNumNpc(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NumNpc);
	}

	void NpcPos::BindRespawnTime(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RespawnTime);
	}

	void NpcPos::BindDirection(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Direction);
	}

	void NpcPos::BindPathPointCount(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PathPointCount);
	}

	void NpcPos::BindPath(full_model::NpcPos& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Path);
	}

	const KingBallotBox::BindingsMapType& KingBallotBox::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &KingBallotBox::BindAccountId},
			{"strCharID", &KingBallotBox::BindCharId},
			{"byNation", &KingBallotBox::BindNation},
			{"strCandidacyID", &KingBallotBox::BindCandidateId}
		};
		return bindingsMap;
	}

	void KingBallotBox::BindAccountId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void KingBallotBox::BindCharId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void KingBallotBox::BindNation(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void KingBallotBox::BindCandidateId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CandidateId);
	}

	const KingCandidacyNoticeBoard::BindingsMapType& KingCandidacyNoticeBoard::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserID", &KingCandidacyNoticeBoard::BindCandidateId},
			{"byNation", &KingCandidacyNoticeBoard::BindNation},
			{"sNoticeLen", &KingCandidacyNoticeBoard::BindNoticeLength},
			{"strNotice", &KingCandidacyNoticeBoard::BindNotice}
		};
		return bindingsMap;
	}

	void KingCandidacyNoticeBoard::BindCandidateId(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CandidateId);
	}

	void KingCandidacyNoticeBoard::BindNation(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void KingCandidacyNoticeBoard::BindNoticeLength(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NoticeLength);
	}

	void KingCandidacyNoticeBoard::BindNotice(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.Notice);
	}

	const KingElectionList::BindingsMapType& KingElectionList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byType", &KingElectionList::BindType},
			{"byNation", &KingElectionList::BindNation},
			{"nKnights", &KingElectionList::BindKnights},
			{"strName", &KingElectionList::BindName},
			{"nMoney", &KingElectionList::BindMoney}
		};
		return bindingsMap;
	}

	void KingElectionList::BindType(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void KingElectionList::BindNation(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void KingElectionList::BindKnights(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Knights);
	}

	void KingElectionList::BindName(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void KingElectionList::BindMoney(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	const KingSystem::BindingsMapType& KingSystem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byNation", &KingSystem::BindNation},
			{"byType", &KingSystem::BindType},
			{"sYear", &KingSystem::BindYear},
			{"byMonth", &KingSystem::BindMonth},
			{"byDay", &KingSystem::BindDay},
			{"byHour", &KingSystem::BindHour},
			{"byMinute", &KingSystem::BindMinute},
			{"byImType", &KingSystem::BindImType},
			{"sImYear", &KingSystem::BindImYear},
			{"byImMonth", &KingSystem::BindImMonth},
			{"byImDay", &KingSystem::BindImDay},
			{"byImHour", &KingSystem::BindImHour},
			{"byImMinute", &KingSystem::BindImMinute},
			{"byNoahEvent", &KingSystem::BindNoahEvent},
			{"byNoahEvent_Day", &KingSystem::BindNoahEventDay},
			{"byNoahEvent_Hour", &KingSystem::BindNoahEventHour},
			{"byNoahEvent_Minute", &KingSystem::BindNoahEventMinute},
			{"sNoahEvent_Duration", &KingSystem::BindNoahEventDuration},
			{"byExpEvent", &KingSystem::BindExpEvent},
			{"byExpEvent_Day", &KingSystem::BindExpEventDay},
			{"byExpEvent_Hour", &KingSystem::BindExpEventHour},
			{"byExpEvent_Minute", &KingSystem::BindExpEventMinute},
			{"sExpEvent_Duration", &KingSystem::BindExpEventDuration},
			{"nTribute", &KingSystem::BindTribute},
			{"byTerritoryTariff", &KingSystem::BindTerritoryTariff},
			{"nTerritoryTax", &KingSystem::BindTerritoryTax},
			{"nNationalTreasury", &KingSystem::BindNationalTreasury},
			{"strKingName", &KingSystem::BindKingName},
			{"strImRequestID", &KingSystem::BindImRequestId}
		};
		return bindingsMap;
	}

	void KingSystem::BindNation(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void KingSystem::BindType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void KingSystem::BindYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Year);
	}

	void KingSystem::BindMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Month);
	}

	void KingSystem::BindDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Day);
	}

	void KingSystem::BindHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Hour);
	}

	void KingSystem::BindMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Minute);
	}

	void KingSystem::BindImType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImType);
	}

	void KingSystem::BindImYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ImYear);
	}

	void KingSystem::BindImMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImMonth);
	}

	void KingSystem::BindImDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImDay);
	}

	void KingSystem::BindImHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImHour);
	}

	void KingSystem::BindImMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ImMinute);
	}

	void KingSystem::BindNoahEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NoahEvent);
	}

	void KingSystem::BindNoahEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NoahEventDay);
	}

	void KingSystem::BindNoahEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NoahEventHour);
	}

	void KingSystem::BindNoahEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NoahEventMinute);
	}

	void KingSystem::BindNoahEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NoahEventDuration);
	}

	void KingSystem::BindExpEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpEvent);
	}

	void KingSystem::BindExpEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpEventDay);
	}

	void KingSystem::BindExpEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpEventHour);
	}

	void KingSystem::BindExpEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpEventMinute);
	}

	void KingSystem::BindExpEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExpEventDuration);
	}

	void KingSystem::BindTribute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Tribute);
	}

	void KingSystem::BindTerritoryTariff(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TerritoryTariff);
	}

	void KingSystem::BindTerritoryTax(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.TerritoryTax);
	}

	void KingSystem::BindNationalTreasury(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NationalTreasury);
	}

	void KingSystem::BindKingName(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KingName);
	}

	void KingSystem::BindImRequestId(full_model::KingSystem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ImRequestId);
	}

	const Knights::BindingsMapType& Knights::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"IDNum", &Knights::BindID},
			{"Flag", &Knights::BindFlag},
			{"Nation", &Knights::BindNation},
			{"Ranking", &Knights::BindRanking},
			{"IDName", &Knights::BindName},
			{"Members", &Knights::BindMembers},
			{"Chief", &Knights::BindChief},
			{"ViceChief_1", &Knights::BindViceChief1},
			{"ViceChief_2", &Knights::BindViceChief2},
			{"ViceChief_3", &Knights::BindViceChief3},
			{"strEnemyName", &Knights::BindEnemyName},
			{"byOldWarResult", &Knights::BindOldWarResult},
			{"nWarEnemyID", &Knights::BindWarEnemyId},
			{"nVictory", &Knights::BindVictory},
			{"nLose", &Knights::BindLose},
			{"Gold", &Knights::BindGold},
			{"Domination", &Knights::BindDomination},
			{"Points", &Knights::BindPoints},
			{"CreateTime", &Knights::BindCreateTime},
			{"sMarkVersion", &Knights::BindMarkVersion},
			{"sMarkLen", &Knights::BindMarkLength},
			{"Mark", &Knights::BindMark},
			{"Stash", &Knights::BindStash},
			{"bySiegeFlag", &Knights::BindSiegeFlag},
			{"sAllianceKnights", &Knights::BindAllianceKnights},
			{"sCape", &Knights::BindCape}
		};
		return bindingsMap;
	}

	void Knights::BindID(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ID);
	}

	void Knights::BindFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Flag);
	}

	void Knights::BindNation(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void Knights::BindRanking(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Ranking);
	}

	void Knights::BindName(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void Knights::BindMembers(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Members);
	}

	void Knights::BindChief(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Chief);
	}

	void Knights::BindViceChief1(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief1);
	}

	void Knights::BindViceChief2(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief2);
	}

	void Knights::BindViceChief3(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ViceChief3);
	}

	void Knights::BindEnemyName(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.EnemyName);
	}

	void Knights::BindOldWarResult(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.OldWarResult);
	}

	void Knights::BindWarEnemyId(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.WarEnemyId);
	}

	void Knights::BindVictory(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Victory);
	}

	void Knights::BindLose(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Lose);
	}

	void Knights::BindGold(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.Gold);
	}

	void Knights::BindDomination(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Domination);
	}

	void Knights::BindPoints(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	void Knights::BindCreateTime(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.CreateTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	void Knights::BindMarkVersion(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MarkVersion);
	}

	void Knights::BindMarkLength(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MarkLength);
	}

	void Knights::BindMark(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Mark);
	}

	void Knights::BindStash(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Stash);
	}

	void Knights::BindSiegeFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SiegeFlag);
	}

	void Knights::BindAllianceKnights(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AllianceKnights);
	}

	void Knights::BindCape(full_model::Knights& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Cape);
	}

	const KnightsAlliance::BindingsMapType& KnightsAlliance::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sMainAllianceKnights", &KnightsAlliance::BindMainAllianceKnights},
			{"sSubAllianceKnights", &KnightsAlliance::BindSubAllianceKnights},
			{"sMercenaryClan_1", &KnightsAlliance::BindMercenaryClan1},
			{"sMercenaryClan_2", &KnightsAlliance::BindMercenaryClan2}
		};
		return bindingsMap;
	}

	void KnightsAlliance::BindMainAllianceKnights(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MainAllianceKnights);
	}

	void KnightsAlliance::BindSubAllianceKnights(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SubAllianceKnights);
	}

	void KnightsAlliance::BindMercenaryClan1(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MercenaryClan1);
	}

	void KnightsAlliance::BindMercenaryClan2(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MercenaryClan2);
	}

	const KnightsCape::BindingsMapType& KnightsCape::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCapeIndex", &KnightsCape::BindCapeIndex},
			{"strName", &KnightsCape::BindName},
			{"nBuyPrice", &KnightsCape::BindBuyPrice},
			{"nDuration", &KnightsCape::BindDuration},
			{"byGrade", &KnightsCape::BindGrade}
		};
		return bindingsMap;
	}

	void KnightsCape::BindCapeIndex(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CapeIndex);
	}

	void KnightsCape::BindName(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void KnightsCape::BindBuyPrice(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.BuyPrice);
	}

	void KnightsCape::BindDuration(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Duration);
	}

	void KnightsCape::BindGrade(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Grade);
	}

	const KnightsRating::BindingsMapType& KnightsRating::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRank", &KnightsRating::BindRank},
			{"shIndex", &KnightsRating::BindIndex},
			{"strName", &KnightsRating::BindName},
			{"nPoints", &KnightsRating::BindPoints}
		};
		return bindingsMap;
	}

	void KnightsRating::BindRank(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Rank);
	}

	void KnightsRating::BindIndex(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void KnightsRating::BindName(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void KnightsRating::BindPoints(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Points);
	}

	const KnightsSiegeWarfare::BindingsMapType& KnightsSiegeWarfare::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sCastleIndex", &KnightsSiegeWarfare::BindCastleIndex},
			{"sMasterKnights", &KnightsSiegeWarfare::BindMasterKnights},
			{"bySiegeType", &KnightsSiegeWarfare::BindSiegeType},
			{"byWarDay", &KnightsSiegeWarfare::BindWarDay},
			{"byWarTime", &KnightsSiegeWarfare::BindWarHour},
			{"byWarMinute", &KnightsSiegeWarfare::BindWarMinute},
			{"sChallengeList_1", &KnightsSiegeWarfare::BindChallengeList1},
			{"sChallengeList_2", &KnightsSiegeWarfare::BindChallengeList2},
			{"sChallengeList_3", &KnightsSiegeWarfare::BindChallengeList3},
			{"sChallengeList_4", &KnightsSiegeWarfare::BindChallengeList4},
			{"sChallengeList_5", &KnightsSiegeWarfare::BindChallengeList5},
			{"sChallengeList_6", &KnightsSiegeWarfare::BindChallengeList6},
			{"sChallengeList_7", &KnightsSiegeWarfare::BindChallengeList7},
			{"sChallengeList_8", &KnightsSiegeWarfare::BindChallengeList8},
			{"sChallengeList_9", &KnightsSiegeWarfare::BindChallengeList9},
			{"sChallengeList_10", &KnightsSiegeWarfare::BindChallengeList10},
			{"byWarRequestDay", &KnightsSiegeWarfare::BindWarRequestDay},
			{"byWarRequestTime", &KnightsSiegeWarfare::BindWarRequestTime},
			{"byWarRequestMinute", &KnightsSiegeWarfare::BindWarRequestMinute},
			{"byGuerrillaWarDay", &KnightsSiegeWarfare::BindGuerrillaWarDay},
			{"byGuerrillaWarTime", &KnightsSiegeWarfare::BindGuerrillaWarTime},
			{"byGuerrillaWarMinute", &KnightsSiegeWarfare::BindGuerrillaWarMinute},
			{"strChallengeList", &KnightsSiegeWarfare::BindChallengeList},
			{"sMoradonTariff", &KnightsSiegeWarfare::BindMoradonTariff},
			{"sDellosTariff", &KnightsSiegeWarfare::BindDelosTariff},
			{"nDungeonCharge", &KnightsSiegeWarfare::BindDungeonCharge},
			{"nMoradonTax", &KnightsSiegeWarfare::BindMoradonTax},
			{"nDellosTax", &KnightsSiegeWarfare::BindDelosTax},
			{"sRequestList_1", &KnightsSiegeWarfare::BindRequestList1},
			{"sRequestList_2", &KnightsSiegeWarfare::BindRequestList2},
			{"sRequestList_3", &KnightsSiegeWarfare::BindRequestList3},
			{"sRequestList_4", &KnightsSiegeWarfare::BindRequestList4},
			{"sRequestList_5", &KnightsSiegeWarfare::BindRequestList5},
			{"sRequestList_6", &KnightsSiegeWarfare::BindRequestList6},
			{"sRequestList_7", &KnightsSiegeWarfare::BindRequestList7},
			{"sRequestList_8", &KnightsSiegeWarfare::BindRequestList8},
			{"sRequestList_9", &KnightsSiegeWarfare::BindRequestList9},
			{"sRequestList_10", &KnightsSiegeWarfare::BindRequestList10}
		};
		return bindingsMap;
	}

	void KnightsSiegeWarfare::BindCastleIndex(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.CastleIndex);
	}

	void KnightsSiegeWarfare::BindMasterKnights(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MasterKnights);
	}

	void KnightsSiegeWarfare::BindSiegeType(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SiegeType);
	}

	void KnightsSiegeWarfare::BindWarDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarDay);
	}

	void KnightsSiegeWarfare::BindWarHour(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarHour);
	}

	void KnightsSiegeWarfare::BindWarMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarMinute);
	}

	void KnightsSiegeWarfare::BindChallengeList1(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList1);
	}

	void KnightsSiegeWarfare::BindChallengeList2(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList2);
	}

	void KnightsSiegeWarfare::BindChallengeList3(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList3);
	}

	void KnightsSiegeWarfare::BindChallengeList4(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList4);
	}

	void KnightsSiegeWarfare::BindChallengeList5(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList5);
	}

	void KnightsSiegeWarfare::BindChallengeList6(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList6);
	}

	void KnightsSiegeWarfare::BindChallengeList7(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList7);
	}

	void KnightsSiegeWarfare::BindChallengeList8(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList8);
	}

	void KnightsSiegeWarfare::BindChallengeList9(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList9);
	}

	void KnightsSiegeWarfare::BindChallengeList10(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ChallengeList10);
	}

	void KnightsSiegeWarfare::BindWarRequestDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestDay);
	}

	void KnightsSiegeWarfare::BindWarRequestTime(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestTime);
	}

	void KnightsSiegeWarfare::BindWarRequestMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarRequestMinute);
	}

	void KnightsSiegeWarfare::BindGuerrillaWarDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarDay);
	}

	void KnightsSiegeWarfare::BindGuerrillaWarTime(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarTime);
	}

	void KnightsSiegeWarfare::BindGuerrillaWarMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.GuerrillaWarMinute);
	}

	void KnightsSiegeWarfare::BindChallengeList(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ChallengeList);
	}

	void KnightsSiegeWarfare::BindMoradonTariff(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MoradonTariff);
	}

	void KnightsSiegeWarfare::BindDelosTariff(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DelosTariff);
	}

	void KnightsSiegeWarfare::BindDungeonCharge(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DungeonCharge);
	}

	void KnightsSiegeWarfare::BindMoradonTax(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MoradonTax);
	}

	void KnightsSiegeWarfare::BindDelosTax(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DelosTax);
	}

	void KnightsSiegeWarfare::BindRequestList1(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList1);
	}

	void KnightsSiegeWarfare::BindRequestList2(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList2);
	}

	void KnightsSiegeWarfare::BindRequestList3(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList3);
	}

	void KnightsSiegeWarfare::BindRequestList4(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList4);
	}

	void KnightsSiegeWarfare::BindRequestList5(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList5);
	}

	void KnightsSiegeWarfare::BindRequestList6(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList6);
	}

	void KnightsSiegeWarfare::BindRequestList7(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList7);
	}

	void KnightsSiegeWarfare::BindRequestList8(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList8);
	}

	void KnightsSiegeWarfare::BindRequestList9(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList9);
	}

	void KnightsSiegeWarfare::BindRequestList10(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RequestList10);
	}

	const KnightsUser::BindingsMapType& KnightsUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIDNum", &KnightsUser::BindKnightsId},
			{"strUserID", &KnightsUser::BindUserId}
		};
		return bindingsMap;
	}

	void KnightsUser::BindKnightsId(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KnightsId);
	}

	void KnightsUser::BindUserId(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	const LevelUp::BindingsMapType& LevelUp::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"level", &LevelUp::BindLevel},
			{"Exp", &LevelUp::BindRequiredExp}
		};
		return bindingsMap;
	}

	void LevelUp::BindLevel(full_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void LevelUp::BindRequiredExp(full_model::LevelUp& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RequiredExp);
	}

	const Magic::BindingsMapType& Magic::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"MagicNum", &Magic::BindID},
			{"EnName", &Magic::BindEnglishName},
			{"KrName", &Magic::BindKoreanName},
			{"Description", &Magic::BindDescription},
			{"BeforeAction", &Magic::BindBeforeAction},
			{"TargetAction", &Magic::BindTargetAction},
			{"SelfEffect", &Magic::BindSelfEffect},
			{"FlyingEffect", &Magic::BindFlyingEffect},
			{"TargetEffect", &Magic::BindTargetEffect},
			{"Moral", &Magic::BindMoral},
			{"SkillLevel", &Magic::BindSkillLevel},
			{"Skill", &Magic::BindSkill},
			{"Msp", &Magic::BindManaCost},
			{"HP", &Magic::BindHpCost},
			{"ItemGroup", &Magic::BindItemGroup},
			{"UseItem", &Magic::BindUseItem},
			{"CastTime", &Magic::BindCastTime},
			{"ReCastTime", &Magic::BindRecastTime},
			{"SuccessRate", &Magic::BindSuccessRate},
			{"Type1", &Magic::BindType1},
			{"Type2", &Magic::BindType2},
			{"Range", &Magic::BindRange},
			{"Etc", &Magic::BindEtc},
			{"Event", &Magic::BindEvent}
		};
		return bindingsMap;
	}

	void Magic::BindID(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void Magic::BindEnglishName(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.EnglishName);
	}

	void Magic::BindKoreanName(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KoreanName);
	}

	void Magic::BindDescription(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void Magic::BindBeforeAction(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BeforeAction);
	}

	void Magic::BindTargetAction(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetAction);
	}

	void Magic::BindSelfEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SelfEffect);
	}

	void Magic::BindFlyingEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FlyingEffect);
	}

	void Magic::BindTargetEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TargetEffect);
	}

	void Magic::BindMoral(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Moral);
	}

	void Magic::BindSkillLevel(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.SkillLevel);
	}

	void Magic::BindSkill(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Skill);
	}

	void Magic::BindManaCost(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ManaCost);
	}

	void Magic::BindHpCost(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HpCost);
	}

	void Magic::BindItemGroup(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemGroup);
	}

	void Magic::BindUseItem(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.UseItem);
	}

	void Magic::BindCastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.CastTime);
	}

	void Magic::BindRecastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RecastTime);
	}

	void Magic::BindSuccessRate(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SuccessRate);
	}

	void Magic::BindType1(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type1);
	}

	void Magic::BindType2(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type2);
	}

	void Magic::BindRange(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	void Magic::BindEtc(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Etc);
	}

	void Magic::BindEvent(full_model::Magic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Event);
	}

	const MagicType1::BindingsMapType& MagicType1::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType1::BindID},
			{"Name", &MagicType1::BindName},
			{"Description", &MagicType1::BindDescription},
			{"Type", &MagicType1::BindType},
			{"HitRate", &MagicType1::BindHitRateMod},
			{"Hit", &MagicType1::BindDamageMod},
			{"AddDamage", &MagicType1::BindAddDamage},
			{"Delay", &MagicType1::BindDelay},
			{"ComboType", &MagicType1::BindComboType},
			{"ComboCount", &MagicType1::BindComboCount},
			{"ComboDamage", &MagicType1::BindComboDamage},
			{"Range", &MagicType1::BindRange}
		};
		return bindingsMap;
	}

	void MagicType1::BindID(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType1::BindName(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void MagicType1::BindDescription(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void MagicType1::BindType(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void MagicType1::BindHitRateMod(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	void MagicType1::BindDamageMod(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	void MagicType1::BindAddDamage(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	void MagicType1::BindDelay(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Delay);
	}

	void MagicType1::BindComboType(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboType);
	}

	void MagicType1::BindComboCount(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ComboCount);
	}

	void MagicType1::BindComboDamage(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ComboDamage);
	}

	void MagicType1::BindRange(full_model::MagicType1& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Range);
	}

	const MagicType2::BindingsMapType& MagicType2::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType2::BindID},
			{"Name", &MagicType2::BindName},
			{"Description", &MagicType2::BindDescription},
			{"HitType", &MagicType2::BindHitType},
			{"HitRate", &MagicType2::BindHitRateMod},
			{"AddDamage", &MagicType2::BindDamageMod},
			{"AddRange", &MagicType2::BindRangeMod},
			{"NeedArrow", &MagicType2::BindNeedArrow},
			{"AddDamagePlus", &MagicType2::BindAddDamagePlus}
		};
		return bindingsMap;
	}

	void MagicType2::BindID(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType2::BindName(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void MagicType2::BindDescription(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void MagicType2::BindHitType(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitType);
	}

	void MagicType2::BindHitRateMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRateMod);
	}

	void MagicType2::BindDamageMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DamageMod);
	}

	void MagicType2::BindRangeMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RangeMod);
	}

	void MagicType2::BindNeedArrow(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedArrow);
	}

	void MagicType2::BindAddDamagePlus(full_model::MagicType2& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamagePlus);
	}

	const MagicType3::BindingsMapType& MagicType3::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType3::BindID},
			{"Name", &MagicType3::BindName},
			{"Description", &MagicType3::BindDescription},
			{"Radius", &MagicType3::BindRadius},
			{"Angle", &MagicType3::BindAngle},
			{"DirectType", &MagicType3::BindDirectType},
			{"FirstDamage", &MagicType3::BindFirstDamage},
			{"EndDamage", &MagicType3::BindEndDamage},
			{"TimeDamage", &MagicType3::BindTimeDamage},
			{"Duration", &MagicType3::BindDuration},
			{"Attribute", &MagicType3::BindAttribute}
		};
		return bindingsMap;
	}

	void MagicType3::BindID(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType3::BindName(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void MagicType3::BindDescription(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void MagicType3::BindRadius(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType3::BindAngle(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Angle);
	}

	void MagicType3::BindDirectType(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DirectType);
	}

	void MagicType3::BindFirstDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.FirstDamage);
	}

	void MagicType3::BindEndDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.EndDamage);
	}

	void MagicType3::BindTimeDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TimeDamage);
	}

	void MagicType3::BindDuration(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Duration);
	}

	void MagicType3::BindAttribute(full_model::MagicType3& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Attribute);
	}

	const MagicType4::BindingsMapType& MagicType4::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType4::BindID},
			{"Name", &MagicType4::BindName},
			{"Description", &MagicType4::BindDescription},
			{"BuffType", &MagicType4::BindBuffType},
			{"Radius", &MagicType4::BindRadius},
			{"Duration", &MagicType4::BindDuration},
			{"AttackSpeed", &MagicType4::BindAttackSpeed},
			{"Speed", &MagicType4::BindSpeed},
			{"AC", &MagicType4::BindArmor},
			{"ACPct", &MagicType4::BindArmorPercent},
			{"Attack", &MagicType4::BindAttackPower},
			{"MagicAttack", &MagicType4::BindMagicPower},
			{"MaxHP", &MagicType4::BindMaxHp},
			{"MaxHpPct", &MagicType4::BindMaxHpPercent},
			{"MaxMP", &MagicType4::BindMaxMp},
			{"MaxMpPct", &MagicType4::BindMaxMpPercent},
			{"HitRate", &MagicType4::BindHitRate},
			{"AvoidRate", &MagicType4::BindAvoidRate},
			{"Str", &MagicType4::BindStrength},
			{"Sta", &MagicType4::BindStamina},
			{"Dex", &MagicType4::BindDexterity},
			{"Intel", &MagicType4::BindIntelligence},
			{"Cha", &MagicType4::BindCharisma},
			{"FireR", &MagicType4::BindFireResist},
			{"ColdR", &MagicType4::BindColdResist},
			{"LightningR", &MagicType4::BindLightningResist},
			{"MagicR", &MagicType4::BindMagicResist},
			{"DiseaseR", &MagicType4::BindDiseaseResist},
			{"PoisonR", &MagicType4::BindPoisonResist},
			{"ExpPct", &MagicType4::BindExpPercent}
		};
		return bindingsMap;
	}

	void MagicType4::BindID(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType4::BindName(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void MagicType4::BindDescription(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void MagicType4::BindBuffType(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.BuffType);
	}

	void MagicType4::BindRadius(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType4::BindDuration(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType4::BindAttackSpeed(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackSpeed);
	}

	void MagicType4::BindSpeed(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	void MagicType4::BindArmor(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Armor);
	}

	void MagicType4::BindArmorPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ArmorPercent);
	}

	void MagicType4::BindAttackPower(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.AttackPower);
	}

	void MagicType4::BindMagicPower(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicPower);
	}

	void MagicType4::BindMaxHp(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	void MagicType4::BindMaxHpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHpPercent);
	}

	void MagicType4::BindMaxMp(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	void MagicType4::BindMaxMpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMpPercent);
	}

	void MagicType4::BindHitRate(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HitRate);
	}

	void MagicType4::BindAvoidRate(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AvoidRate);
	}

	void MagicType4::BindStrength(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Strength);
	}

	void MagicType4::BindStamina(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Stamina);
	}

	void MagicType4::BindDexterity(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Dexterity);
	}

	void MagicType4::BindIntelligence(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Intelligence);
	}

	void MagicType4::BindCharisma(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Charisma);
	}

	void MagicType4::BindFireResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.FireResist);
	}

	void MagicType4::BindColdResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ColdResist);
	}

	void MagicType4::BindLightningResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LightningResist);
	}

	void MagicType4::BindMagicResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MagicResist);
	}

	void MagicType4::BindDiseaseResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.DiseaseResist);
	}

	void MagicType4::BindPoisonResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.PoisonResist);
	}

	void MagicType4::BindExpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpPercent);
	}

	const MagicType5::BindingsMapType& MagicType5::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType5::BindID},
			{"Name", &MagicType5::BindName},
			{"Description", &MagicType5::BindDescription},
			{"Type", &MagicType5::BindType},
			{"ExpRecover", &MagicType5::BindExpRecover},
			{"NeedStone", &MagicType5::BindNeedStone}
		};
		return bindingsMap;
	}

	void MagicType5::BindID(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType5::BindName(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void MagicType5::BindDescription(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void MagicType5::BindType(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void MagicType5::BindExpRecover(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ExpRecover);
	}

	void MagicType5::BindNeedStone(full_model::MagicType5& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.NeedStone);
	}

	const MagicType6::BindingsMapType& MagicType6::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType6::BindID},
			{"Name", &MagicType6::BindName},
			{"Description", &MagicType6::BindDescription},
			{"Size", &MagicType6::BindSize},
			{"TransformID", &MagicType6::BindTransformId},
			{"Duration", &MagicType6::BindDuration},
			{"MaxHp", &MagicType6::BindMaxHp},
			{"MaxMp", &MagicType6::BindMaxMp},
			{"Speed", &MagicType6::BindSpeed},
			{"AttackSpeed", &MagicType6::BindAttackSpeed},
			{"TotalHit", &MagicType6::BindTotalHit},
			{"TotalAc", &MagicType6::BindTotalArmor},
			{"TotalHitRate", &MagicType6::BindTotalHitRate},
			{"TotalEvasionRate", &MagicType6::BindTotalEvasionRate},
			{"TotalFireR", &MagicType6::BindTotalFireResist},
			{"TotalColdR", &MagicType6::BindTotalColdResist},
			{"TotalLightningR", &MagicType6::BindTotalLightningResist},
			{"TotalMagicR", &MagicType6::BindTotalMagicResist},
			{"TotalDiseaseR", &MagicType6::BindTotalDiseaseResist},
			{"TotalPoisonR", &MagicType6::BindTotalPoisonResist},
			{"Class", &MagicType6::BindClass},
			{"UserSkillUse", &MagicType6::BindUserSkillUse},
			{"NeedItem", &MagicType6::BindNeedItem},
			{"SkillSuccessRate", &MagicType6::BindSkillSuccessRate},
			{"MonsterFriendly", &MagicType6::BindMonsterFriendly}
		};
		return bindingsMap;
	}

	void MagicType6::BindID(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType6::BindName(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void MagicType6::BindDescription(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void MagicType6::BindSize(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Size);
	}

	void MagicType6::BindTransformId(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TransformId);
	}

	void MagicType6::BindDuration(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType6::BindMaxHp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxHp);
	}

	void MagicType6::BindMaxMp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MaxMp);
	}

	void MagicType6::BindSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Speed);
	}

	void MagicType6::BindAttackSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AttackSpeed);
	}

	void MagicType6::BindTotalHit(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalHit);
	}

	void MagicType6::BindTotalArmor(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalArmor);
	}

	void MagicType6::BindTotalHitRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalHitRate);
	}

	void MagicType6::BindTotalEvasionRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalEvasionRate);
	}

	void MagicType6::BindTotalFireResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalFireResist);
	}

	void MagicType6::BindTotalColdResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalColdResist);
	}

	void MagicType6::BindTotalLightningResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalLightningResist);
	}

	void MagicType6::BindTotalMagicResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalMagicResist);
	}

	void MagicType6::BindTotalDiseaseResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalDiseaseResist);
	}

	void MagicType6::BindTotalPoisonResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.TotalPoisonResist);
	}

	void MagicType6::BindClass(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class);
	}

	void MagicType6::BindUserSkillUse(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.UserSkillUse);
	}

	void MagicType6::BindNeedItem(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NeedItem);
	}

	void MagicType6::BindSkillSuccessRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.SkillSuccessRate);
	}

	void MagicType6::BindMonsterFriendly(full_model::MagicType6& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.MonsterFriendly);
	}

	const MagicType7::BindingsMapType& MagicType7::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &MagicType7::BindID},
			{"strName", &MagicType7::BindName},
			{"strNote", &MagicType7::BindNote},
			{"byValidGroup", &MagicType7::BindValidGroup},
			{"byNatoinChange", &MagicType7::BindNationChange},
			{"shMonsterNum", &MagicType7::BindMonsterNumber},
			{"byTargetChange", &MagicType7::BindTargetChange},
			{"byStateChange", &MagicType7::BindStateChange},
			{"byRadius", &MagicType7::BindRadius},
			{"shHitrate", &MagicType7::BindHitRate},
			{"shDuration", &MagicType7::BindDuration},
			{"shDamage", &MagicType7::BindDamage},
			{"byVisoin", &MagicType7::BindVision},
			{"nNeedItem", &MagicType7::BindNeedItem}
		};
		return bindingsMap;
	}

	void MagicType7::BindID(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType7::BindName(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void MagicType7::BindNote(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Note);
	}

	void MagicType7::BindValidGroup(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	void MagicType7::BindNationChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	void MagicType7::BindMonsterNumber(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	void MagicType7::BindTargetChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	void MagicType7::BindStateChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	void MagicType7::BindRadius(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Radius);
	}

	void MagicType7::BindHitRate(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void MagicType7::BindDuration(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType7::BindDamage(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Damage);
	}

	void MagicType7::BindVision(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Vision);
	}

	void MagicType7::BindNeedItem(full_model::MagicType7& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	const MagicType8::BindingsMapType& MagicType8::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType8::BindID},
			{"Name", &MagicType8::BindName},
			{"Description", &MagicType8::BindDescription},
			{"Target", &MagicType8::BindTarget},
			{"Radius", &MagicType8::BindRadius},
			{"WarpType", &MagicType8::BindWarpType},
			{"ExpRecover", &MagicType8::BindExpRecover}
		};
		return bindingsMap;
	}

	void MagicType8::BindID(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType8::BindName(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void MagicType8::BindDescription(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void MagicType8::BindTarget(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Target);
	}

	void MagicType8::BindRadius(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Radius);
	}

	void MagicType8::BindWarpType(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.WarpType);
	}

	void MagicType8::BindExpRecover(full_model::MagicType8& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ExpRecover);
	}

	const MagicType9::BindingsMapType& MagicType9::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iNum", &MagicType9::BindID},
			{"Name", &MagicType9::BindName},
			{"Description", &MagicType9::BindDescription},
			{"ValidGroup", &MagicType9::BindValidGroup},
			{"NationChange", &MagicType9::BindNationChange},
			{"MonsterNum", &MagicType9::BindMonsterNumber},
			{"TargetChange", &MagicType9::BindTargetChange},
			{"StateChange", &MagicType9::BindStateChange},
			{"Radius", &MagicType9::BindRadius},
			{"Hitrate", &MagicType9::BindHitRate},
			{"Duration", &MagicType9::BindDuration},
			{"AddDamage", &MagicType9::BindAddDamage},
			{"Vision", &MagicType9::BindVision},
			{"NeedItem", &MagicType9::BindNeedItem}
		};
		return bindingsMap;
	}

	void MagicType9::BindID(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ID);
	}

	void MagicType9::BindName(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Name);
	}

	void MagicType9::BindDescription(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Description);
	}

	void MagicType9::BindValidGroup(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ValidGroup);
	}

	void MagicType9::BindNationChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.NationChange);
	}

	void MagicType9::BindMonsterNumber(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterNumber);
	}

	void MagicType9::BindTargetChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.TargetChange);
	}

	void MagicType9::BindStateChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StateChange);
	}

	void MagicType9::BindRadius(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Radius);
	}

	void MagicType9::BindHitRate(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HitRate);
	}

	void MagicType9::BindDuration(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Duration);
	}

	void MagicType9::BindAddDamage(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.AddDamage);
	}

	void MagicType9::BindVision(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Vision);
	}

	void MagicType9::BindNeedItem(full_model::MagicType9& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.NeedItem);
	}

	const MakeDefensive::BindingsMapType& MakeDefensive::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevel", &MakeDefensive::BindLevel},
			{"sClass_1", &MakeDefensive::BindClass1},
			{"sClass_2", &MakeDefensive::BindClass2},
			{"sClass_3", &MakeDefensive::BindClass3},
			{"sClass_4", &MakeDefensive::BindClass4},
			{"sClass_5", &MakeDefensive::BindClass5},
			{"sClass_6", &MakeDefensive::BindClass6},
			{"sClass_7", &MakeDefensive::BindClass7}
		};
		return bindingsMap;
	}

	void MakeDefensive::BindLevel(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void MakeDefensive::BindClass1(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class1);
	}

	void MakeDefensive::BindClass2(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class2);
	}

	void MakeDefensive::BindClass3(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class3);
	}

	void MakeDefensive::BindClass4(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class4);
	}

	void MakeDefensive::BindClass5(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class5);
	}

	void MakeDefensive::BindClass6(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class6);
	}

	void MakeDefensive::BindClass7(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class7);
	}

	const MakeItem::BindingsMapType& MakeItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MakeItem::BindIndex},
			{"strItemInfo", &MakeItem::BindItemInfo},
			{"iItemCode", &MakeItem::BindItemCode},
			{"byItemLevel", &MakeItem::BindItemLevel}
		};
		return bindingsMap;
	}

	void MakeItem::BindIndex(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void MakeItem::BindItemInfo(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ItemInfo);
	}

	void MakeItem::BindItemCode(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemCode);
	}

	void MakeItem::BindItemLevel(full_model::MakeItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemLevel);
	}

	const MakeItemGradeCode::BindingsMapType& MakeItemGradeCode::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byItemIndex", &MakeItemGradeCode::BindItemIndex},
			{"byGrade_1", &MakeItemGradeCode::BindGrade1},
			{"byGrade_2", &MakeItemGradeCode::BindGrade2},
			{"byGrade_3", &MakeItemGradeCode::BindGrade3},
			{"byGrade_4", &MakeItemGradeCode::BindGrade4},
			{"byGrade_5", &MakeItemGradeCode::BindGrade5},
			{"byGrade_6", &MakeItemGradeCode::BindGrade6},
			{"byGrade_7", &MakeItemGradeCode::BindGrade7},
			{"byGrade_8", &MakeItemGradeCode::BindGrade8},
			{"byGrade_9", &MakeItemGradeCode::BindGrade9}
		};
		return bindingsMap;
	}

	void MakeItemGradeCode::BindItemIndex(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemIndex);
	}

	void MakeItemGradeCode::BindGrade1(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[0]);
	}

	void MakeItemGradeCode::BindGrade2(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[1]);
	}

	void MakeItemGradeCode::BindGrade3(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[2]);
	}

	void MakeItemGradeCode::BindGrade4(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[3]);
	}

	void MakeItemGradeCode::BindGrade5(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[4]);
	}

	void MakeItemGradeCode::BindGrade6(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[5]);
	}

	void MakeItemGradeCode::BindGrade7(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[6]);
	}

	void MakeItemGradeCode::BindGrade8(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[7]);
	}

	void MakeItemGradeCode::BindGrade9(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Grade[8]);
	}

	const MakeItemGroup::BindingsMapType& MakeItemGroup::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"iItemGroupNum", &MakeItemGroup::BindItemGroupNumber},
			{"iItem_1", &MakeItemGroup::BindItem1},
			{"iItem_2", &MakeItemGroup::BindItem2},
			{"iItem_3", &MakeItemGroup::BindItem3},
			{"iItem_4", &MakeItemGroup::BindItem4},
			{"iItem_5", &MakeItemGroup::BindItem5},
			{"iItem_6", &MakeItemGroup::BindItem6},
			{"iItem_7", &MakeItemGroup::BindItem7},
			{"iItem_8", &MakeItemGroup::BindItem8},
			{"iItem_9", &MakeItemGroup::BindItem9},
			{"iItem_10", &MakeItemGroup::BindItem10},
			{"iItem_11", &MakeItemGroup::BindItem11},
			{"iItem_12", &MakeItemGroup::BindItem12},
			{"iItem_13", &MakeItemGroup::BindItem13},
			{"iItem_14", &MakeItemGroup::BindItem14},
			{"iItem_15", &MakeItemGroup::BindItem15},
			{"iItem_16", &MakeItemGroup::BindItem16},
			{"iItem_17", &MakeItemGroup::BindItem17},
			{"iItem_18", &MakeItemGroup::BindItem18},
			{"iItem_19", &MakeItemGroup::BindItem19},
			{"iItem_20", &MakeItemGroup::BindItem20},
			{"iItem_21", &MakeItemGroup::BindItem21},
			{"iItem_22", &MakeItemGroup::BindItem22},
			{"iItem_23", &MakeItemGroup::BindItem23},
			{"iItem_24", &MakeItemGroup::BindItem24},
			{"iItem_25", &MakeItemGroup::BindItem25},
			{"iItem_26", &MakeItemGroup::BindItem26},
			{"iItem_27", &MakeItemGroup::BindItem27},
			{"iItem_28", &MakeItemGroup::BindItem28},
			{"iItem_29", &MakeItemGroup::BindItem29},
			{"iItem_30", &MakeItemGroup::BindItem30}
		};
		return bindingsMap;
	}

	void MakeItemGroup::BindItemGroupNumber(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemGroupNumber);
	}

	void MakeItemGroup::BindItem1(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[0]);
	}

	void MakeItemGroup::BindItem2(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[1]);
	}

	void MakeItemGroup::BindItem3(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[2]);
	}

	void MakeItemGroup::BindItem4(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[3]);
	}

	void MakeItemGroup::BindItem5(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[4]);
	}

	void MakeItemGroup::BindItem6(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[5]);
	}

	void MakeItemGroup::BindItem7(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[6]);
	}

	void MakeItemGroup::BindItem8(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[7]);
	}

	void MakeItemGroup::BindItem9(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[8]);
	}

	void MakeItemGroup::BindItem10(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[9]);
	}

	void MakeItemGroup::BindItem11(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[10]);
	}

	void MakeItemGroup::BindItem12(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[11]);
	}

	void MakeItemGroup::BindItem13(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[12]);
	}

	void MakeItemGroup::BindItem14(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[13]);
	}

	void MakeItemGroup::BindItem15(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[14]);
	}

	void MakeItemGroup::BindItem16(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[15]);
	}

	void MakeItemGroup::BindItem17(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[16]);
	}

	void MakeItemGroup::BindItem18(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[17]);
	}

	void MakeItemGroup::BindItem19(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[18]);
	}

	void MakeItemGroup::BindItem20(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[19]);
	}

	void MakeItemGroup::BindItem21(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[20]);
	}

	void MakeItemGroup::BindItem22(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[21]);
	}

	void MakeItemGroup::BindItem23(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[22]);
	}

	void MakeItemGroup::BindItem24(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[23]);
	}

	void MakeItemGroup::BindItem25(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[24]);
	}

	void MakeItemGroup::BindItem26(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[25]);
	}

	void MakeItemGroup::BindItem27(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[26]);
	}

	void MakeItemGroup::BindItem28(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[27]);
	}

	void MakeItemGroup::BindItem29(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[28]);
	}

	void MakeItemGroup::BindItem30(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Item[29]);
	}

	const MakeItemRareCode::BindingsMapType& MakeItemRareCode::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevelGrade", &MakeItemRareCode::BindLevelGrade},
			{"sUpgradeItem", &MakeItemRareCode::BindUpgradeItem},
			{"sLareItem", &MakeItemRareCode::BindRareItem},
			{"sMagicItem", &MakeItemRareCode::BindMagicItem},
			{"sGereralItem", &MakeItemRareCode::BindGeneralItem}
		};
		return bindingsMap;
	}

	void MakeItemRareCode::BindLevelGrade(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelGrade);
	}

	void MakeItemRareCode::BindUpgradeItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.UpgradeItem);
	}

	void MakeItemRareCode::BindRareItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RareItem);
	}

	void MakeItemRareCode::BindMagicItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MagicItem);
	}

	void MakeItemRareCode::BindGeneralItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.GeneralItem);
	}

	const MakeWeapon::BindingsMapType& MakeWeapon::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"byLevel", &MakeWeapon::BindLevel},
			{"sClass_1", &MakeWeapon::BindClass1},
			{"sClass_2", &MakeWeapon::BindClass2},
			{"sClass_3", &MakeWeapon::BindClass3},
			{"sClass_4", &MakeWeapon::BindClass4},
			{"sClass_5", &MakeWeapon::BindClass5},
			{"sClass_6", &MakeWeapon::BindClass6},
			{"sClass_7", &MakeWeapon::BindClass7},
			{"sClass_8", &MakeWeapon::BindClass8},
			{"sClass_9", &MakeWeapon::BindClass9},
			{"sClass_10", &MakeWeapon::BindClass10},
			{"sClass_11", &MakeWeapon::BindClass11},
			{"sClass_12", &MakeWeapon::BindClass12}
		};
		return bindingsMap;
	}

	void MakeWeapon::BindLevel(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void MakeWeapon::BindClass1(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[0]);
	}

	void MakeWeapon::BindClass2(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[1]);
	}

	void MakeWeapon::BindClass3(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[2]);
	}

	void MakeWeapon::BindClass4(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[3]);
	}

	void MakeWeapon::BindClass5(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[4]);
	}

	void MakeWeapon::BindClass6(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[5]);
	}

	void MakeWeapon::BindClass7(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[6]);
	}

	void MakeWeapon::BindClass8(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[7]);
	}

	void MakeWeapon::BindClass9(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[8]);
	}

	void MakeWeapon::BindClass10(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[9]);
	}

	void MakeWeapon::BindClass11(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[10]);
	}

	void MakeWeapon::BindClass12(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class[11]);
	}

	const MonsterChallenge::BindingsMapType& MonsterChallenge::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterChallenge::BindIndex},
			{"bStartTime1", &MonsterChallenge::BindStartTime1},
			{"bStartTime2", &MonsterChallenge::BindStartTime2},
			{"bStartTime3", &MonsterChallenge::BindStartTime3},
			{"bLevelMin", &MonsterChallenge::BindLevelMin},
			{"bLevelMax", &MonsterChallenge::BindLevelMax}
		};
		return bindingsMap;
	}

	void MonsterChallenge::BindIndex(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void MonsterChallenge::BindStartTime1(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime1);
	}

	void MonsterChallenge::BindStartTime2(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime2);
	}

	void MonsterChallenge::BindStartTime3(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StartTime3);
	}

	void MonsterChallenge::BindLevelMin(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelMin);
	}

	void MonsterChallenge::BindLevelMax(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.LevelMax);
	}

	const MonsterChallengeSummonList::BindingsMapType& MonsterChallengeSummonList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterChallengeSummonList::BindIndex},
			{"bLevel", &MonsterChallengeSummonList::BindLevel},
			{"bStage", &MonsterChallengeSummonList::BindStage},
			{"bStageLevel", &MonsterChallengeSummonList::BindStageLevel},
			{"sTime", &MonsterChallengeSummonList::BindTime},
			{"sSid", &MonsterChallengeSummonList::BindMonsterId},
			{"sCount", &MonsterChallengeSummonList::BindCount},
			{"sPosX", &MonsterChallengeSummonList::BindPosX},
			{"sPosZ", &MonsterChallengeSummonList::BindPosZ},
			{"bRange", &MonsterChallengeSummonList::BindRange}
		};
		return bindingsMap;
	}

	void MonsterChallengeSummonList::BindIndex(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void MonsterChallengeSummonList::BindLevel(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void MonsterChallengeSummonList::BindStage(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Stage);
	}

	void MonsterChallengeSummonList::BindStageLevel(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StageLevel);
	}

	void MonsterChallengeSummonList::BindTime(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Time);
	}

	void MonsterChallengeSummonList::BindMonsterId(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	void MonsterChallengeSummonList::BindCount(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Count);
	}

	void MonsterChallengeSummonList::BindPosX(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PosX);
	}

	void MonsterChallengeSummonList::BindPosZ(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.PosZ);
	}

	void MonsterChallengeSummonList::BindRange(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Range);
	}

	const MonsterItemTest::BindingsMapType& MonsterItemTest::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sIndex", &MonsterItemTest::BindIndex},
			{"iItem01", &MonsterItemTest::BindItem1},
			{"sPersent01", &MonsterItemTest::BindPercent1},
			{"iItem02", &MonsterItemTest::BindItem2},
			{"sPersent02", &MonsterItemTest::BindPercent2},
			{"iItem03", &MonsterItemTest::BindItem3},
			{"sPersent03", &MonsterItemTest::BindPercent3},
			{"iItem04", &MonsterItemTest::BindItem4},
			{"sPersent04", &MonsterItemTest::BindPercent4},
			{"iItem05", &MonsterItemTest::BindItem5},
			{"sPersent05", &MonsterItemTest::BindPercent5}
		};
		return bindingsMap;
	}

	void MonsterItemTest::BindIndex(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void MonsterItemTest::BindItem1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item1);
	}

	void MonsterItemTest::BindPercent1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent1);
	}

	void MonsterItemTest::BindItem2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item2);
	}

	void MonsterItemTest::BindPercent2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent2);
	}

	void MonsterItemTest::BindItem3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item3);
	}

	void MonsterItemTest::BindPercent3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent3);
	}

	void MonsterItemTest::BindItem4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item4);
	}

	void MonsterItemTest::BindPercent4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent4);
	}

	void MonsterItemTest::BindItem5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Item5);
	}

	void MonsterItemTest::BindPercent5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Percent5);
	}

	const MonsterSummonList::BindingsMapType& MonsterSummonList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"sSid", &MonsterSummonList::BindMonsterId},
			{"strName", &MonsterSummonList::BindName},
			{"sLevel", &MonsterSummonList::BindLevel},
			{"sProbability", &MonsterSummonList::BindProbability},
			{"bType", &MonsterSummonList::BindType}
		};
		return bindingsMap;
	}

	void MonsterSummonList::BindMonsterId(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.MonsterId);
	}

	void MonsterSummonList::BindName(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void MonsterSummonList::BindLevel(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Level);
	}

	void MonsterSummonList::BindProbability(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Probability);
	}

	void MonsterSummonList::BindType(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	const ProgramListLog::BindingsMapType& ProgramListLog::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"id", &ProgramListLog::BindId},
			{"strAccountID", &ProgramListLog::BindAccountId},
			{"strCharID", &ProgramListLog::BindCharId},
			{"strHackToolName", &ProgramListLog::BindHackToolName},
			{"tWriteTime", &ProgramListLog::BindWriteTime}
		};
		return bindingsMap;
	}

	void ProgramListLog::BindId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Id);
	}

	void ProgramListLog::BindAccountId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void ProgramListLog::BindCharId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void ProgramListLog::BindHackToolName(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.HackToolName);
	}

	void ProgramListLog::BindWriteTime(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.WriteTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	const RentalItem::BindingsMapType& RentalItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRentalIndex", &RentalItem::BindRentalIndex},
			{"nItemIndex", &RentalItem::BindItemIndex},
			{"sDurability", &RentalItem::BindDurability},
			{"nSerialNumber", &RentalItem::BindSerialNumber},
			{"byRegType", &RentalItem::BindRegType},
			{"byItemType", &RentalItem::BindItemType},
			{"byClass", &RentalItem::BindClass},
			{"sRentalTime", &RentalItem::BindRentalTime},
			{"nRentalMoney", &RentalItem::BindRentalMoney},
			{"strLenderCharID", &RentalItem::BindLenderCharId},
			{"strLenderAcID", &RentalItem::BindLenderAccountId},
			{"strBorrowerCharID", &RentalItem::BindBorrowerCharId},
			{"strBorrowerAcID", &RentalItem::BindBorrowerAccountId},
			{"timeLender", &RentalItem::BindLendTime},
			{"timeRegister", &RentalItem::BindRegisterTime}
		};
		return bindingsMap;
	}

	void RentalItem::BindRentalIndex(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalIndex);
	}

	void RentalItem::BindItemIndex(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemIndex);
	}

	void RentalItem::BindDurability(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	void RentalItem::BindSerialNumber(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.SerialNumber);
	}

	void RentalItem::BindRegType(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegType);
	}

	void RentalItem::BindItemType(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemType);
	}

	void RentalItem::BindClass(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Class);
	}

	void RentalItem::BindRentalTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RentalTime);
	}

	void RentalItem::BindRentalMoney(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalMoney);
	}

	void RentalItem::BindLenderCharId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderCharId);
	}

	void RentalItem::BindLenderAccountId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderAccountId);
	}

	void RentalItem::BindBorrowerCharId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerCharId);
	}

	void RentalItem::BindBorrowerAccountId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerAccountId);
	}

	void RentalItem::BindLendTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.LendTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.LendTime.reset();
	}

	void RentalItem::BindRegisterTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.RegisterTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	const RentalItemList::BindingsMapType& RentalItemList::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRentalIndex", &RentalItemList::BindRentalIndex},
			{"nItemIndex", &RentalItemList::BindItemIndex},
			{"sDurability", &RentalItemList::BindDurability},
			{"nSerialNumber", &RentalItemList::BindSerialNumber},
			{"byRegType", &RentalItemList::BindRegType},
			{"byItemType", &RentalItemList::BindItemType},
			{"byClass", &RentalItemList::BindClass},
			{"sRentalTime", &RentalItemList::BindRentalTime},
			{"nRentalMoney", &RentalItemList::BindRentalMoney},
			{"strLenderCharID", &RentalItemList::BindLenderCharId},
			{"strLenderAcID", &RentalItemList::BindLenderAccountId},
			{"strBorrowerCharID", &RentalItemList::BindBorrowerCharId},
			{"strBorrowerAcID", &RentalItemList::BindBorrowerAccountId},
			{"timeLender", &RentalItemList::BindLendTime},
			{"timeRegister", &RentalItemList::BindRegisterTime}
		};
		return bindingsMap;
	}

	void RentalItemList::BindRentalIndex(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalIndex);
	}

	void RentalItemList::BindItemIndex(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemIndex);
	}

	void RentalItemList::BindDurability(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	void RentalItemList::BindSerialNumber(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.SerialNumber);
	}

	void RentalItemList::BindRegType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegType);
	}

	void RentalItemList::BindItemType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ItemType);
	}

	void RentalItemList::BindClass(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Class);
	}

	void RentalItemList::BindRentalTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RentalTime);
	}

	void RentalItemList::BindRentalMoney(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalMoney);
	}

	void RentalItemList::BindLenderCharId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderCharId);
	}

	void RentalItemList::BindLenderAccountId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.LenderAccountId);
	}

	void RentalItemList::BindBorrowerCharId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerCharId);
	}

	void RentalItemList::BindBorrowerAccountId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.BorrowerAccountId);
	}

	void RentalItemList::BindLendTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.LendTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.LendTime.reset();
	}

	void RentalItemList::BindRegisterTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.RegisterTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	const ServerResource::BindingsMapType& ServerResource::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nResourceID", &ServerResource::BindResourceId},
			{"strName", &ServerResource::BindName},
			{"strResource", &ServerResource::BindResource}
		};
		return bindingsMap;
	}

	void ServerResource::BindResourceId(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ResourceId);
	}

	void ServerResource::BindName(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void ServerResource::BindResource(full_model::ServerResource& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Resource);
	}

	const StartPosition::BindingsMapType& StartPosition::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ZoneID", &StartPosition::BindZoneId},
			{"sKarusX", &StartPosition::BindKarusX},
			{"sKarusZ", &StartPosition::BindKarusZ},
			{"sElmoradX", &StartPosition::BindElmoX},
			{"sElmoradZ", &StartPosition::BindElmoZ},
			{"bRangeX", &StartPosition::BindRangeX},
			{"bRangeZ", &StartPosition::BindRangeZ},
			{"sKarusGateX", &StartPosition::BindKarusGateX},
			{"sKarusGateZ", &StartPosition::BindKarusGateZ},
			{"sElmoGateX", &StartPosition::BindElmoGateX},
			{"sElmoGateZ", &StartPosition::BindElmoGateZ}
		};
		return bindingsMap;
	}

	void StartPosition::BindZoneId(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	void StartPosition::BindKarusX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusX);
	}

	void StartPosition::BindKarusZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusZ);
	}

	void StartPosition::BindElmoX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoX);
	}

	void StartPosition::BindElmoZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoZ);
	}

	void StartPosition::BindRangeX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RangeX);
	}

	void StartPosition::BindRangeZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RangeZ);
	}

	void StartPosition::BindKarusGateX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusGateX);
	}

	void StartPosition::BindKarusGateZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusGateZ);
	}

	void StartPosition::BindElmoGateX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoGateX);
	}

	void StartPosition::BindElmoGateZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoGateZ);
	}

	const TbUser::BindingsMapType& TbUser::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &TbUser::BindAccountId},
			{"strPasswd", &TbUser::BindPassword},
			{"strSocNo", &TbUser::BindSocNo},
			{"strEmail", &TbUser::BindEmail},
			{"strAuthority", &TbUser::BindAuthority},
			{"PremiumExpire", &TbUser::BindPremiumExpire}
		};
		return bindingsMap;
	}

	void TbUser::BindAccountId(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void TbUser::BindPassword(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Password);
	}

	void TbUser::BindSocNo(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.SocNo);
	}

	void TbUser::BindEmail(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Email);
	}

	void TbUser::BindAuthority(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Authority);
	}

	void TbUser::BindPremiumExpire(full_model::TbUser& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.PremiumExpire = binderUtil::CTimeFromDbTime(tmpValue);
	}

	const UserEditor::BindingsMapType& UserEditor::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strCharID", &UserEditor::BindCharId},
			{"strAccountID", &UserEditor::BindAccountId},
			{"strOpID", &UserEditor::BindOpId},
			{"strOpIP", &UserEditor::BindOpIP},
			{"strOldUserValue", &UserEditor::BindOldUserValue},
			{"strNewUserValue", &UserEditor::BindNewUserValue},
			{"strOldUserSkill", &UserEditor::BindOldUserSkill},
			{"strNewUserSkill", &UserEditor::BindNewUserSkill},
			{"strOldUserItem", &UserEditor::BindOldUserItem},
			{"strNewUserItem", &UserEditor::BindNewUserItem},
			{"strOldWHValue", &UserEditor::BindOldWarehouseValue},
			{"strNewWHValue", &UserEditor::BindNewWarehouseValue},
			{"strOldWHItem", &UserEditor::BindOldWarehouseItem},
			{"strNewWHItem", &UserEditor::BindNewWarehouseItem},
			{"EditorTime", &UserEditor::BindEditorTime}
		};
		return bindingsMap;
	}

	void UserEditor::BindCharId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void UserEditor::BindAccountId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void UserEditor::BindOpId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.OpId);
	}

	void UserEditor::BindOpIP(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.OpIP);
	}

	void UserEditor::BindOldUserValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserValue);
	}

	void UserEditor::BindNewUserValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserValue);
	}

	void UserEditor::BindOldUserSkill(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserSkill);
	}

	void UserEditor::BindNewUserSkill(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserSkill);
	}

	void UserEditor::BindOldUserItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldUserItem);
	}

	void UserEditor::BindNewUserItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewUserItem);
	}

	void UserEditor::BindOldWarehouseValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseValue);
	}

	void UserEditor::BindNewWarehouseValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseValue);
	}

	void UserEditor::BindOldWarehouseItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.OldWarehouseItem);
	}

	void UserEditor::BindNewWarehouseItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.NewWarehouseItem);
	}

	void UserEditor::BindEditorTime(full_model::UserEditor& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.EditorTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	const UserEditorItem::BindingsMapType& UserEditorItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strCharID", &UserEditorItem::BindCharId},
			{"strAccountID", &UserEditorItem::BindAccountId},
			{"strOpID", &UserEditorItem::BindOpId},
			{"strOpIP", &UserEditorItem::BindOpIP},
			{"sDBIndex", &UserEditorItem::BindDbIndex},
			{"sPos", &UserEditorItem::BindPos},
			{"byType", &UserEditorItem::BindType},
			{"nItemID1", &UserEditorItem::BindItemId1},
			{"nItemID2", &UserEditorItem::BindItemId2},
			{"UpdateTime", &UserEditorItem::BindUpdateTime}
		};
		return bindingsMap;
	}

	void UserEditorItem::BindCharId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void UserEditorItem::BindAccountId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void UserEditorItem::BindOpId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.OpId);
	}

	void UserEditorItem::BindOpIP(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.OpIP);
	}

	void UserEditorItem::BindDbIndex(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DbIndex);
	}

	void UserEditorItem::BindPos(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Pos);
	}

	void UserEditorItem::BindType(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void UserEditorItem::BindItemId1(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId1);
	}

	void UserEditorItem::BindItemId2(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId2);
	}

	void UserEditorItem::BindUpdateTime(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.UpdateTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.UpdateTime.reset();
	}

	const UserKnightsRank::BindingsMapType& UserKnightsRank::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"shIndex", &UserKnightsRank::BindIndex},
			{"strName", &UserKnightsRank::BindName},
			{"strElmoUserID", &UserKnightsRank::BindElmoUserId},
			{"strElmoKnightsName", &UserKnightsRank::BindElmoKnightsName},
			{"nElmoLoyalty", &UserKnightsRank::BindElmoLoyalty},
			{"strKarusUserID", &UserKnightsRank::BindKarusUserId},
			{"strKarusKnightsName", &UserKnightsRank::BindKarusKnightsName},
			{"nKarusLoyalty", &UserKnightsRank::BindKarusLoyalty},
			{"nMoney", &UserKnightsRank::BindMoney},
			{"isClaimedElmo", &UserKnightsRank::BindIsClaimedElmo},
			{"isClaimedKarus", &UserKnightsRank::BindIsClaimedKarus}
		};
		return bindingsMap;
	}

	void UserKnightsRank::BindIndex(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Index);
	}

	void UserKnightsRank::BindName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void UserKnightsRank::BindElmoUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
	}

	void UserKnightsRank::BindElmoKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoKnightsName);
	}

	void UserKnightsRank::BindElmoLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ElmoLoyalty);
	}

	void UserKnightsRank::BindKarusUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
	}

	void UserKnightsRank::BindKarusKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusKnightsName);
	}

	void UserKnightsRank::BindKarusLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.KarusLoyalty);
	}

	void UserKnightsRank::BindMoney(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	void UserKnightsRank::BindIsClaimedElmo(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IsClaimedElmo);
	}

	void UserKnightsRank::BindIsClaimedKarus(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IsClaimedKarus);
	}

	const UserPersonalRank::BindingsMapType& UserPersonalRank::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nRank", &UserPersonalRank::BindRank},
			{"strPosition", &UserPersonalRank::BindPosition},
			{"nElmoUP", &UserPersonalRank::BindElmoUp},
			{"strElmoUserID", &UserPersonalRank::BindElmoUserId},
			{"nElmoLoyaltyMonthly", &UserPersonalRank::BindElmoLoyaltyMonthly},
			{"nElmoCheck", &UserPersonalRank::BindElmoCheck},
			{"nKarusUP", &UserPersonalRank::BindKarusUp},
			{"strKarusUserID", &UserPersonalRank::BindKarusUserId},
			{"nKarusLoyaltyMonthly", &UserPersonalRank::BindKarusLoyaltyMonthly},
			{"nKarusCheck", &UserPersonalRank::BindKarusCheck},
			{"nSalary", &UserPersonalRank::BindSalary},
			{"UpdateDate", &UserPersonalRank::BindUpdateDate},
			{"isClaimedElmo", &UserPersonalRank::BindIsClaimedElmo},
			{"isClaimedKarus", &UserPersonalRank::BindIsClaimedKarus}
		};
		return bindingsMap;
	}

	void UserPersonalRank::BindRank(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Rank);
	}

	void UserPersonalRank::BindPosition(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Position);
	}

	void UserPersonalRank::BindElmoUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ElmoUp);
	}

	void UserPersonalRank::BindElmoUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ElmoUserId);
	}

	void UserPersonalRank::BindElmoLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.ElmoLoyaltyMonthly);
	}

	void UserPersonalRank::BindElmoCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ElmoCheck);
	}

	void UserPersonalRank::BindKarusUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KarusUp);
	}

	void UserPersonalRank::BindKarusUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.KarusUserId);
	}

	void UserPersonalRank::BindKarusLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.KarusLoyaltyMonthly);
	}

	void UserPersonalRank::BindKarusCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.KarusCheck);
	}

	void UserPersonalRank::BindSalary(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Salary);
	}

	void UserPersonalRank::BindUpdateDate(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.UpdateDate = binderUtil::CTimeFromDbTime(tmpValue);
	}

	void UserPersonalRank::BindIsClaimedElmo(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IsClaimedElmo);
	}

	void UserPersonalRank::BindIsClaimedKarus(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.IsClaimedKarus);
	}

	const UserRentalItem::BindingsMapType& UserRentalItem::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserID", &UserRentalItem::BindUserId},
			{"strAccountID", &UserRentalItem::BindAccountId},
			{"byRentalType", &UserRentalItem::BindRentalType},
			{"byRegType", &UserRentalItem::BindRegTime},
			{"nRentalIndex", &UserRentalItem::BindRentalIndex},
			{"nItemIndex", &UserRentalItem::BindItemIndex},
			{"sDurability", &UserRentalItem::BindDurability},
			{"nSerialNumber", &UserRentalItem::BindSerialNumber},
			{"nRentalMoney", &UserRentalItem::BindRentalMoney},
			{"sRentalTime", &UserRentalItem::BindRentalTime},
			{"sDuringTime", &UserRentalItem::BindDuringTime},
			{"timeRental", &UserRentalItem::BindRentalTimestamp},
			{"timeRegister", &UserRentalItem::BindRegisterTime}
		};
		return bindingsMap;
	}

	void UserRentalItem::BindUserId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	void UserRentalItem::BindAccountId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void UserRentalItem::BindRentalType(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RentalType);
	}

	void UserRentalItem::BindRegTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RegTime);
	}

	void UserRentalItem::BindRentalIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalIndex);
	}

	void UserRentalItem::BindItemIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemIndex);
	}

	void UserRentalItem::BindDurability(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Durability);
	}

	void UserRentalItem::BindSerialNumber(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int64_t>(colIndex, m.SerialNumber);
	}

	void UserRentalItem::BindRentalMoney(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.RentalMoney);
	}

	void UserRentalItem::BindRentalTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.RentalTime);
	}

	void UserRentalItem::BindDuringTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.DuringTime);
	}

	void UserRentalItem::BindRentalTimestamp(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.RentalTimestamp = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.RentalTimestamp.reset();
	}

	void UserRentalItem::BindRegisterTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.RegisterTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.RegisterTime.reset();
	}

	const UserSavedMagic::BindingsMapType& UserSavedMagic::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strCharID", &UserSavedMagic::BindCharId},
			{"nSkill1", &UserSavedMagic::BindSkill1},
			{"nDuring1", &UserSavedMagic::BindDuring1},
			{"nSkill2", &UserSavedMagic::BindSkill2},
			{"nDuring2", &UserSavedMagic::BindDuring2},
			{"nSkill3", &UserSavedMagic::BindSkill3},
			{"nDuring3", &UserSavedMagic::BindDuring3},
			{"nSkill4", &UserSavedMagic::BindSkill4},
			{"nDuring4", &UserSavedMagic::BindDuring4},
			{"nSkill5", &UserSavedMagic::BindSkill5},
			{"nDuring5", &UserSavedMagic::BindDuring5},
			{"nSkill6", &UserSavedMagic::BindSkill6},
			{"nDuring6", &UserSavedMagic::BindDuring6},
			{"nSkill7", &UserSavedMagic::BindSkill7},
			{"nDuring7", &UserSavedMagic::BindDuring7},
			{"nSkill8", &UserSavedMagic::BindSkill8},
			{"nDuring8", &UserSavedMagic::BindDuring8},
			{"nSkill9", &UserSavedMagic::BindSkill9},
			{"nDuring9", &UserSavedMagic::BindDuring9},
			{"nSkill10", &UserSavedMagic::BindSkill10},
			{"nDuring10", &UserSavedMagic::BindDuring10}
		};
		return bindingsMap;
	}

	void UserSavedMagic::BindCharId(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void UserSavedMagic::BindSkill1(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill1);
	}

	void UserSavedMagic::BindDuring1(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During1);
	}

	void UserSavedMagic::BindSkill2(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill2);
	}

	void UserSavedMagic::BindDuring2(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During2);
	}

	void UserSavedMagic::BindSkill3(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill3);
	}

	void UserSavedMagic::BindDuring3(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During3);
	}

	void UserSavedMagic::BindSkill4(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill4);
	}

	void UserSavedMagic::BindDuring4(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During4);
	}

	void UserSavedMagic::BindSkill5(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill5);
	}

	void UserSavedMagic::BindDuring5(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During5);
	}

	void UserSavedMagic::BindSkill6(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill6);
	}

	void UserSavedMagic::BindDuring6(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During6);
	}

	void UserSavedMagic::BindSkill7(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill7);
	}

	void UserSavedMagic::BindDuring7(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During7);
	}

	void UserSavedMagic::BindSkill8(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill8);
	}

	void UserSavedMagic::BindDuring8(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During8);
	}

	void UserSavedMagic::BindSkill9(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill9);
	}

	void UserSavedMagic::BindDuring9(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During9);
	}

	void UserSavedMagic::BindSkill10(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Skill10);
	}

	void UserSavedMagic::BindDuring10(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.During10);
	}

	const UserData::BindingsMapType& UserData::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strUserId", &UserData::BindUserId},
			{"Nation", &UserData::BindNation},
			{"Race", &UserData::BindRace},
			{"Class", &UserData::BindClass},
			{"HairColor", &UserData::BindHairColor},
			{"Rank", &UserData::BindRank},
			{"Title", &UserData::BindTitle},
			{"Level", &UserData::BindLevel},
			{"Exp", &UserData::BindExp},
			{"Loyalty", &UserData::BindLoyalty},
			{"Face", &UserData::BindFace},
			{"City", &UserData::BindCity},
			{"Knights", &UserData::BindKnightsId},
			{"Fame", &UserData::BindFame},
			{"Hp", &UserData::BindHp},
			{"Mp", &UserData::BindMp},
			{"Sp", &UserData::BindSp},
			{"Strong", &UserData::BindStrength},
			{"Sta", &UserData::BindStamina},
			{"Dex", &UserData::BindDexterity},
			{"Intel", &UserData::BindIntelligence},
			{"Cha", &UserData::BindCharisma},
			{"Authority", &UserData::BindAuthority},
			{"Points", &UserData::BindStatPoints},
			{"Gold", &UserData::BindGold},
			{"Zone", &UserData::BindZone},
			{"Bind", &UserData::BindBind},
			{"PX", &UserData::BindPosX},
			{"PZ", &UserData::BindPosZ},
			{"PY", &UserData::BindPosY},
			{"dwTime", &UserData::BindDwTime},
			{"strSkill", &UserData::BindSkillData},
			{"strItem", &UserData::BindItemData},
			{"strSerial", &UserData::BindSerial},
			{"sQuestCount", &UserData::BindQuestCount},
			{"strQuest", &UserData::BindQuestData},
			{"MannerPoint", &UserData::BindMannerPoint},
			{"LoyaltyMonthly", &UserData::BindLoyaltyMonthly},
			{"CreateTime", &UserData::BindCreateTime},
			{"UpdateTime", &UserData::BindUpdateTime}
		};
		return bindingsMap;
	}

	void UserData::BindUserId(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.UserId);
	}

	void UserData::BindNation(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Nation);
	}

	void UserData::BindRace(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Race);
	}

	void UserData::BindClass(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Class);
	}

	void UserData::BindHairColor(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.HairColor);
	}

	void UserData::BindRank(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Rank);
	}

	void UserData::BindTitle(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Title);
	}

	void UserData::BindLevel(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Level);
	}

	void UserData::BindExp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Exp);
	}

	void UserData::BindLoyalty(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Loyalty);
	}

	void UserData::BindFace(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Face);
	}

	void UserData::BindCity(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.City);
	}

	void UserData::BindKnightsId(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.KnightsId);
	}

	void UserData::BindFame(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Fame);
	}

	void UserData::BindHp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Hp);
	}

	void UserData::BindMp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Mp);
	}

	void UserData::BindSp(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Sp);
	}

	void UserData::BindStrength(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Strength);
	}

	void UserData::BindStamina(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Stamina);
	}

	void UserData::BindDexterity(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Dexterity);
	}

	void UserData::BindIntelligence(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Intelligence);
	}

	void UserData::BindCharisma(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Charisma);
	}

	void UserData::BindAuthority(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Authority);
	}

	void UserData::BindStatPoints(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.StatPoints);
	}

	void UserData::BindGold(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Gold);
	}

	void UserData::BindZone(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Zone);
	}

	void UserData::BindBind(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int16_t>>(colIndex, m.Bind);
	}

	void UserData::BindPosX(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.PosX);
	}

	void UserData::BindPosZ(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.PosZ);
	}

	void UserData::BindPosY(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.PosY);
	}

	void UserData::BindDwTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DwTime);
	}

	void UserData::BindSkillData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.SkillData);
	}

	void UserData::BindItemData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemData);
	}

	void UserData::BindSerial(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Serial);
	}

	void UserData::BindQuestCount(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.QuestCount);
	}

	void UserData::BindQuestData(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.QuestData);
	}

	void UserData::BindMannerPoint(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.MannerPoint);
	}

	void UserData::BindLoyaltyMonthly(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.LoyaltyMonthly);
	}

	void UserData::BindCreateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.CreateTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	void UserData::BindUpdateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex)
	{
		std::optional<nanodbc::timestamp> tmpValue;
		result.get_ref<std::optional<nanodbc::timestamp>>(colIndex, tmpValue);

		if (tmpValue.has_value())
			m.UpdateTime = binderUtil::CTimeFromDbTime(*tmpValue);
		else
			m.UpdateTime.reset();
	}

	const UserDataSkillShortcut::BindingsMapType& UserDataSkillShortcut::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strCharID", &UserDataSkillShortcut::BindCharId},
			{"nCount", &UserDataSkillShortcut::BindCount},
			{"strSkillData", &UserDataSkillShortcut::BindSkillData}
		};
		return bindingsMap;
	}

	void UserDataSkillShortcut::BindCharId(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void UserDataSkillShortcut::BindCount(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Count);
	}

	void UserDataSkillShortcut::BindSkillData(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::vector<uint8_t>>(colIndex, m.SkillData);
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

	void Version::BindNumber(full_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.Number);
	}

	void Version::BindFileName(full_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.FileName);
	}

	void Version::BindCompressName(full_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CompressName);
	}

	void Version::BindHistoryVersion(full_model::Version& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.HistoryVersion);
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

	void Warehouse::BindAccountId(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void Warehouse::BindMoney(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Money);
	}

	void Warehouse::BindDwTime(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.DwTime);
	}

	void Warehouse::BindItemData(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.ItemData);
	}

	void Warehouse::BindSerial(full_model::Warehouse& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::vector<uint8_t>>>(colIndex, m.Serial);
	}

	const WebItemMall::BindingsMapType& WebItemMall::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &WebItemMall::BindAccountId},
			{"strCharID", &WebItemMall::BindCharId},
			{"ServerNo", &WebItemMall::BindServerId},
			{"ItemID", &WebItemMall::BindItemId},
			{"ItemCount", &WebItemMall::BindItemCount},
			{"BuyTime", &WebItemMall::BindBuyTime},
			{"img_file_name", &WebItemMall::BindImgFileName},
			{"strItemName", &WebItemMall::BindItemName},
			{"price", &WebItemMall::BindPrice},
			{"pay_type", &WebItemMall::BindPayType}
		};
		return bindingsMap;
	}

	void WebItemMall::BindAccountId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void WebItemMall::BindCharId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void WebItemMall::BindServerId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ServerId);
	}

	void WebItemMall::BindItemId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId);
	}

	void WebItemMall::BindItemCount(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ItemCount);
	}

	void WebItemMall::BindBuyTime(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.BuyTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	void WebItemMall::BindImgFileName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ImgFileName);
	}

	void WebItemMall::BindItemName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ItemName);
	}

	void WebItemMall::BindPrice(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Price);
	}

	void WebItemMall::BindPayType(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.PayType);
	}

	const WebItemMallLog::BindingsMapType& WebItemMallLog::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"strAccountID", &WebItemMallLog::BindAccountId},
			{"strCharID", &WebItemMallLog::BindCharId},
			{"ServerNo", &WebItemMallLog::BindServerId},
			{"ItemID", &WebItemMallLog::BindItemId},
			{"ItemCount", &WebItemMallLog::BindItemCount},
			{"BuyTime", &WebItemMallLog::BindBuyTime},
			{"img_file_name", &WebItemMallLog::BindImgFileName},
			{"strItemName", &WebItemMallLog::BindItemName},
			{"price", &WebItemMallLog::BindPrice},
			{"pay_type", &WebItemMallLog::BindPayType}
		};
		return bindingsMap;
	}

	void WebItemMallLog::BindAccountId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.AccountId);
	}

	void WebItemMallLog::BindCharId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.CharId);
	}

	void WebItemMallLog::BindServerId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ServerId);
	}

	void WebItemMallLog::BindItemId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.ItemId);
	}

	void WebItemMallLog::BindItemCount(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ItemCount);
	}

	void WebItemMallLog::BindBuyTime(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		nanodbc::timestamp tmpValue = {};
		result.get_ref<nanodbc::timestamp>(colIndex, tmpValue);
		m.BuyTime = binderUtil::CTimeFromDbTime(tmpValue);
	}

	void WebItemMallLog::BindImgFileName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ImgFileName);
	}

	void WebItemMallLog::BindItemName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.ItemName);
	}

	void WebItemMallLog::BindPrice(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.Price);
	}

	void WebItemMallLog::BindPayType(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<int32_t>>(colIndex, m.PayType);
	}

	const WebpageAddress::BindingsMapType& WebpageAddress::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"nIndex", &WebpageAddress::BindIndex},
			{"strWebPageAddress", &WebpageAddress::BindWebPageAddress}
		};
		return bindingsMap;
	}

	void WebpageAddress::BindIndex(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.Index);
	}

	void WebpageAddress::BindWebPageAddress(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.WebPageAddress);
	}

	const ZoneInfo::BindingsMapType& ZoneInfo::GetColumnBindings()
	{
		static const BindingsMapType bindingsMap =
		{
			{"ServerNo", &ZoneInfo::BindServerId},
			{"ZoneNo", &ZoneInfo::BindZoneId},
			{"strZoneName", &ZoneInfo::BindName},
			{"InitX", &ZoneInfo::BindInitX},
			{"InitZ", &ZoneInfo::BindInitZ},
			{"InitY", &ZoneInfo::BindInitY},
			{"Type", &ZoneInfo::BindType},
			{"RoomEvent", &ZoneInfo::BindRoomEvent},
			{"bz", &ZoneInfo::BindBz}
		};
		return bindingsMap;
	}

	void ZoneInfo::BindServerId(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.ServerId);
	}

	void ZoneInfo::BindZoneId(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int16_t>(colIndex, m.ZoneId);
	}

	void ZoneInfo::BindName(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::string>(colIndex, m.Name);
	}

	void ZoneInfo::BindInitX(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitX);
	}

	void ZoneInfo::BindInitZ(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitZ);
	}

	void ZoneInfo::BindInitY(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<int32_t>(colIndex, m.InitY);
	}

	void ZoneInfo::BindType(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.Type);
	}

	void ZoneInfo::BindRoomEvent(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<uint8_t>(colIndex, m.RoomEvent);
	}

	void ZoneInfo::BindBz(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex)
	{
		result.get_ref<std::optional<std::string>>(colIndex, m.Bz);
	}
}