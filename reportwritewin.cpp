#include "reportwritewin.h"
#include "ui_reportwritewin.h"
#include "WidgetStackManager.h"
#include "DatabaseManager.h"
#include <QMessageBox>

reportwritewin::reportwritewin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::reportwritewin)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Сообщить об ошибке");

    connect(ui->sendButton, &QPushButton::clicked, this, &sendHandler);
    connect(ui->backButton, &QPushButton::clicked, this, &close);
}

reportwritewin::~reportwritewin()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void reportwritewin::sendHandler(){
    QString text = ui->textEdit->toPlainText();

    if(text.isEmpty() || text.length() > 500){
        QMessageBox::critical(this,"Ошибка!", "Некорректный текст");
        return;
    }

    if(!DatabaseManager::makeReport(text)){
        QMessageBox::critical(this, "Ошибка!", "Не удалось выполнить запрос");
        return;
    }

    ui->textEdit->clear();
    QMessageBox::information(this, "Успех!", "Сообщение успешно отправлено!");
}
