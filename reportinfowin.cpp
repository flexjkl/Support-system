#include "reportinfowin.h"
#include "ui_reportinfowin.h"
#include "represponsewin.h"
#include "DatabaseManager.h"
#include "WidgetStackManager.h"
#include <QMessageBox>
#include <QSqlTableModel>

reportinfowin::reportinfowin(const QSqlRecord& record, QSqlTableModel* _model, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::reportinfowin)
    , model(_model)
{
    ui->setupUi(this);

    this->setWindowTitle("Информация о сообщении");
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    ui->IDLine->setText(record.value(0).toString());
    ui->textEdit->setText(record.value(2).toString());

    connect(ui->deleteButton, &QPushButton::clicked, this, &deleteHandler);
    connect(ui->updateButton, &QPushButton::clicked, this, &updateHandler);
    connect(ui->responseButton, &QPushButton::clicked, this, &responseHandler);
    connect(ui->closeButton, &QPushButton::clicked, this, &close);
}

reportinfowin::~reportinfowin()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void reportinfowin::updateHandler(){
    QString text = ui->textEdit->toPlainText();

    if(text.isEmpty()){
        QMessageBox::critical(this, "Ошибка!", "Некорректный текст!");
        return;
    }

    if(!DatabaseManager::updateReport(ui->IDLine->text(), text)){
        QMessageBox::critical(this, "Ошибка!", "Не удалось выполнить запрос");
        return;
    }
    model->select();
    QMessageBox::information(this, "Успех!", "Изменения сохранены");
}

void reportinfowin::responseHandler(){
    if(!DatabaseManager::isResponseExist(ui->IDLine->text())){
        QMessageBox::critical(this, "Ошибка!", "Пока никто не ответил на это сообщение");
        return;
    }
    WidgetStackManager::openNew(new represponsewin(ui->IDLine->text(), model, this));
}

void reportinfowin::deleteHandler(){
    QMessageBox accBox;
    accBox.setWindowTitle("Подтверждение");
    accBox.setText("Вы уверены, что хотите удалить сообщение?");

    QPushButton *yesButton = accBox.addButton("Да", QMessageBox::YesRole);
    accBox.addButton("Нет", QMessageBox::NoRole);

    accBox.exec();

    if(accBox.clickedButton() == yesButton){
        QString id = ui->IDLine->text();
        if(!DatabaseManager::eraseAllResponses(id) || !DatabaseManager::eraseReport(id)){
            QMessageBox::critical(this, "Ошибка!", "Ошибка при попытке удалить сообщение!");
            return;
        }
        model->select();
        QMessageBox::information(this, "Успех!", "Сообщение удалено");
        this->close();
    }
    else return;
}
