#include "ModelUtil.h"

namespace modelUtil
{
    static const std::string DbAccountString = "ACCOUNT";
    static const std::string DbGameString = "GAME";
    static const std::string DbLogString = "LOG";
    static const std::string DbInvalidString = "INVALID";

    const std::string& DbTypeString(DbType db)
    {
        switch (db)
        {
            case DbType::ACCOUNT: return DbAccountString;
            case DbType::GAME: return DbGameString;
            case DbType::LOG: return DbLogString;
            default: return DbInvalidString;
        }
    }
}
