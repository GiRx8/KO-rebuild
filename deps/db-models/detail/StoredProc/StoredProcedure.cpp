#include "StoredProcedure.h"

namespace storedProc
{
	namespace detail
	{
		static const nanodbc::string SqlState_InvalidCursorState = NANODBC_TEXT("24000");

		StoredProcedure::StoredProcedure()
		{
			_flushed = false;
		}

		StoredProcedure::StoredProcedure(std::shared_ptr<nanodbc::connection> conn)
			: StoredProcedure()
		{
			_conn = conn;
		}

		void StoredProcedure::prepare(const std::string& query) noexcept(false)
		{
			if (_stmt.open())
				return;

			if (_conn == nullptr)
				throw std::logic_error("prepare() unexpectedly called before a connection has been assigned");

			_stmt = nanodbc::statement(*_conn.get(), query);
		}

		void StoredProcedure::flush_on_destruct()
		{
			try
			{
				flush();
			}
			// We should not throw exceptions from within a destructor.
			// We no longer care about the state of this statement anyway.
			catch (const nanodbc::database_error&)
			{
			}
		}

		std::weak_ptr<nanodbc::result> StoredProcedure::execute() noexcept(false)
		{
			_flushed = false;
			_result = std::make_shared<nanodbc::result>(_stmt.execute());
			return _result;
		}

		void StoredProcedure::set_connection(const std::shared_ptr<nanodbc::connection>& conn)
		{
			_result.reset();

			if (_stmt.open())
				_stmt.close();

			_conn = conn;
			_flushed = false;
		}

		void StoredProcedure::flush()
		{
			if (_flushed
				|| _result == nullptr)
				return;

			try
			{
				do
				{
					skip_rows_in_result_set();
				}
				while (_result->next_result());
			}
			catch (const nanodbc::database_error& ex)
			{
				// This will trigger normally if no result sets are available,
				// which is typical behaviour for most stored procedures.
				if (ex.state() != SqlState_InvalidCursorState)
					throw;
			}

			_flushed = true;
		}

		void StoredProcedure::skip_rows_in_result_set()
		{
			try
			{
				while (_result->next())
				{
				}
			}
			catch (const nanodbc::database_error& ex)
			{
				// This will trigger normally if no result sets are available,
				// which is typical behaviour for most stored procedures.
				if (ex.state() != SqlState_InvalidCursorState)
					throw;
			}
		}
	}
}
