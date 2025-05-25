#include "ipinsertwin.h"
#include "ui_ipinsertwin.h"
#include "DatabaseManager.h"
#include "registwindow.h"
#include "WidgetStackManager.h"
#include <QStack>
#include <QMessageBox>

ipinsertwin::ipinsertwin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ipinsertwin)
{
    ui->setupUi(this);

    this->setWindowTitle("IP");

    this->setAttribute(Qt::WA_DeleteOnClose);

    connect(ui->connectButton, &QPushButton::clicked, this, &connectHandler);
}

ipinsertwin::~ipinsertwin()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void ipinsertwin::connectHandler(){
    if(ui->ipline->text().isEmpty()){
        QMessageBox::critical(this,"Ошибка!","Вы не указали ip адресс сервера");
        return;
    }

    if(!DatabaseManager::makeConnection(ui->ipline->text())){
        QMessageBox::critical(this,"Ошибка!","Не удалось установить связь с базой данных");
        return;
    }

    this->close();
    WidgetStackManager::openNew(new RegistWindow);
}
