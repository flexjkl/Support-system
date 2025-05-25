#include "registwindow.h"
#include "ui_registwindow.h"
#include "WidgetStackManager.h"
#include "newperregist.h"
#include "usermainwin.h"
#include "SessionInfo.h"
#include "agentmainwin.h"
#include <QStack>
#include <QMessageBox>
#include <QButtonGroup>
#include <QSqlQuery>

bool RegistWindow::checkInputCorrect(){
    if(!ui->userCheckBox->isChecked() && !ui->agentCheckBox->isChecked()){
        QMessageBox::critical(this, "Ошибка!", "Выберете тип аккаунта");
        return false;
    }

    if(ui->loginField->text().isEmpty() || ui->passwordField->text().isEmpty()){
        ui->loginField->text().clear();
        ui->passwordField->text().clear();
        QMessageBox::critical(this, "Ошибка!", "Вы не указали логин или пароль");
        return false;
    }

    return true;
}

RegistWindow::RegistWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegistWindow)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);

    this->setWindowTitle("Вход");

    QButtonGroup* checkBoxes = new QButtonGroup(this);
    checkBoxes->setExclusive(true);
    checkBoxes->addButton(ui->agentCheckBox);
    checkBoxes->addButton(ui->userCheckBox);

    connect(ui->loginButton, &QPushButton::clicked, this, &loginHandler);
    connect(ui->registButton, &QPushButton::clicked, this, &registHandler);
}

RegistWindow::~RegistWindow()
{
    delete ui;
}

void RegistWindow::loginHandler(){
    if(checkInputCorrect()){
        short statusCode = 0;
        switch(ui->agentCheckBox->isChecked()){
        case true:
            statusCode = DatabaseManager::checkAgentPassword(ui->loginField->text(), ui->passwordField->text());
            if(!statusCode){
                QMessageBox::information(this, "Вход выполнен!", "Добро пожаловать");
                WidgetStackManager::eraseTop();
                SessionInfo::startSession(ui->loginField->text(), "Агент");
                WidgetStackManager::openNew(new agentmainwin);
            }
            else if(statusCode == -1){
                QMessageBox::critical(this, "Ошибка!", "Агент с таким логином не найден");
                return;
            }
            else if(statusCode == -2){
                QMessageBox::critical(this, "Ошибка!", "Неверный пароль");
                return;
            }
            break;

        case false:
            statusCode = DatabaseManager::checkUserPassword(ui->loginField->text(), ui->passwordField->text());
            if(!statusCode){
                QMessageBox::information(this, "Вход выполнен!", "Добро пожаловать");
                WidgetStackManager::eraseTop();
                SessionInfo::startSession(ui->loginField->text(), "Пользователь");
                WidgetStackManager::openNew(new usermainwin);
            }
            else if(statusCode == -1){
                QMessageBox::critical(this, "Ошибка!", "Пользователь с таким логином не найден");
                return;
            }
            else if(statusCode == -2){
                QMessageBox::critical(this, "Ошибка!", "Неверный пароль");
                return;
            }
            break;

        }
        this->close();
    }
}

void RegistWindow::registHandler(){
    WidgetStackManager::openNew(new newperregist(this));
}
