#include "agentmainwin.h"
#include "ui_agentmainwin.h"
#include "reportlist.h"
#include "SessionInfo.h"
#include "WidgetStackManager.h"
#include "agentresponselist.h"
#include "registwindow.h"
#include <QMessageBox>
#include <QCloseEvent>

agentmainwin::agentmainwin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::agentmainwin)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);

    this->setWindowTitle("Главная");

    SessionInfo::Info info = SessionInfo::getSessionInfo();

    ui->idLine->setText(info.accId);
    ui->loginLine->setText(info.login);

    connect(ui->reportButton, &QPushButton::clicked, this, &reportHandler);
    connect(ui->requestButton, &QPushButton::clicked, this, &responseHandler);
    connect(ui->exitButton, &QPushButton::clicked, this, &close);
}

agentmainwin::~agentmainwin()
{
    delete ui;
}

void agentmainwin::closeEvent(QCloseEvent *event){
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


void agentmainwin::reportHandler(){
    WidgetStackManager::openNew(new reportList(this));
}

void agentmainwin::responseHandler(){
    WidgetStackManager::openNew(new agentresponselist(this));
}
