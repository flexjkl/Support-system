#include "represponsewin.h"
#include "ui_represponsewin.h"
#include "DatabaseManager.h"
#include "WidgetStackManager.h"
#include <QMessageBox>
#include <QSqlRecord>

QWidget* parentWid;

represponsewin::represponsewin(const QString& repId, QSqlTableModel *_model, QWidget *parent)
    : QWidget(parent)
    , id(repId)
    , model(_model)
    , ui(new Ui::represponsewin)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Ответ");

    QSqlRecord record = DatabaseManager::getResponse(id);

    ui->IDLine->setText(record.value(0).toString());
    ui->textEdit->setText(record.value(3).toString());

    connect(ui->yesButton, &QPushButton::clicked, this, &yesHandler);
    connect(ui->noButton, &QPushButton::clicked, this, &noHandler);
    connect(ui->closeButton, &QPushButton::clicked, this, &close);

    parentWid = parent;
}

represponsewin::~represponsewin()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void represponsewin::yesHandler(){
    DatabaseManager::eraseAllResponses(id);
    DatabaseManager::eraseReport(id);
    model->select();
    QMessageBox::information(this, "Спасибо!", "Были рады вам помочь :-)");
    this->close();
    parentWidget()->close();
}

void represponsewin::noHandler(){
    DatabaseManager::eraseResponse(ui->IDLine->text());
    QMessageBox::information(this, "Извините!", "Мы постараемся найти решение как можно быстрее :-(");
    this->close();
}
