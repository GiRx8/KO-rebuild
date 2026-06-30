#ifndef BINDERUTIL_BINDERUTIL_H
#define BINDERUTIL_BINDERUTIL_H

#pragma once

#include <ctime>

namespace nanodbc
{
    struct timestamp;
}

/// \brief Collection of hand-written utilities and types
namespace binderUtil
{
    std::time_t CTimeFromDbTime(const nanodbc::timestamp& ts);
    nanodbc::timestamp DbTimeFromCTime(const std::time_t& timeIn);
}

#endif // BINDERUTIL_BINDERUTIL_H
