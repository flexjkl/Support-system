#include "agentrepinfowin.h"
#include "ui_agentrepinfowin.h"
#include "WidgetStackManager.h"
#include "agentresponsewin.h"
#include <QSqlRecord>

agentrepinfowin::agentrepinfowin(const QSqlRecord& record, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::agentrepinfowin)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Сообщение");

    ui->IDLine->setText(record.value(0).toString());
    ui->textEdit->setText(record.value(2).toString());

    connect(ui->closeButton, &QPushButton::clicked, this, &close);
    connect(ui->responseButton, &QPushButton::clicked, this, &responseHandler);
}

agentrepinfowin::~agentrepinfowin()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void agentrepinfowin::responseHandler(){
    WidgetStackManager::openNew(new agentresponsewin(ui->IDLine->text(), this));
}
