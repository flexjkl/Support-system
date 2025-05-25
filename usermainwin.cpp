#include "usermainwin.h"
#include "ui_usermainwin.h"
#include "reportwritewin.h"
#include "usercabwin.h"
#include "WidgetStackManager.h"
#include "SessionInfo.h"
#include "registwindow.h"
#include <QCloseEvent>
#include <QMessageBox>
#include <QPushButton>

usermainwin::usermainwin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usermainwin)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);

    this->setWindowTitle("Главная");

    connect(ui->perCabButton, &QPushButton::clicked, this, &perCabHandler);
    connect(ui->reportButton, &QPushButton::clicked, this, &reportHandler);
    connect(ui->exitButton, &QPushButton::clicked, this, &close);
}

usermainwin::~usermainwin()
{
    delete ui;
}

void usermainwin::closeEvent(QCloseEvent *event){
    QMessageBox accBox;
    accBox.setWindowTitle("Подтверждение");
    accBox.setText("Вы уверены, что хотите выйти?");

    QPushButton* yesButton = accBox.addButton("Да", QMessageBox::YesRole);
    accBox.addButton("Нет", QMessageBox::NoRole);
    accBox.exec();

    if(accBox.clickedButton() == yesButton){
        SessionInfo::endSession();
        WidgetStackManager::eraseTop();
        WidgetStackManager::openNew(new RegistWindow);
        event->accept();
        return;
    }
    event->ignore();
}

void usermainwin::perCabHandler(){
    WidgetStackManager::openNew(new usercabwin(this));
}

void usermainwin::reportHandler(){
    WidgetStackManager::openNew(new reportwritewin(this));
}
