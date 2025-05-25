#include "responseinfowin.h"
#include "ui_responseinfowin.h"
#include "DatabaseManager.h"
#include "WidgetStackManager.h"
#include <QMessageBox>
#include <QSqlTableModel>

responseinfowin::responseinfowin(const QSqlRecord& record, QSqlTableModel* _model, QWidget *parent)
    : QWidget(parent)
    , model(_model)
    , ui(new Ui::responseinfowin)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Информация об ответе");

    ui->IDLine->setText(record.value(0).toString());
    ui->textEdit->setText(record.value(3).toString());

    connect(ui->closeButton, &QPushButton::clicked, this, &close);
    connect(ui->updateButton, &QPushButton::clicked, this, &updateHandler);
    connect(ui->deleteButton, &QPushButton::clicked, this, &deleteHandler);
}

responseinfowin::~responseinfowin()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void responseinfowin::updateHandler(){
    QString text = ui->textEdit->toPlainText();

    if(text.isEmpty()){
        QMessageBox::critical(this, "Ошибка!", "Некорректный текст!");
        return;
    }

    if(!DatabaseManager::updateResponse(ui->IDLine->text(), text)){
        QMessageBox::critical(this, "Ошибка!", "Не удалось выполнить запрос");
        return;
    }

    model->select();
    QMessageBox::information(this, "Успех!", "Изменения сохранены");
}

void responseinfowin::deleteHandler(){
    QMessageBox accBox;
    accBox.setWindowTitle("Подтверждение");
    accBox.setText("Вы уверены, что хотите удалить ответ?");

    QPushButton *yesButton = accBox.addButton("Да", QMessageBox::YesRole);
    accBox.addButton("Нет", QMessageBox::NoRole);

    accBox.exec();

    if(accBox.clickedButton() == yesButton){
        if(!DatabaseManager::eraseResponse(ui->IDLine->text())){
            QMessageBox::critical(this, "Ошибка!", "Ошибка при попытке удалить ответ!");
            return;
        }
        model->select();
        QMessageBox::information(this, "Успех!", "Ответ удален");
        this->close();
    }
    else return;

}
