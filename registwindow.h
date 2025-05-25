#ifndef REGISTWINDOW_H
#define REGISTWINDOW_H

#include "DatabaseManager.h"
#include <QWidget>
#include <QtSql>
#include <QStack>

QT_BEGIN_NAMESPACE
namespace Ui {
class RegistWindow;
}
QT_END_NAMESPACE

class RegistWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RegistWindow(QWidget *parent = nullptr);

    ~RegistWindow();

    static bool makeDataBaseConnect(QSqlDatabase& dbconnect);

private:
    bool checkInputCorrect();

    Ui::RegistWindow *ui;

private slots:
    void loginHandler();

    void registHandler();
};
#endif // REGISTWINDOW_H
