#include "agentresponsewin.h"
#include "ui_agentresponsewin.h"
#include "WidgetStackManager.h"
#include "DatabaseManager.h"
#include <QMessageBox>

agentresponsewin::agentresponsewin(const QString& _id, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::agentresponsewin)
    , id(_id)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Ответ");

    connect(ui->sendButton, &QPushButton::clicked, this, &sendHandler);
    connect(ui->backButton, &QPushButton::clicked, this, &close);
}

agentresponsewin::~agentresponsewin()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void agentresponsewin::sendHandler(){
    QString text = ui->textEdit->toPlainText();

    if(text.isEmpty() || text.length() > 500){
        QMessageBox::critical(this,"Ошибка!", "Некорректный текст");
        return;
    }

    if(!DatabaseManager::makeResponse(id, text)){
        QMessageBox::critical(this, "Ошибка!", "Не удалось выполнить запрос");
        return;
    }

    QMessageBox::information(this, "Успех!", "Ответ успешно отправлен!");
    this->close();
}
