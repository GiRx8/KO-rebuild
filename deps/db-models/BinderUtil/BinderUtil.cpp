#include "BinderUtil.h"
#include <nanodbc/nanodbc.h>

namespace binderUtil
{
    std::time_t CTimeFromDbTime(const nanodbc::timestamp& ts)
    {
        std::tm tm;
        tm.tm_sec = ts.sec;  // seconds after the minute - [0, 60] including leap second
        tm.tm_min = ts.min;   // minutes after the hour - [0, 59]
        tm.tm_hour = ts.hour;  // hours since midnight - [0, 23]
        tm.tm_mday = ts.day;  // day of the month - [1, 31]
        tm.tm_mon = ts.month;   // months since January - [0, 11]
        tm.tm_year = ts.year - 1900;  // years since 1900
        
        return std::mktime(&tm);
    }

    nanodbc::timestamp DbTimeFromCTime(const std::time_t& timeIn)
    {
        nanodbc::timestamp ts = nanodbc::timestamp();
        std::tm tm;
#ifdef _MSC_VER
        gmtime_s(&tm, &timeIn);
#else
        gmtime_r(&timeIn, &tm);
#endif
        ts.sec = tm.tm_sec;
        ts.min = tm.tm_min;
        ts.hour = tm.tm_hour;
        ts.day = tm.tm_mday;
        ts.month = tm.tm_mon;
        ts.year = tm.tm_year + 1900;
        return ts;
    }
}
