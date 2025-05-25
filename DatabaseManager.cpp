#include "DatabaseManager.h"
#include "SessionInfo.h"
#include <QMessageBox>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQuery>

QSqlDatabase DatabaseManager::getConnection(){
    if(!QSqlDatabase::contains("dbconnection")){
        QMessageBox::critical(nullptr, "Ошибка", "Не удалось найти соединение");
    }
    return QSqlDatabase::database("dbconnection");
}

QString DatabaseManager::getUserId(const QString &login){
    QSqlQuery query(getConnection());
    query.prepare("SELECT user_id FROM users WHERE user_login = :login");
    query.bindValue(":login", login);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return "";
    }
    query.next();
    return query.value(0).toString();
}

QString DatabaseManager::getAgentId(const QString &login){
    QSqlQuery query(getConnection());
    query.prepare("SELECT agent_id FROM agents WHERE agent_login = :login");
    query.bindValue(":login", login);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return "";
    }
    query.next();
    return query.value(0).toString();
}

bool DatabaseManager::makeConnection(const QString& ip){
    if(!QSqlDatabase::contains("dbconnection")){
        QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", "dbconnection");
        db.setHostName(ip);
        db.setDatabaseName("Support_System");
        db.setUserName("postgres");
        db.setPassword("zaq1@WSX");
        if(!db.open()){
            qDebug() << db.lastError().text() << '\n';
            QSqlDatabase::removeDatabase("dbconnection");
            return false;
        }
    }
    return true;
}

bool DatabaseManager::checkUser(const QString& login){
    QSqlQuery query(getConnection());
    query.prepare("SELECT COUNT(*) FROM users WHERE user_login = :login");
    query.bindValue(":login", login);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY!\n" << query.lastError().text() << '\n';
        return false;
    }
    if(query.next()) return query.value(0).toInt() == 0;
    return false;
}

bool DatabaseManager::checkAgent(const QString& login){
    QSqlQuery query(getConnection());
    query.prepare("SELECT COUNT(*) FROM agents WHERE agent_login = :login");
    query.bindValue(":login", login);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY!\n" << query.lastError().text() << '\n';
        return false;
    }
    if(query.next()) return query.value(0).toInt() == 0;
    return false;
}

short DatabaseManager::addUserAcc(const QString& login, const QString& password){
    if(!checkUser(login)){
        return -1;
    }
    QSqlQuery query(getConnection());
    query.prepare("INSERT INTO users(user_login, user_password) VALUES(:login, :password)");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY!\n" << query.lastError().text() << '\n';
        return -2;
    }
    return 0;
}

short DatabaseManager::addAgentAcc(const QString& login, const QString& password){
    if(!checkAgent(login)){
        return -1;
    }
    QSqlQuery query(getConnection());
    query.prepare("INSERT INTO agents(agent_login, agent_password) VALUES(:login, :password)");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY!\n" << query.lastError().text() << '\n';
        return -2;
    }
    return 0;
}

short DatabaseManager::checkUserPassword(const QString& login, const QString& password){
    if(!checkUser(login)){
        QSqlQuery query(getConnection());
        query.prepare("SELECT user_password FROM users WHERE user_login = :login");
        query.bindValue(":login", login);
        query.exec();
        query.next();
        if(query.value(0).toString() != password){
            return -2;
        }
        return 0;
    }
    return -1;
}

short DatabaseManager::checkAgentPassword(const QString& login, const QString& password){
    if(!checkAgent(login)){
        QSqlQuery query(getConnection());
            query.prepare("SELECT agent_password FROM agents WHERE agent_login = :login");
            query.bindValue(":login", login);
            query.exec();
            query.next();
            if(query.value(0).toString() != password){
                return -2;
            }
            return 0;
        }
    return -1;
}

bool DatabaseManager::makeReport(const QString& text){
    QSqlQuery query(getConnection());
    query.prepare("INSERT INTO reports(sender_id, report_text, send_time) VALUES(:id, :text, CURRENT_TIMESTAMP)");
    query.bindValue(":id", SessionInfo::getSessionInfo().accId);
    query.bindValue(":text", text);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << query.lastError() << '\n';
        return false;
    }
    return true;
}

bool DatabaseManager::makeResponse(const QString& report_id, const QString& text){
    QSqlQuery query(getConnection());
    query.prepare("INSERT INTO response(report_id, agent_id, response_text, response_time) VALUES(:rep_id, :id, :text, CURRENT_TIMESTAMP)");
    query.bindValue(":rep_id", report_id);
    query.bindValue(":id", SessionInfo::getSessionInfo().accId);
    query.bindValue(":text", text);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return false;
    }
    return true;
}

bool DatabaseManager::updateReport(const QString& id, const QString& text){
    QSqlQuery query(getConnection());
    query.prepare("UPDATE reports SET report_text = :text WHERE report_id = :id");
    query.bindValue(":text", text);
    query.bindValue(":id", id);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return false;
    }
    return true;
}

bool DatabaseManager::updateResponse(const QString& id, const QString& text){
    QSqlQuery query(getConnection());
    query.prepare("UPDATE response SET response_text = :text WHERE response_id = :id");
    query.bindValue(":text", text);
    query.bindValue(":id", id);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return false;
    }
    return true;
}

QSqlRecord DatabaseManager::getResponse(const QString& id){
    QSqlQuery query(getConnection());
    query.prepare("SELECT * FROM response WHERE report_id = :id");
    query.bindValue(":id", id);
    if(!query.exec() || !query.next()){
        qDebug() << "ERROR IN QUERY OR EMPTY RESULT" << '\n';
        return QSqlRecord();
    }
    return query.record();
}

bool DatabaseManager::eraseReport(const QString& id){
    QSqlQuery query(getConnection());
    query.prepare("DELETE FROM reports WHERE report_id = :id");
    query.bindValue(":id", id);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return false;
    }
    return true;
}

bool DatabaseManager::eraseResponse(const QString& id){
    QSqlQuery query(getConnection());
    query.prepare("DELETE FROM response WHERE response_id = :id");
    query.bindValue(":id", id);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return false;
    }
    return true;
}

bool DatabaseManager::eraseAllResponses(const QString& id){
    QSqlQuery query(getConnection());
    query.prepare("DELETE FROM response WHERE report_id = :id");
    query.bindValue(":id", id);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return false;
    }
    return true;
}

bool DatabaseManager::isResponseExist(const QString& id){
    QSqlQuery query(getConnection());
    query.prepare("SELECT COUNT(*) FROM response WHERE report_id = :id");
    query.bindValue(":id", id);
    if(!query.exec()){
        qDebug() << "ERROR IN QUERY" << '\n';
        return false;
    }
    query.next();
    return query.value(0).toInt() == 0 ? false : true;
}
