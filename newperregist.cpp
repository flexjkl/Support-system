#include "newperregist.h"
#include "ui_newperregist.h"
#include "WidgetStackManager.h"
#include "registwindow.h"
#include "DatabaseManager.h"
#include <QMessageBox>
#include <QButtonGroup>

newperregist::newperregist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::newperregist)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Регистрация");

    QButtonGroup* checkBoxes = new QButtonGroup(this);
    checkBoxes->setExclusive(true);
    checkBoxes->addButton(ui->agentCheckBox);
    checkBoxes->addButton(ui->userCheckBox);

    connect(ui->registButton, &QPushButton::clicked, this, &registHandler);
    connect(ui->backButton, &QPushButton::clicked, this, &close);
}

newperregist::~newperregist()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void newperregist::registHandler(){
    if(!ui->userCheckBox->isChecked() && !ui->agentCheckBox->isChecked()){
        QMessageBox::critical(this, "Ошибка!", "Выберете тип аккаунта");
        return;
    }

    if(ui->loginField->text().isEmpty() || ui->passwordField->text().isEmpty()){
        QMessageBox::critical(this, "Ошибка!", "Вы не указали логин или пароль");
        return;
    }

    if(ui->loginField->text().length() < 5 || ui->passwordField->text().length() < 6){
        QMessageBox::critical(this, "Ошибка!", "Слишком короткий логин или пароль");
        return;
    }

    if(ui->loginField->text().length() > 30 || ui->passwordField->text().length() > 50){
        QMessageBox::critical(this, "Ошибка!", "Слишком длинный логин или пароль");
        return;
    }

    short statusCode = 0;

    switch(ui->agentCheckBox->isChecked()){
    case true: statusCode = DatabaseManager::addAgentAcc(ui->loginField->text(), ui->passwordField->text());
        break;

    case false: statusCode = DatabaseManager::addUserAcc(ui->loginField->text(), ui->passwordField->text());
    }

    if(!statusCode){
        QMessageBox::information(this, "Успех!", "Ваш аккаунт зарегистрирован!");
        return;
    }
    else if(statusCode == -1){
        QMessageBox::critical(this, "Ошибка!", "Логин занят");
        return;
    }
    else if(statusCode == -2){
        QMessageBox::critical(this, "Ошибка!", "Не удалось выполнить запрос");
        return;
    }
}
