#ifndef FULL_BINDER_FULLBINDER_H
#define FULL_BINDER_FULLBINDER_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <string>
#include <unordered_map>

namespace nanodbc
{
	class result;
}

namespace full_model
{
	class AccountChar;
	class Battle;
	class Coefficient;
	class Concurrent;
	class CopySerialItem;
	class CopyTest;
	class CouponSerialList;
	class CurrentUser;
	class Event;
	class EventTrigger;
	class FriendList;
	class HacktoolUserLog;
	class HeroUser;
	class Home;
	class Item;
	class ItemExchange;
	class ItemGroup;
	class ItemUpgrade;
	class ItemUpProbability;
	class Monster;
	class MonsterItem;
	class Npc;
	class NpcItem;
	class NpcMoveItem;
	class NpcPos;
	class KingBallotBox;
	class KingCandidacyNoticeBoard;
	class KingElectionList;
	class KingSystem;
	class Knights;
	class KnightsAlliance;
	class KnightsCape;
	class KnightsRating;
	class KnightsSiegeWarfare;
	class KnightsUser;
	class LevelUp;
	class Magic;
	class MagicType1;
	class MagicType2;
	class MagicType3;
	class MagicType4;
	class MagicType5;
	class MagicType6;
	class MagicType7;
	class MagicType8;
	class MagicType9;
	class MakeDefensive;
	class MakeItem;
	class MakeItemGradeCode;
	class MakeItemGroup;
	class MakeItemRareCode;
	class MakeWeapon;
	class MonsterChallenge;
	class MonsterChallengeSummonList;
	class MonsterItemTest;
	class MonsterSummonList;
	class ProgramListLog;
	class RentalItem;
	class RentalItemList;
	class ServerResource;
	class StartPosition;
	class TbUser;
	class UserEditor;
	class UserEditorItem;
	class UserKnightsRank;
	class UserPersonalRank;
	class UserRentalItem;
	class UserSavedMagic;
	class UserData;
	class UserDataSkillShortcut;
	class Version;
	class Warehouse;
	class WebItemMall;
	class WebItemMallLog;
	class WebpageAddress;
	class ZoneInfo;
}

namespace full_binder
{
	/// \brief generated nanodbc column binder for full_model::AccountChar
	class AccountChar
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharNum
		static void BindCharNum(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId1
		static void BindCharId1(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId2
		static void BindCharId2(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId3
		static void BindCharId3(full_model::AccountChar& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Battle
	class Battle
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UserName
		static void BindUserName(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoArea
		static void BindElmoArea(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusArea
		static void BindKarusArea(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoAdvantage
		static void BindElmoAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusAdvantage
		static void BindKarusAdvantage(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area1
		static void BindArea1(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area2
		static void BindArea2(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area3
		static void BindArea3(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area4
		static void BindArea4(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area5
		static void BindArea5(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area6
		static void BindArea6(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area7
		static void BindArea7(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area8
		static void BindArea8(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area9
		static void BindArea9(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area10
		static void BindArea10(full_model::Battle& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Area11
		static void BindArea11(full_model::Battle& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Coefficient
	class Coefficient
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ClassId
		static void BindClassId(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ShortSword
		static void BindShortSword(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Sword
		static void BindSword(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Axe
		static void BindAxe(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Club
		static void BindClub(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Spear
		static void BindSpear(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Pole
		static void BindPole(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Staff
		static void BindStaff(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bow
		static void BindBow(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitPoint
		static void BindHitPoint(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaPoint
		static void BindManaPoint(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Sp
		static void BindSp(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Evasionrate
		static void BindEvasionrate(full_model::Coefficient& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Concurrent
	class Concurrent
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Zone1Count
		static void BindZone1Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Zone2Count
		static void BindZone2Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Zone3Count
		static void BindZone3Count(full_model::Concurrent& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bz
		static void BindBz(full_model::Concurrent& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::CopySerialItem
	class CopySerialItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Pos
		static void BindPos(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemNum
		static void BindItemNum(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(full_model::CopySerialItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::CopyTest
	class CopyTest
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CopyTest& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ItemSerial
		static void BindItemSerial(full_model::CopyTest& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::CouponSerialList
	class CouponSerialList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SerialNum
		static void BindSerialNum(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemNumber
		static void BindItemNumber(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::CouponSerialList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::CurrentUser
	class CurrentUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ServerIP
		static void BindServerIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ClientIP
		static void BindClientIP(full_model::CurrentUser& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Event
	class Event
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Event& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ZoneNumber
		static void BindZoneNumber(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EventNumber
		static void BindEventNumber(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EventType
		static void BindEventType(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Condition1
		static void BindCondition1(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Condition2
		static void BindCondition2(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Condition3
		static void BindCondition3(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Condition4
		static void BindCondition4(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Condition5
		static void BindCondition5(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute1
		static void BindExecute1(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute2
		static void BindExecute2(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute3
		static void BindExecute3(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute4
		static void BindExecute4(full_model::Event& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Execute5
		static void BindExecute5(full_model::Event& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::EventTrigger
	class EventTrigger
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcType
		static void BindNpcType(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TriggerNumber
		static void BindTriggerNumber(full_model::EventTrigger& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::FriendList
	class FriendList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend1
		static void BindFriend1(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend2
		static void BindFriend2(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend3
		static void BindFriend3(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend4
		static void BindFriend4(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend5
		static void BindFriend5(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend6
		static void BindFriend6(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend7
		static void BindFriend7(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend8
		static void BindFriend8(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend9
		static void BindFriend9(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend10
		static void BindFriend10(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend11
		static void BindFriend11(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend12
		static void BindFriend12(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend13
		static void BindFriend13(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend14
		static void BindFriend14(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend15
		static void BindFriend15(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend16
		static void BindFriend16(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend17
		static void BindFriend17(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend18
		static void BindFriend18(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend19
		static void BindFriend19(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend20
		static void BindFriend20(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend21
		static void BindFriend21(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend22
		static void BindFriend22(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend23
		static void BindFriend23(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Friend24
		static void BindFriend24(full_model::FriendList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::HacktoolUserLog
	class HacktoolUserLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HackToolName
		static void BindHackToolName(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WriteTime
		static void BindWriteTime(full_model::HacktoolUserLog& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::HeroUser
	class HeroUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::HeroUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::HeroUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::HeroUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::HeroUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ClassName
		static void BindClassName(full_model::HeroUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Achievement
		static void BindAchievement(full_model::HeroUser& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Home
	class Home
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Home& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZoneX
		static void BindElmoZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZoneZ
		static void BindElmoZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZoneLX
		static void BindElmoZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZoneLZ
		static void BindElmoZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZoneX
		static void BindKarusZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZoneZ
		static void BindKarusZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZoneLX
		static void BindKarusZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZoneLZ
		static void BindKarusZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FreeZoneX
		static void BindFreeZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FreeZoneZ
		static void BindFreeZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FreeZoneLX
		static void BindFreeZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FreeZoneLZ
		static void BindFreeZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZoneX
		static void BindBattleZoneX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZoneZ
		static void BindBattleZoneZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZoneLX
		static void BindBattleZoneLX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZoneLZ
		static void BindBattleZoneLZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZone2X
		static void BindBattleZone2X(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZone2Z
		static void BindBattleZone2Z(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZone2LX
		static void BindBattleZone2LX(full_model::Home& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BattleZone2LZ
		static void BindBattleZone2LZ(full_model::Home& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Item
	class Item
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Item& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Kind
		static void BindKind(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Slot
		static void BindSlot(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Race
		static void BindRace(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ClassId
		static void BindClassId(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Delay
		static void BindDelay(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weight
		static void BindWeight(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SellPrice
		static void BindSellPrice(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Countable
		static void BindCountable(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicEffect
		static void BindMagicEffect(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SpecialEffect
		static void BindSpecialEffect(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MinLevel
		static void BindMinLevel(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxLevel
		static void BindMaxLevel(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredRank
		static void BindRequiredRank(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredTitle
		static void BindRequiredTitle(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredStrength
		static void BindRequiredStrength(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredStamina
		static void BindRequiredStamina(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredDexterity
		static void BindRequiredDexterity(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredIntelligence
		static void BindRequiredIntelligence(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredCharisma
		static void BindRequiredCharisma(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EvasionRate
		static void BindEvasionRate(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DaggerArmor
		static void BindDaggerArmor(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SwordArmor
		static void BindSwordArmor(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaceArmor
		static void BindMaceArmor(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AxeArmor
		static void BindAxeArmor(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SpearArmor
		static void BindSpearArmor(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BowArmor
		static void BindBowArmor(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireDamage
		static void BindFireDamage(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IceDamage
		static void BindIceDamage(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningDamage
		static void BindLightningDamage(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonDamage
		static void BindPoisonDamage(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HpDrain
		static void BindHpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MpDamage
		static void BindMpDamage(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MpDrain
		static void BindMpDrain(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MirrorDamage
		static void BindMirrorDamage(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropRate
		static void BindDropRate(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StrengthBonus
		static void BindStrengthBonus(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StaminaBonus
		static void BindStaminaBonus(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DexterityBonus
		static void BindDexterityBonus(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IntelligenceBonus
		static void BindIntelligenceBonus(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharismaBonus
		static void BindCharismaBonus(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHpBonus
		static void BindMaxHpBonus(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMpBonus
		static void BindMaxMpBonus(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::Item& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CurseResist
		static void BindCurseResist(full_model::Item& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::ItemExchange
	class ItemExchange
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcName
		static void BindNpcName(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RandomFlag
		static void BindRandomFlag(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber1
		static void BindOriginItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount1
		static void BindOriginItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber2
		static void BindOriginItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount2
		static void BindOriginItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber3
		static void BindOriginItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount3
		static void BindOriginItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber4
		static void BindOriginItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount4
		static void BindOriginItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemNumber5
		static void BindOriginItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItemCount5
		static void BindOriginItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber1
		static void BindExchangeItemNumber1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount1
		static void BindExchangeItemCount1(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber2
		static void BindExchangeItemNumber2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount2
		static void BindExchangeItemCount2(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber3
		static void BindExchangeItemNumber3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount3
		static void BindExchangeItemCount3(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber4
		static void BindExchangeItemNumber4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount4
		static void BindExchangeItemCount4(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemNumber5
		static void BindExchangeItemNumber5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExchangeItemCount5
		static void BindExchangeItemCount5(full_model::ItemExchange& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::ItemGroup
	class ItemGroup
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Group
		static void BindGroup(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item6
		static void BindItem6(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item7
		static void BindItem7(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item8
		static void BindItem8(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item9
		static void BindItem9(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item10
		static void BindItem10(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item11
		static void BindItem11(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item12
		static void BindItem12(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item13
		static void BindItem13(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item14
		static void BindItem14(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item15
		static void BindItem15(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item16
		static void BindItem16(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item17
		static void BindItem17(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item18
		static void BindItem18(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item19
		static void BindItem19(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item20
		static void BindItem20(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item21
		static void BindItem21(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item22
		static void BindItem22(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item23
		static void BindItem23(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item24
		static void BindItem24(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item25
		static void BindItem25(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item26
		static void BindItem26(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item27
		static void BindItem27(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item28
		static void BindItem28(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item29
		static void BindItem29(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item30
		static void BindItem30(full_model::ItemGroup& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::ItemUpgrade
	class ItemUpgrade
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcNumber
		static void BindNpcNumber(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginType
		static void BindOriginType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OriginItem
		static void BindOriginItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem1
		static void BindRequiredItem1(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem2
		static void BindRequiredItem2(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem3
		static void BindRequiredItem3(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem4
		static void BindRequiredItem4(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem5
		static void BindRequiredItem5(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem6
		static void BindRequiredItem6(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem7
		static void BindRequiredItem7(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredItem8
		static void BindRequiredItem8(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredCoins
		static void BindRequiredCoins(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RateType
		static void BindRateType(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GenRate
		static void BindGenRate(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GiveItem
		static void BindGiveItem(full_model::ItemUpgrade& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::ItemUpProbability
	class ItemUpProbability
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Type
		static void BindType(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxSuccess
		static void BindMaxSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxFail
		static void BindMaxFail(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CurrentSuccess
		static void BindCurrentSuccess(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CurrentFailure
		static void BindCurrentFailure(full_model::ItemUpProbability& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Monster
	class Monster
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Size
		static void BindSize(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Group
		static void BindGroup(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ActType
		static void BindActType(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Family
		static void BindFamily(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Title
		static void BindTitle(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Exp
		static void BindExp(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Attack
		static void BindAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bulk
		static void BindBulk(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item
		static void BindItem(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(full_model::Monster& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(full_model::Monster& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MonsterItem
	class MonsterItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(full_model::MonsterItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Npc
	class Npc
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PictureId
		static void BindPictureId(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Size
		static void BindSize(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weapon1
		static void BindWeapon1(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Weapon2
		static void BindWeapon2(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Group
		static void BindGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ActType
		static void BindActType(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Family
		static void BindFamily(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Title
		static void BindTitle(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SellingGroup
		static void BindSellingGroup(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Exp
		static void BindExp(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitPoints
		static void BindHitPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaPoints
		static void BindManaPoints(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Attack
		static void BindAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EvadeRate
		static void BindEvadeRate(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackDelay
		static void BindAttackDelay(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WalkSpeed
		static void BindWalkSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RunSpeed
		static void BindRunSpeed(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StandTime
		static void BindStandTime(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic1
		static void BindMagic1(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic2
		static void BindMagic2(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Magic3
		static void BindMagic3(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightResist
		static void BindLightResist(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bulk
		static void BindBulk(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackRange
		static void BindAttackRange(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SearchRange
		static void BindSearchRange(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TracingRange
		static void BindTracingRange(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item
		static void BindItem(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DirectAttack
		static void BindDirectAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicAttack
		static void BindMagicAttack(full_model::Npc& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoneyType
		static void BindMoneyType(full_model::Npc& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::NpcItem
	class NpcItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance1
		static void BindDropChance1(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance2
		static void BindDropChance2(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId3
		static void BindItemId3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance3
		static void BindDropChance3(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId4
		static void BindItemId4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance4
		static void BindDropChance4(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId5
		static void BindItemId5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DropChance5
		static void BindDropChance5(full_model::NpcItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::NpcMoveItem
	class NpcMoveItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChangeItem
		static void BindChangeItem(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChangeId
		static void BindChangeId(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveItem
		static void BindMoveItem(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveMinX
		static void BindMoveMinX(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveMinY
		static void BindMoveMinY(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveMaxX
		static void BindMoveMaxX(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoveMaxY
		static void BindMoveMaxY(full_model::NpcMoveItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::NpcPos
	class NpcPos
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NpcId
		static void BindNpcId(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ActType
		static void BindActType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegenType
		static void BindRegenType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DungeonFamily
		static void BindDungeonFamily(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SpecialType
		static void BindSpecialType(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TrapNumber
		static void BindTrapNumber(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LeftX
		static void BindLeftX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TopZ
		static void BindTopZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RightX
		static void BindRightX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BottomZ
		static void BindBottomZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LimitMinZ
		static void BindLimitMinZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LimitMinX
		static void BindLimitMinX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LimitMaxX
		static void BindLimitMaxX(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LimitMaxZ
		static void BindLimitMaxZ(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NumNpc
		static void BindNumNpc(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RespawnTime
		static void BindRespawnTime(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Direction
		static void BindDirection(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PathPointCount
		static void BindPathPointCount(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Path
		static void BindPath(full_model::NpcPos& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KingBallotBox
	class KingBallotBox
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CandidateId
		static void BindCandidateId(full_model::KingBallotBox& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KingCandidacyNoticeBoard
	class KingCandidacyNoticeBoard
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CandidateId
		static void BindCandidateId(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NoticeLength
		static void BindNoticeLength(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Notice
		static void BindNotice(full_model::KingCandidacyNoticeBoard& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KingElectionList
	class KingElectionList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Type
		static void BindType(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Knights
		static void BindKnights(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::KingElectionList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KingSystem
	class KingSystem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Year
		static void BindYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Month
		static void BindMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Day
		static void BindDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Hour
		static void BindHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Minute
		static void BindMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImType
		static void BindImType(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImYear
		static void BindImYear(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImMonth
		static void BindImMonth(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImDay
		static void BindImDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImHour
		static void BindImHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImMinute
		static void BindImMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NoahEvent
		static void BindNoahEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NoahEventDay
		static void BindNoahEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NoahEventHour
		static void BindNoahEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NoahEventMinute
		static void BindNoahEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NoahEventDuration
		static void BindNoahEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpEvent
		static void BindExpEvent(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpEventDay
		static void BindExpEventDay(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpEventHour
		static void BindExpEventHour(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpEventMinute
		static void BindExpEventMinute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpEventDuration
		static void BindExpEventDuration(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Tribute
		static void BindTribute(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TerritoryTariff
		static void BindTerritoryTariff(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TerritoryTax
		static void BindTerritoryTax(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NationalTreasury
		static void BindNationalTreasury(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KingName
		static void BindKingName(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImRequestId
		static void BindImRequestId(full_model::KingSystem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Knights
	class Knights
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Flag
		static void BindFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Ranking
		static void BindRanking(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Members
		static void BindMembers(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Chief
		static void BindChief(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ViceChief1
		static void BindViceChief1(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ViceChief2
		static void BindViceChief2(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ViceChief3
		static void BindViceChief3(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EnemyName
		static void BindEnemyName(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OldWarResult
		static void BindOldWarResult(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarEnemyId
		static void BindWarEnemyId(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Victory
		static void BindVictory(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Lose
		static void BindLose(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Gold
		static void BindGold(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Domination
		static void BindDomination(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Points
		static void BindPoints(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MarkVersion
		static void BindMarkVersion(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MarkLength
		static void BindMarkLength(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Mark
		static void BindMark(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Stash
		static void BindStash(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SiegeFlag
		static void BindSiegeFlag(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AllianceKnights
		static void BindAllianceKnights(full_model::Knights& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Cape
		static void BindCape(full_model::Knights& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KnightsAlliance
	class KnightsAlliance
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to MainAllianceKnights
		static void BindMainAllianceKnights(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SubAllianceKnights
		static void BindSubAllianceKnights(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MercenaryClan1
		static void BindMercenaryClan1(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MercenaryClan2
		static void BindMercenaryClan2(full_model::KnightsAlliance& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KnightsCape
	class KnightsCape
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CapeIndex
		static void BindCapeIndex(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuyPrice
		static void BindBuyPrice(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade
		static void BindGrade(full_model::KnightsCape& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KnightsRating
	class KnightsRating
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Points
		static void BindPoints(full_model::KnightsRating& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KnightsSiegeWarfare
	class KnightsSiegeWarfare
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CastleIndex
		static void BindCastleIndex(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MasterKnights
		static void BindMasterKnights(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SiegeType
		static void BindSiegeType(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarDay
		static void BindWarDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarHour
		static void BindWarHour(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarMinute
		static void BindWarMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList1
		static void BindChallengeList1(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList2
		static void BindChallengeList2(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList3
		static void BindChallengeList3(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList4
		static void BindChallengeList4(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList5
		static void BindChallengeList5(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList6
		static void BindChallengeList6(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList7
		static void BindChallengeList7(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList8
		static void BindChallengeList8(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList9
		static void BindChallengeList9(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList10
		static void BindChallengeList10(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarRequestDay
		static void BindWarRequestDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarRequestTime
		static void BindWarRequestTime(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarRequestMinute
		static void BindWarRequestMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GuerrillaWarDay
		static void BindGuerrillaWarDay(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GuerrillaWarTime
		static void BindGuerrillaWarTime(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GuerrillaWarMinute
		static void BindGuerrillaWarMinute(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ChallengeList
		static void BindChallengeList(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoradonTariff
		static void BindMoradonTariff(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DelosTariff
		static void BindDelosTariff(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DungeonCharge
		static void BindDungeonCharge(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MoradonTax
		static void BindMoradonTax(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DelosTax
		static void BindDelosTax(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList1
		static void BindRequestList1(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList2
		static void BindRequestList2(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList3
		static void BindRequestList3(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList4
		static void BindRequestList4(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList5
		static void BindRequestList5(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList6
		static void BindRequestList6(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList7
		static void BindRequestList7(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList8
		static void BindRequestList8(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList9
		static void BindRequestList9(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequestList10
		static void BindRequestList10(full_model::KnightsSiegeWarfare& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::KnightsUser
	class KnightsUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::KnightsUser& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::LevelUp
	class LevelUp
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::LevelUp& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::LevelUp& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RequiredExp
		static void BindRequiredExp(full_model::LevelUp& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Magic
	class Magic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EnglishName
		static void BindEnglishName(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KoreanName
		static void BindKoreanName(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BeforeAction
		static void BindBeforeAction(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetAction
		static void BindTargetAction(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SelfEffect
		static void BindSelfEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FlyingEffect
		static void BindFlyingEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetEffect
		static void BindTargetEffect(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Moral
		static void BindMoral(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SkillLevel
		static void BindSkillLevel(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill
		static void BindSkill(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ManaCost
		static void BindManaCost(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HpCost
		static void BindHpCost(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemGroup
		static void BindItemGroup(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UseItem
		static void BindUseItem(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CastTime
		static void BindCastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RecastTime
		static void BindRecastTime(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SuccessRate
		static void BindSuccessRate(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type1
		static void BindType1(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type2
		static void BindType2(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Etc
		static void BindEtc(full_model::Magic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Event
		static void BindEvent(full_model::Magic& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType1
	class MagicType1
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Delay
		static void BindDelay(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboType
		static void BindComboType(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboCount
		static void BindComboCount(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ComboDamage
		static void BindComboDamage(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::MagicType1& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType2
	class MagicType2
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitType
		static void BindHitType(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRateMod
		static void BindHitRateMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DamageMod
		static void BindDamageMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RangeMod
		static void BindRangeMod(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedArrow
		static void BindNeedArrow(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AddDamagePlus
		static void BindAddDamagePlus(full_model::MagicType2& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType3
	class MagicType3
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Angle
		static void BindAngle(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DirectType
		static void BindDirectType(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FirstDamage
		static void BindFirstDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EndDamage
		static void BindEndDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TimeDamage
		static void BindTimeDamage(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Attribute
		static void BindAttribute(full_model::MagicType3& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType4
	class MagicType4
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuffType
		static void BindBuffType(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Speed
		static void BindSpeed(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Armor
		static void BindArmor(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ArmorPercent
		static void BindArmorPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackPower
		static void BindAttackPower(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicPower
		static void BindMagicPower(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHpPercent
		static void BindMaxHpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMpPercent
		static void BindMaxMpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AvoidRate
		static void BindAvoidRate(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Strength
		static void BindStrength(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Stamina
		static void BindStamina(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FireResist
		static void BindFireResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ColdResist
		static void BindColdResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LightningResist
		static void BindLightningResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicResist
		static void BindMagicResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DiseaseResist
		static void BindDiseaseResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PoisonResist
		static void BindPoisonResist(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpPercent
		static void BindExpPercent(full_model::MagicType4& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType5
	class MagicType5
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(full_model::MagicType5& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedStone
		static void BindNeedStone(full_model::MagicType5& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType6
	class MagicType6
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Size
		static void BindSize(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TransformId
		static void BindTransformId(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxHp
		static void BindMaxHp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MaxMp
		static void BindMaxMp(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Speed
		static void BindSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AttackSpeed
		static void BindAttackSpeed(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalHit
		static void BindTotalHit(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalArmor
		static void BindTotalArmor(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalHitRate
		static void BindTotalHitRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalEvasionRate
		static void BindTotalEvasionRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalFireResist
		static void BindTotalFireResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalColdResist
		static void BindTotalColdResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalLightningResist
		static void BindTotalLightningResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalMagicResist
		static void BindTotalMagicResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalDiseaseResist
		static void BindTotalDiseaseResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TotalPoisonResist
		static void BindTotalPoisonResist(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UserSkillUse
		static void BindUserSkillUse(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SkillSuccessRate
		static void BindSkillSuccessRate(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterFriendly
		static void BindMonsterFriendly(full_model::MagicType6& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType7
	class MagicType7
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Note
		static void BindNote(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Damage
		static void BindDamage(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Vision
		static void BindVision(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType7& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType8
	class MagicType8
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Target
		static void BindTarget(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WarpType
		static void BindWarpType(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ExpRecover
		static void BindExpRecover(full_model::MagicType8& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MagicType9
	class MagicType9
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ID
		static void BindID(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Description
		static void BindDescription(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ValidGroup
		static void BindValidGroup(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NationChange
		static void BindNationChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterNumber
		static void BindMonsterNumber(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to TargetChange
		static void BindTargetChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StateChange
		static void BindStateChange(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Radius
		static void BindRadius(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HitRate
		static void BindHitRate(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Duration
		static void BindDuration(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AddDamage
		static void BindAddDamage(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Vision
		static void BindVision(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NeedItem
		static void BindNeedItem(full_model::MagicType9& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MakeDefensive
	class MakeDefensive
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class1
		static void BindClass1(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class2
		static void BindClass2(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class3
		static void BindClass3(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class4
		static void BindClass4(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class5
		static void BindClass5(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class6
		static void BindClass6(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class7
		static void BindClass7(full_model::MakeDefensive& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MakeItem
	class MakeItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemInfo
		static void BindItemInfo(full_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemCode
		static void BindItemCode(full_model::MakeItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemLevel
		static void BindItemLevel(full_model::MakeItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MakeItemGradeCode
	class MakeItemGradeCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade1
		static void BindGrade1(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade2
		static void BindGrade2(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade3
		static void BindGrade3(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade4
		static void BindGrade4(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade5
		static void BindGrade5(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade6
		static void BindGrade6(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade7
		static void BindGrade7(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade8
		static void BindGrade8(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Grade9
		static void BindGrade9(full_model::MakeItemGradeCode& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MakeItemGroup
	class MakeItemGroup
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ItemGroupNumber
		static void BindItemGroupNumber(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item6
		static void BindItem6(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item7
		static void BindItem7(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item8
		static void BindItem8(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item9
		static void BindItem9(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item10
		static void BindItem10(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item11
		static void BindItem11(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item12
		static void BindItem12(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item13
		static void BindItem13(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item14
		static void BindItem14(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item15
		static void BindItem15(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item16
		static void BindItem16(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item17
		static void BindItem17(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item18
		static void BindItem18(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item19
		static void BindItem19(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item20
		static void BindItem20(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item21
		static void BindItem21(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item22
		static void BindItem22(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item23
		static void BindItem23(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item24
		static void BindItem24(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item25
		static void BindItem25(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item26
		static void BindItem26(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item27
		static void BindItem27(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item28
		static void BindItem28(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item29
		static void BindItem29(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item30
		static void BindItem30(full_model::MakeItemGroup& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MakeItemRareCode
	class MakeItemRareCode
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to LevelGrade
		static void BindLevelGrade(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UpgradeItem
		static void BindUpgradeItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RareItem
		static void BindRareItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MagicItem
		static void BindMagicItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to GeneralItem
		static void BindGeneralItem(full_model::MakeItemRareCode& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MakeWeapon
	class MakeWeapon
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class1
		static void BindClass1(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class2
		static void BindClass2(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class3
		static void BindClass3(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class4
		static void BindClass4(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class5
		static void BindClass5(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class6
		static void BindClass6(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class7
		static void BindClass7(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class8
		static void BindClass8(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class9
		static void BindClass9(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class10
		static void BindClass10(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class11
		static void BindClass11(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class12
		static void BindClass12(full_model::MakeWeapon& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MonsterChallenge
	class MonsterChallenge
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StartTime1
		static void BindStartTime1(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StartTime2
		static void BindStartTime2(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StartTime3
		static void BindStartTime3(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LevelMin
		static void BindLevelMin(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LevelMax
		static void BindLevelMax(full_model::MonsterChallenge& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MonsterChallengeSummonList
	class MonsterChallengeSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Stage
		static void BindStage(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StageLevel
		static void BindStageLevel(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Time
		static void BindTime(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Count
		static void BindCount(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PosX
		static void BindPosX(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Range
		static void BindRange(full_model::MonsterChallengeSummonList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MonsterItemTest
	class MonsterItemTest
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item1
		static void BindItem1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Percent1
		static void BindPercent1(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item2
		static void BindItem2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Percent2
		static void BindPercent2(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item3
		static void BindItem3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Percent3
		static void BindPercent3(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item4
		static void BindItem4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Percent4
		static void BindPercent4(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Item5
		static void BindItem5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Percent5
		static void BindPercent5(full_model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::MonsterSummonList
	class MonsterSummonList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to MonsterId
		static void BindMonsterId(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Probability
		static void BindProbability(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::MonsterSummonList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::ProgramListLog
	class ProgramListLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Id
		static void BindId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HackToolName
		static void BindHackToolName(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WriteTime
		static void BindWriteTime(full_model::ProgramListLog& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::RentalItem
	class RentalItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegType
		static void BindRegType(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemType
		static void BindItemType(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BorrowerAccountId
		static void BindBorrowerAccountId(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LendTime
		static void BindLendTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(full_model::RentalItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::RentalItemList
	class RentalItemList
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegType
		static void BindRegType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemType
		static void BindItemType(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LenderCharId
		static void BindLenderCharId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LenderAccountId
		static void BindLenderAccountId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BorrowerCharId
		static void BindBorrowerCharId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BorrowerAccountId
		static void BindBorrowerAccountId(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LendTime
		static void BindLendTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(full_model::RentalItemList& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::ServerResource
	class ServerResource
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ServerResource& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ResourceId
		static void BindResourceId(full_model::ServerResource& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ServerResource& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Resource
		static void BindResource(full_model::ServerResource& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::StartPosition
	class StartPosition
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusX
		static void BindKarusX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusZ
		static void BindKarusZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoX
		static void BindElmoX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoZ
		static void BindElmoZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RangeX
		static void BindRangeX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RangeZ
		static void BindRangeZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusGateX
		static void BindKarusGateX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusGateZ
		static void BindKarusGateZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoGateX
		static void BindElmoGateX(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoGateZ
		static void BindElmoGateZ(full_model::StartPosition& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::TbUser
	class TbUser
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Password
		static void BindPassword(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SocNo
		static void BindSocNo(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Email
		static void BindEmail(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Authority
		static void BindAuthority(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PremiumExpire
		static void BindPremiumExpire(full_model::TbUser& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::UserEditor
	class UserEditor
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OpId
		static void BindOpId(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OldUserValue
		static void BindOldUserValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NewUserValue
		static void BindNewUserValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OldUserSkill
		static void BindOldUserSkill(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NewUserSkill
		static void BindNewUserSkill(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OldUserItem
		static void BindOldUserItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NewUserItem
		static void BindNewUserItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OldWarehouseValue
		static void BindOldWarehouseValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NewWarehouseValue
		static void BindNewWarehouseValue(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OldWarehouseItem
		static void BindOldWarehouseItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to NewWarehouseItem
		static void BindNewWarehouseItem(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to EditorTime
		static void BindEditorTime(full_model::UserEditor& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::UserEditorItem
	class UserEditorItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OpId
		static void BindOpId(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to OpIP
		static void BindOpIP(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DbIndex
		static void BindDbIndex(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Pos
		static void BindPos(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId1
		static void BindItemId1(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId2
		static void BindItemId2(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(full_model::UserEditorItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::UserKnightsRank
	class UserKnightsRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoKnightsName
		static void BindElmoKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoLoyalty
		static void BindElmoLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusKnightsName
		static void BindKarusKnightsName(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusLoyalty
		static void BindKarusLoyalty(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IsClaimedElmo
		static void BindIsClaimedElmo(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IsClaimedKarus
		static void BindIsClaimedKarus(full_model::UserKnightsRank& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::UserPersonalRank
	class UserPersonalRank
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Position
		static void BindPosition(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoUp
		static void BindElmoUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoUserId
		static void BindElmoUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoLoyaltyMonthly
		static void BindElmoLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ElmoCheck
		static void BindElmoCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusUp
		static void BindKarusUp(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusUserId
		static void BindKarusUserId(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusLoyaltyMonthly
		static void BindKarusLoyaltyMonthly(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KarusCheck
		static void BindKarusCheck(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Salary
		static void BindSalary(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UpdateDate
		static void BindUpdateDate(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IsClaimedElmo
		static void BindIsClaimedElmo(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to IsClaimedKarus
		static void BindIsClaimedKarus(full_model::UserPersonalRank& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::UserRentalItem
	class UserRentalItem
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalType
		static void BindRentalType(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegTime
		static void BindRegTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalIndex
		static void BindRentalIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemIndex
		static void BindItemIndex(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Durability
		static void BindDurability(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SerialNumber
		static void BindSerialNumber(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalMoney
		static void BindRentalMoney(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalTime
		static void BindRentalTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DuringTime
		static void BindDuringTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RentalTimestamp
		static void BindRentalTimestamp(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RegisterTime
		static void BindRegisterTime(full_model::UserRentalItem& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::UserSavedMagic
	class UserSavedMagic
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill1
		static void BindSkill1(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During1
		static void BindDuring1(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill2
		static void BindSkill2(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During2
		static void BindDuring2(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill3
		static void BindSkill3(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During3
		static void BindDuring3(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill4
		static void BindSkill4(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During4
		static void BindDuring4(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill5
		static void BindSkill5(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During5
		static void BindDuring5(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill6
		static void BindSkill6(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During6
		static void BindDuring6(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill7
		static void BindSkill7(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During7
		static void BindDuring7(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill8
		static void BindSkill8(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During8
		static void BindDuring8(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill9
		static void BindSkill9(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During9
		static void BindDuring9(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Skill10
		static void BindSkill10(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to During10
		static void BindDuring10(full_model::UserSavedMagic& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::UserData
	class UserData
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to UserId
		static void BindUserId(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Nation
		static void BindNation(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Race
		static void BindRace(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Class
		static void BindClass(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HairColor
		static void BindHairColor(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Rank
		static void BindRank(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Title
		static void BindTitle(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Level
		static void BindLevel(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Exp
		static void BindExp(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Loyalty
		static void BindLoyalty(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Face
		static void BindFace(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to City
		static void BindCity(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to KnightsId
		static void BindKnightsId(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Fame
		static void BindFame(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Hp
		static void BindHp(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Mp
		static void BindMp(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Sp
		static void BindSp(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Strength
		static void BindStrength(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Stamina
		static void BindStamina(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Dexterity
		static void BindDexterity(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Intelligence
		static void BindIntelligence(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Charisma
		static void BindCharisma(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Authority
		static void BindAuthority(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to StatPoints
		static void BindStatPoints(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Gold
		static void BindGold(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Zone
		static void BindZone(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bind
		static void BindBind(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PosX
		static void BindPosX(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PosZ
		static void BindPosZ(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PosY
		static void BindPosY(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemData
		static void BindItemData(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Serial
		static void BindSerial(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to QuestCount
		static void BindQuestCount(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to QuestData
		static void BindQuestData(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to MannerPoint
		static void BindMannerPoint(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to LoyaltyMonthly
		static void BindLoyaltyMonthly(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CreateTime
		static void BindCreateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to UpdateTime
		static void BindUpdateTime(full_model::UserData& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::UserDataSkillShortcut
	class UserDataSkillShortcut
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Count
		static void BindCount(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to SkillData
		static void BindSkillData(full_model::UserDataSkillShortcut& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Version
	class Version
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Version& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Number
		static void BindNumber(full_model::Version& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to FileName
		static void BindFileName(full_model::Version& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CompressName
		static void BindCompressName(full_model::Version& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to HistoryVersion
		static void BindHistoryVersion(full_model::Version& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::Warehouse
	class Warehouse
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Money
		static void BindMoney(full_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to DwTime
		static void BindDwTime(full_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemData
		static void BindItemData(full_model::Warehouse& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Serial
		static void BindSerial(full_model::Warehouse& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::WebItemMall
	class WebItemMall
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId
		static void BindItemId(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuyTime
		static void BindBuyTime(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImgFileName
		static void BindImgFileName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemName
		static void BindItemName(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Price
		static void BindPrice(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PayType
		static void BindPayType(full_model::WebItemMall& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::WebItemMallLog
	class WebItemMallLog
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to AccountId
		static void BindAccountId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to CharId
		static void BindCharId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemId
		static void BindItemId(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemCount
		static void BindItemCount(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to BuyTime
		static void BindBuyTime(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ImgFileName
		static void BindImgFileName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ItemName
		static void BindItemName(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Price
		static void BindPrice(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to PayType
		static void BindPayType(full_model::WebItemMallLog& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::WebpageAddress
	class WebpageAddress
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to Index
		static void BindIndex(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to WebPageAddress
		static void BindWebPageAddress(full_model::WebpageAddress& m, const nanodbc::result& result, short colIndex);

	};

	/// \brief generated nanodbc column binder for full_model::ZoneInfo
	class ZoneInfo
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings();

		/// \brief Binds a result's column to ServerId
		static void BindServerId(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to ZoneId
		static void BindZoneId(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Name
		static void BindName(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitX
		static void BindInitX(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitZ
		static void BindInitZ(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to InitY
		static void BindInitY(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Type
		static void BindType(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to RoomEvent
		static void BindRoomEvent(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

		/// \brief Binds a result's column to Bz
		static void BindBz(full_model::ZoneInfo& m, const nanodbc::result& result, short colIndex);

	};
}

#endif // FULL_BINDER_FULLBINDER_H