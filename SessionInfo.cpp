#include "SessionInfo.h"
#include "DatabaseManager.h"

SessionInfo::Info SessionInfo::userInfo;

void SessionInfo::startSession(const QString login, const QString accountType){
    userInfo.login = login;
    userInfo.accountType = accountType;

    if(accountType == "Агент") userInfo.accId = DatabaseManager::getAgentId(login);

    else userInfo.accId = DatabaseManager::getUserId(login);
}

SessionInfo::Info SessionInfo::getSessionInfo(){
    return userInfo;
}

void SessionInfo::endSession(){
    userInfo.accId.clear();
    userInfo.login.clear();
    userInfo.accountType.clear();
}
