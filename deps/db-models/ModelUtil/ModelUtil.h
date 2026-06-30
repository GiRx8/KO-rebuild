#ifndef MODELUTIL_MODELUTIL_H
#define MODELUTIL_MODELUTIL_H

#pragma once

#include <cstdint>
#include <string>

/// \brief Collection of hand-written utilities and types
namespace modelUtil
{
    /// \brief Database type identifier
    enum class DbType : int8_t
    {
        INVALID = -1,
        ACCOUNT = 0,
        GAME = 1,
        LOG = 2
    };

    /// \brief Returns the string equivalent of a DbType
    const std::string& DbTypeString(DbType db);
}

#endif // MODELUTIL_MODELUTIL_H
