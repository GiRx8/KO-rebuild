#ifndef STOREDPROC_STOREDPROC_H
#define STOREDPROC_STOREDPROC_H

#pragma once

#include <ModelUtil/ModelUtil.h>
#include <cstdint>
#include <detail/StoredProc/StoredProcedure.h>
#include <memory>
#include <nanodbc/nanodbc.h>
#include <string>
#include <vector>

namespace storedProc
{

	/// \brief MANUAL_TODO
	/// \class AccountLogin
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" ACCOUNT_LOGIN MANUAL_TODO
	class AccountLogin : public detail::StoredProcedure
	{
	public:
		AccountLogin();
		AccountLogin(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* accountID, const char* password, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~AccountLogin();
	};

	/// \brief MANUAL_TODO
	/// \class AccountLogout
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" ACCOUNT_LOGOUT MANUAL_TODO
	class AccountLogout : public detail::StoredProcedure
	{
	public:
		AccountLogout();
		AccountLogout(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* accountID, const int32_t logoutCode, int16_t* nRet, 
			int16_t* nRet2) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~AccountLogout();
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCastleCommerce
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CHANGE_CASTLE_COMMERCE MANUAL_TODO
	class ChangeCastleCommerce : public detail::StoredProcedure
	{
	public:
		ChangeCastleCommerce();
		ChangeCastleCommerce(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const uint8_t byType, const int32_t nMoradonTariff, 
			const int32_t nDelosTariff, const int32_t nMoney, const char* accountId, 
			const char* charId) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCopySerialItem
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CHANGE_COPY_SERIAL_ITEM MANUAL_TODO
	class ChangeCopySerialItem : public detail::StoredProcedure
	{
	public:
		ChangeCopySerialItem();
		ChangeCopySerialItem(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class ChangeCopySerialItemTable
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CHANGE_COPY_SERIAL_ITEM_TABLE MANUAL_TODO
	class ChangeCopySerialItemTable : public detail::StoredProcedure
	{
	public:
		ChangeCopySerialItemTable();
		ChangeCopySerialItemTable(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class ChangeKnightsCape
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CHANGE_KNIGHTS_CAPE MANUAL_TODO
	class ChangeKnightsCape : public detail::StoredProcedure
	{
	public:
		ChangeKnightsCape();
		ChangeKnightsCape(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t KnightsIndex, const int16_t CapeIndex) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class CheckKnights
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CHECK_KNIGHTS MANUAL_TODO
	class CheckKnights : public detail::StoredProcedure
	{
	public:
		CheckKnights();
		CheckKnights(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief Attempts to claim a stipend from USER_KNIGHTS_RANK/USER_PERSONAL_RANK
	/// \class ClaimUserRankStipend
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CLAIM_USER_RANK_STIPEND Attempts to claim a stipend from USER_KNIGHTS_RANK/USER_PERSONAL_RANK
	class ClaimUserRankStipend : public detail::StoredProcedure
	{
	public:
		ClaimUserRankStipend();
		ClaimUserRankStipend(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			uint8_t* ResultCode, const uint8_t RankType, const uint8_t Rank, 
			const uint8_t Nation, const char* CharId) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~ClaimUserRankStipend();
	};

	/// \brief MANUAL_TODO
	/// \class ClearRemainUsers
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CLEAR_REMAIN_USERS MANUAL_TODO
	class ClearRemainUsers : public detail::StoredProcedure
	{
	public:
		ClearRemainUsers();
		ClearRemainUsers(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strServerIP) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class CreateKnights
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CREATE_KNIGHTS MANUAL_TODO
	class CreateKnights : public detail::StoredProcedure
	{
	public:
		CreateKnights();
		CreateKnights(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const int16_t index, const uint8_t nation, 
			const uint8_t community, const char* strName, const char* strChief) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~CreateKnights();
	};

	/// \brief MANUAL_TODO
	/// \class CreateKnights2
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CREATE_KNIGHTS2 MANUAL_TODO
	class CreateKnights2 : public detail::StoredProcedure
	{
	public:
		CreateKnights2();
		CreateKnights2(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, int16_t* index, const uint8_t nation, 
			const uint8_t community, const char* strName, const char* strChief) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~CreateKnights2();
	};

	/// \brief MANUAL_TODO
	/// \class CreateNewChar
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" CREATE_NEW_CHAR MANUAL_TODO
	class CreateNewChar : public detail::StoredProcedure
	{
	public:
		CreateNewChar();
		CreateNewChar(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const char* AccountID, const uint8_t index, 
			const char* CharID, const uint8_t Race, const int16_t Class, 
			const uint8_t Hair, const uint8_t Face, const uint8_t Str, 
			const uint8_t Sta, const uint8_t Dex, const uint8_t Intel, 
			const uint8_t Cha) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~CreateNewChar();
	};

	/// \brief MANUAL_TODO
	/// \class DeleteFriendList
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" DELETE_FRIEND_LIST MANUAL_TODO
	class DeleteFriendList : public detail::StoredProcedure
	{
	public:
		DeleteFriendList();
		DeleteFriendList(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strUserID, const char* strFriend, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~DeleteFriendList();
	};

	/// \brief MANUAL_TODO
	/// \class DeleteKnights
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" DELETE_KNIGHTS MANUAL_TODO
	class DeleteKnights : public detail::StoredProcedure
	{
	public:
		DeleteKnights();
		DeleteKnights(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const int16_t knightsindex) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~DeleteKnights();
	};

	/// \brief MANUAL_TODO
	/// \class EditerKnights
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" EDITER_KNIGHTS MANUAL_TODO
	class EditerKnights : public detail::StoredProcedure
	{
	public:
		EditerKnights();
		EditerKnights(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class ExecKnightsUser
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" EXEC_KNIGHTS_USER MANUAL_TODO
	class ExecKnightsUser : public detail::StoredProcedure
	{
	public:
		ExecKnightsUser();
		ExecKnightsUser(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class GivePremium
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" GIVE_PREMIUM MANUAL_TODO
	class GivePremium : public detail::StoredProcedure
	{
	public:
		GivePremium();
		GivePremium(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strAccountID, const char* strUserID, const int32_t days) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class InsertFriendList
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" INSERT_FRIEND_LIST MANUAL_TODO
	class InsertFriendList : public detail::StoredProcedure
	{
	public:
		InsertFriendList();
		InsertFriendList(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strUserID, const char* strFriend, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~InsertFriendList();
	};

	/// \brief MANUAL_TODO
	/// \class InsertHacktoolUser
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" INSERT_HACKTOOL_USER MANUAL_TODO
	class InsertHacktoolUser : public detail::StoredProcedure
	{
	public:
		InsertHacktoolUser();
		InsertHacktoolUser(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const char* HackToolName) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class InsertProgramCheckUser
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" INSERT_PROGRAM_CHECK_USER MANUAL_TODO
	class InsertProgramCheckUser : public detail::StoredProcedure
	{
	public:
		InsertProgramCheckUser();
		InsertProgramCheckUser(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strAccountID, const char* strCharID, const char* HackToolName) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingCandidacyNoticeBoardProc
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_CANDIDACY_NOTICE_BOARD_PROC MANUAL_TODO
	class KingCandidacyNoticeBoardProc : public detail::StoredProcedure
	{
	public:
		KingCandidacyNoticeBoardProc();
		KingCandidacyNoticeBoardProc(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strUserID, const int16_t sNoticeLen, const uint8_t byNation, 
			const std::vector<uint8_t>& strNotice) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingCandidacyRecommend
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_CANDIDACY_RECOMMEND MANUAL_TODO
	class KingCandidacyRecommend : public detail::StoredProcedure
	{
	public:
		KingCandidacyRecommend();
		KingCandidacyRecommend(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* CharID_1, const char* CharID_2, const uint8_t nNation, 
			int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~KingCandidacyRecommend();
	};

	/// \brief MANUAL_TODO
	/// \class KingChangeTax
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_CHANGE_TAX MANUAL_TODO
	class KingChangeTax : public detail::StoredProcedure
	{
	public:
		KingChangeTax();
		KingChangeTax(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const int32_t nKarusTax1, 
			const int32_t nKarusTax2, const int32_t nKarusTax3, const int32_t nElmoTax1, 
			const int32_t nElmoTax2, const int32_t nElmoTax3) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingElectionProc
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_ELECTION_PROC MANUAL_TODO
	class KingElectionProc : public detail::StoredProcedure
	{
	public:
		KingElectionProc();
		KingElectionProc(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strAccountID, const char* strCharID, const uint8_t byNation, 
			const char* strCandidacyID, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~KingElectionProc();
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentElection
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_IMPEACHMENT_ELECTION MANUAL_TODO
	class KingImpeachmentElection : public detail::StoredProcedure
	{
	public:
		KingImpeachmentElection();
		KingImpeachmentElection(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byResult, const uint8_t byNation, const char* strAccountID, 
			const char* strCharID, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~KingImpeachmentElection();
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentRequestElection
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_IMPEACHMENT_REQUEST_ELECTION MANUAL_TODO
	class KingImpeachmentRequestElection : public detail::StoredProcedure
	{
	public:
		KingImpeachmentRequestElection();
		KingImpeachmentRequestElection(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t byType, const uint8_t byNation, const char* strUserID) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingImpeachmentResult
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_IMPEACHMENT_RESULT MANUAL_TODO
	class KingImpeachmentResult : public detail::StoredProcedure
	{
	public:
		KingImpeachmentResult();
		KingImpeachmentResult(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byNation, int16_t* nTotalMan, int16_t* nAgreeMan) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~KingImpeachmentResult();
	};

	/// \brief MANUAL_TODO
	/// \class KingInsertPrizeEvent
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_INSERT_PRIZE_EVENT MANUAL_TODO
	class KingInsertPrizeEvent : public detail::StoredProcedure
	{
	public:
		KingInsertPrizeEvent();
		KingInsertPrizeEvent(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const int32_t nAmount, 
			const char* strUserID) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionList
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_UPDATE_ELECTION_LIST MANUAL_TODO
	class KingUpdateElectionList : public detail::StoredProcedure
	{
	public:
		KingUpdateElectionList();
		KingUpdateElectionList(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byDBType, const uint8_t byType, const uint8_t byNation, 
			const int16_t nKnights, const int32_t nAmount, const char* strUserID) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionSchdule
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_UPDATE_ELECTION_SCHDULE MANUAL_TODO
	class KingUpdateElectionSchdule : public detail::StoredProcedure
	{
	public:
		KingUpdateElectionSchdule();
		KingUpdateElectionSchdule(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const int16_t sYear, 
			const uint8_t byMonth, const uint8_t byDay, const uint8_t byHour, 
			const uint8_t byMinute) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateElectionStatus
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_UPDATE_ELECTION_STATUS MANUAL_TODO
	class KingUpdateElectionStatus : public detail::StoredProcedure
	{
	public:
		KingUpdateElectionStatus();
		KingUpdateElectionStatus(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateImpeachmentStatus
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_UPDATE_IMPEACHMENT_STATUS MANUAL_TODO
	class KingUpdateImpeachmentStatus : public detail::StoredProcedure
	{
	public:
		KingUpdateImpeachmentStatus();
		KingUpdateImpeachmentStatus(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const int16_t sYear, 
			const uint8_t byMonth, const uint8_t byDay, const uint8_t byHour, 
			const uint8_t byMinute, const char* strUserID) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KingUpdateNoahOrExpEvent
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KING_UPDATE_NOAH_OR_EXP_EVENT MANUAL_TODO
	class KingUpdateNoahOrExpEvent : public detail::StoredProcedure
	{
	public:
		KingUpdateNoahOrExpEvent();
		KingUpdateNoahOrExpEvent(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const uint8_t byNation, const uint8_t byAmount, 
			const uint8_t byDay, const uint8_t byHout, const uint8_t byMinute, 
			const int16_t sDurationTime) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class KnightsRatingUpdate
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" KNIGHTS_RATING_UPDATE MANUAL_TODO
	class KnightsRatingUpdate : public detail::StoredProcedure
	{
	public:
		KnightsRatingUpdate();
		KnightsRatingUpdate(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class LoadAccountCharid
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" LOAD_ACCOUNT_CHARID MANUAL_TODO
	class LoadAccountCharid : public detail::StoredProcedure
	{
	public:
		LoadAccountCharid();
		LoadAccountCharid(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(int* returnValue, 
			const char* Accountid) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~LoadAccountCharid();
	};

	/// \brief MANUAL_TODO
	/// \class LoadCharInfo
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" LOAD_CHAR_INFO MANUAL_TODO
	class LoadCharInfo : public detail::StoredProcedure
	{
	public:
		LoadCharInfo();
		LoadCharInfo(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* CharId, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~LoadCharInfo();
	};

	/// \brief MANUAL_TODO
	/// \class LoadKnightsMembers
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" LOAD_KNIGHTS_MEMBERS MANUAL_TODO
	class LoadKnightsMembers : public detail::StoredProcedure
	{
	public:
		LoadKnightsMembers();
		LoadKnightsMembers(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t knightsindex) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class LoadPremiumServiceUser
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" LOAD_PREMIUM_SERVICE_USER MANUAL_TODO
	class LoadPremiumServiceUser : public detail::StoredProcedure
	{
	public:
		LoadPremiumServiceUser();
		LoadPremiumServiceUser(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, int32_t* type, int32_t* days) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~LoadPremiumServiceUser();
	};

	/// \brief MANUAL_TODO
	/// \class LoadRentalData
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" LOAD_RENTAL_DATA MANUAL_TODO
	class LoadRentalData : public detail::StoredProcedure
	{
	public:
		LoadRentalData();
		LoadRentalData(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strAccountID) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class LoadSavedMagic
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" LOAD_SAVED_MAGIC MANUAL_TODO
	class LoadSavedMagic : public detail::StoredProcedure
	{
	public:
		LoadSavedMagic();
		LoadSavedMagic(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* CharId, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~LoadSavedMagic();
	};

	/// \brief MANUAL_TODO
	/// \class LoadUserData
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" LOAD_USER_DATA MANUAL_TODO
	class LoadUserData : public detail::StoredProcedure
	{
	public:
		LoadUserData();
		LoadUserData(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* id, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~LoadUserData();
	};

	/// \brief MANUAL_TODO
	/// \class LoadWebItemmall
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" LOAD_WEB_ITEMMALL MANUAL_TODO
	class LoadWebItemmall : public detail::StoredProcedure
	{
	public:
		LoadWebItemmall();
		LoadWebItemmall(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class NationSelect
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" NATION_SELECT MANUAL_TODO
	class NationSelect : public detail::StoredProcedure
	{
	public:
		NationSelect();
		NationSelect(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const char* AccountID, const uint8_t Nation) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~NationSelect();
	};

	/// \brief MANUAL_TODO
	/// \class ProcInsertCurrentuser
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" PROC_INSERT_CURRENTUSER MANUAL_TODO
	class ProcInsertCurrentuser : public detail::StoredProcedure
	{
	public:
		ProcInsertCurrentuser();
		ProcInsertCurrentuser(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const int16_t nServerNo, 
			const char* strServerIP, const char* ClientIP, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~ProcInsertCurrentuser();
	};

	/// \brief MANUAL_TODO
	/// \class RankKnights
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" RANK_KNIGHTS MANUAL_TODO
	class RankKnights : public detail::StoredProcedure
	{
	public:
		RankKnights();
		RankKnights(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemCancel
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" RENTAL_ITEM_CANCEL MANUAL_TODO
	class RentalItemCancel : public detail::StoredProcedure
	{
	public:
		RentalItemCancel();
		RentalItemCancel(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const int32_t nRentalIndex, 
			const int32_t nItemNumber, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~RentalItemCancel();
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemDestory
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" RENTAL_ITEM_DESTORY MANUAL_TODO
	class RentalItemDestory : public detail::StoredProcedure
	{
	public:
		RentalItemDestory();
		RentalItemDestory(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const int32_t nItemNumber, 
			const int32_t nRentalIndex, const int16_t nDurability, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~RentalItemDestory();
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemDurabilityUpdate
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" RENTAL_ITEM_DURABILITY_UPDATE MANUAL_TODO
	class RentalItemDurabilityUpdate : public detail::StoredProcedure
	{
	public:
		RentalItemDurabilityUpdate();
		RentalItemDurabilityUpdate(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int32_t nRentalIndex, const int32_t nDurability) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemLend
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" RENTAL_ITEM_LEND MANUAL_TODO
	class RentalItemLend : public detail::StoredProcedure
	{
	public:
		RentalItemLend();
		RentalItemLend(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* AccountID, const char* CharID, const int32_t nRentalIndex, 
			const int32_t nItemNumber, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~RentalItemLend();
	};

	/// \brief MANUAL_TODO
	/// \class RentalItemRegister
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" RENTAL_ITEM_REGISTER MANUAL_TODO
	class RentalItemRegister : public detail::StoredProcedure
	{
	public:
		RentalItemRegister();
		RentalItemRegister(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* charID, const char* AccountID, const int16_t sRentalTime, 
			const int32_t nItemID, const int16_t sDurability, const int32_t nMoney, 
			const uint8_t bGameBangType, const uint8_t bItemType, const uint8_t bItemClass, 
			const int64_t nSerialNumber, int32_t* nRet_Index, int16_t* nRet) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~RentalItemRegister();
	};

	/// \brief MANUAL_TODO
	/// \class ResetLoyaltyMonthly
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" RESET_LOYALTY_MONTHLY MANUAL_TODO
	class ResetLoyaltyMonthly : public detail::StoredProcedure
	{
	public:
		ResetLoyaltyMonthly();
		ResetLoyaltyMonthly(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class SkillshortcutLoad
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" SKILLSHORTCUT_LOAD MANUAL_TODO
	class SkillshortcutLoad : public detail::StoredProcedure
	{
	public:
		SkillshortcutLoad();
		SkillshortcutLoad(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class SkillshortcutSave
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" SKILLSHORTCUT_SAVE MANUAL_TODO
	class SkillshortcutSave : public detail::StoredProcedure
	{
	public:
		SkillshortcutSave();
		SkillshortcutSave(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID, const int16_t nCount, const char* strSkillData) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateBattleHero
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_BATTLE_HERO MANUAL_TODO
	class UpdateBattleHero : public detail::StoredProcedure
	{
	public:
		UpdateBattleHero();
		UpdateBattleHero(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID, const char* strNation, const char* strClass, 
			const char* strAchievement, const int16_t nIndex) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateBattleResult
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_BATTLE_RESULT MANUAL_TODO
	class UpdateBattleResult : public detail::StoredProcedure
	{
	public:
		UpdateBattleResult();
		UpdateBattleResult(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* UserId, const uint8_t byNation, const int16_t index) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateEditorItemData
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_EDITOR_ITEM_DATA MANUAL_TODO
	class UpdateEditorItemData : public detail::StoredProcedure
	{
	public:
		UpdateEditorItemData();
		UpdateEditorItemData(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* charid, const char* accountid, const char* opid, 
			const char* opip, const int16_t sPos, const int32_t nItemID1, 
			const int32_t nItemID2, const uint8_t byType, const int16_t sDBIndex) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnights
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_KNIGHTS MANUAL_TODO
	class UpdateKnights : public detail::StoredProcedure
	{
	public:
		UpdateKnights();
		UpdateKnights(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const uint8_t Type, const char* UserId, 
			const int16_t KnightsIndex, const uint8_t Domination) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~UpdateKnights();
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsAlliance
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_KNIGHTS_ALLIANCE MANUAL_TODO
	class UpdateKnightsAlliance : public detail::StoredProcedure
	{
	public:
		UpdateKnightsAlliance();
		UpdateKnightsAlliance(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const int16_t shAlliancIndex, const int16_t shKnightsIndex, 
			const uint8_t byEmptyIndex, const uint8_t bySiegeFlag) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsMark
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_KNIGHTS_MARK MANUAL_TODO
	class UpdateKnightsMark : public detail::StoredProcedure
	{
	public:
		UpdateKnightsMark();
		UpdateKnightsMark(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			int16_t* nRet, const int16_t IDNum, const int16_t MarkLen, 
			const std::vector<uint8_t>& KnightMark) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~UpdateKnightsMark();
	};

	/// \brief MANUAL_TODO
	/// \class UpdateKnightsWar
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_KNIGHTS_WAR MANUAL_TODO
	class UpdateKnightsWar : public detail::StoredProcedure
	{
	public:
		UpdateKnightsWar();
		UpdateKnightsWar(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const uint8_t byType, const int16_t shWhite, const int16_t shBlue) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdatePersonalRank
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_PERSONAL_RANK MANUAL_TODO
	class UpdatePersonalRank : public detail::StoredProcedure
	{
	public:
		UpdatePersonalRank();
		UpdatePersonalRank(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdatePremiumServiceUser
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_PREMIUM_SERVICE_USER MANUAL_TODO
	class UpdatePremiumServiceUser : public detail::StoredProcedure
	{
	public:
		UpdatePremiumServiceUser();
		UpdatePremiumServiceUser(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(int* returnValue, 
			const char* AccountID, const int16_t Days) noexcept(false);

		/// \brief Flushes any output variables or return values on destruction
		~UpdatePremiumServiceUser();
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSavedMagic
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_SAVED_MAGIC MANUAL_TODO
	class UpdateSavedMagic : public detail::StoredProcedure
	{
	public:
		UpdateSavedMagic();
		UpdateSavedMagic(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* strCharID, const int32_t Skill1, const int16_t During1, 
			const int32_t Skill2, const int16_t During2, const int32_t Skill3, 
			const int16_t During3, const int32_t Skill4, const int16_t During4, 
			const int32_t Skill5, const int16_t During5, const int32_t Skill6, 
			const int16_t During6, const int32_t Skill7, const int16_t During7, 
			const int32_t Skill8, const int16_t During8, const int32_t Skill9, 
			const int16_t During9, const int32_t Skill10, const int16_t During10) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiege
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_SIEGE MANUAL_TODO
	class UpdateSiege : public detail::StoredProcedure
	{
	public:
		UpdateSiege();
		UpdateSiege(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const int16_t sKnightsIndex, const uint8_t byWarType, 
			const uint8_t byUpdateType, const uint8_t byWarDay, const uint8_t byWarTime, 
			const uint8_t byWarMinute) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_SIEGE_CHALLENGER MANUAL_TODO
	class UpdateSiegeChallenger : public detail::StoredProcedure
	{
	public:
		UpdateSiegeChallenger();
		UpdateSiegeChallenger(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const char* strChallengerList) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeChallenger2
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_SIEGE_CHALLENGER2 MANUAL_TODO
	class UpdateSiegeChallenger2 : public detail::StoredProcedure
	{
	public:
		UpdateSiegeChallenger2();
		UpdateSiegeChallenger2(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const int16_t sKnights_1, const int16_t sKnights_2, 
			const int16_t sKnights_3, const int16_t sKnights_4, const int16_t sKnights_5, 
			const int16_t sKnights_6, const int16_t sKnights_7, const int16_t sKnights_8, 
			const int16_t sKnights_9, const int16_t sKnights_10, const char* strChallengerList) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateSiegeDecideChallenger
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_SIEGE_DECIDE_CHALLENGER MANUAL_TODO
	class UpdateSiegeDecideChallenger : public detail::StoredProcedure
	{
	public:
		UpdateSiegeDecideChallenger();
		UpdateSiegeDecideChallenger(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const int16_t sCastleIndex, const int16_t sKnights_1, const int16_t sKnights_2, 
			const int16_t sKnights_3, const int16_t sKnights_4, const int16_t sKnights_5, 
			const int16_t sKnights_6, const int16_t sKnights_7, const int16_t sKnights_8, 
			const int16_t sKnights_9, const int16_t sKnights_10) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateUserData
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_USER_DATA MANUAL_TODO
	class UpdateUserData : public detail::StoredProcedure
	{
	public:
		UpdateUserData();
		UpdateUserData(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* id, const uint8_t Nation, const uint8_t Race, 
			const int16_t Class, const uint8_t HairColor, const uint8_t Rank, 
			const uint8_t Title, const uint8_t Level, const int32_t Exp, 
			const int32_t Loyalty, const uint8_t Face, const uint8_t City, 
			const int16_t Knights, const uint8_t Fame, const int16_t Hp, 
			const int16_t Mp, const int16_t Sp, const uint8_t Str, 
			const uint8_t Sta, const uint8_t Dex, const uint8_t Intel, 
			const uint8_t Cha, const uint8_t Authority, const uint8_t Points, 
			const int32_t Gold, const uint8_t Zone, const int16_t Bind, 
			const int32_t PX, const int32_t PZ, const int32_t PY, 
			const int32_t dwTime, const int16_t QuestTotal, const std::vector<uint8_t>& strSkill, 
			const std::vector<uint8_t>& strItem, const std::vector<uint8_t>& strSerial, const std::vector<uint8_t>& strQuest, 
			const int32_t MannerPoint, const int32_t LoyaltyMonthly) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UpdateWarehouse
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" UPDATE_WAREHOUSE MANUAL_TODO
	class UpdateWarehouse : public detail::StoredProcedure
	{
	public:
		UpdateWarehouse();
		UpdateWarehouse(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute(
			const char* accountid, const int32_t Money, const int32_t dwTime, 
			const std::vector<uint8_t>& strItem, const std::vector<uint8_t>& strSerial) noexcept(false);
	};

	/// \brief MANUAL_TODO
	/// \class UserKnightsRatingUpdate
	/// \xrefitem dbproc_GAME "GAME Database Stored Procedures" "GAME Database Stored Procedures" USER_KNIGHTS_RATING_UPDATE MANUAL_TODO
	class UserKnightsRatingUpdate : public detail::StoredProcedure
	{
	public:
		UserKnightsRatingUpdate();
		UserKnightsRatingUpdate(std::shared_ptr<nanodbc::connection> conn);

		/// \brief Returns the query associated with preparing this statement
		static const std::string& Query();

		/// \brief Returns the associated database type for the table
		static modelUtil::DbType DbType();

		/// \brief Executes the stored procedure
		/// \throws nanodbc::database_error
		std::weak_ptr<nanodbc::result> execute() noexcept(false);
	};
}

#endif // STOREDPROC_STOREDPROC_H