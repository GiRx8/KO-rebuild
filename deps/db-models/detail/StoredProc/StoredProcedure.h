#ifndef STOREDPROC_DETAIL_STOREDPROCEDURE_H
#define STOREDPROC_DETAIL_STOREDPROCEDURE_H

#pragma once

#include <memory>
#include <string>

#include <nanodbc/nanodbc.h>

namespace storedProc
{
	namespace detail
	{
		class StoredProcedure
		{
		protected:
			StoredProcedure();
			StoredProcedure(std::shared_ptr<nanodbc::connection> conn);

			/// \brief Opens and prepares the statement with the associated query
			/// \throws nanodbc::database_error
			void prepare(const std::string& query) noexcept(false);

			/// \brief Flushes any output variables or return values on destruction
			// This must be called in the destructor of a stored procedure with any output & return values.
			void flush_on_destruct();

			/// \brief Executes the currently prepared statement
			/// \throws nanodbc::database_error
			/// \returns a result set, if applicable
			std::weak_ptr<nanodbc::result> execute() noexcept(false);

		public:
			/// \brief Sets the associated database connection.
			void set_connection(const std::shared_ptr<nanodbc::connection>& conn);

			/// \brief Flushes any output variables or return values by reading any and all result sets
			void flush();

		protected:
			void skip_rows_in_result_set();

			std::shared_ptr<nanodbc::connection> _conn;
			nanodbc::statement _stmt;
			std::shared_ptr<nanodbc::result> _result;
			bool _flushed;
		};
	}
}

#endif // STOREDPROC_DETAIL_STOREDPROCEDURE_H
