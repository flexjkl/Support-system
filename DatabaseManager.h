#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>

class DatabaseManager{
public:
    static QString getUserId(const QString &login);

    static QString getAgentId(const QString &login);

    static bool makeConnection(const QString& ip);

    static QSqlDatabase getConnection();

    static short addUserAcc(const QString& login, const QString& password);

    static short addAgentAcc(const QString& login, const QString& password);

    static short checkUserPassword(const QString& login, const QString& password);

    static short checkAgentPassword(const QString& login, const QString& password);

    static bool makeReport(const QString& text);

    static bool makeResponse(const QString& report_id, const QString& text);

    static bool updateReport(const QString& id, const QString& text);

    static bool updateResponse(const QString& id, const QString& text);

    static QSqlRecord getResponse(const QString& id);

    static bool eraseReport(const QString& id);

    static bool eraseResponse(const QString& id);

    static bool eraseAllResponses(const QString& id);

    static bool isResponseExist(const QString& id);

private:
   static bool checkUser(const QString& login);

   static bool checkAgent(const QString& login);
};

#endif // DATABASEMANAGER_H
