#ifndef SESSIONINFO_H
#define SESSIONINFO_H

#include <QString>

class SessionInfo{
public:
    struct Info{
        QString login, accountType, accId;
    };

    static void startSession(const QString login, const QString accountType);

    static Info getSessionInfo();

    static void endSession();

private:
    static Info userInfo;
};

#endif // SESSIONINFO_H
