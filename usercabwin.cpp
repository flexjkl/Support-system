#include "usercabwin.h"
#include "ui_usercabwin.h"
#include "DatabaseManager.h"
#include "SessionInfo.h"
#include "WidgetStackManager.h"
#include "reportinfowin.h"
#include <QSqlTableModel>
#include <QSqlRecord>

usercabwin::usercabwin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usercabwin)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Личный кабинет");

    connect(ui->updateButton, &QPushButton::clicked, this, &updateHandler);
    connect(ui->backButton, &QPushButton::clicked, this, &close);

    QSqlTableModel *model = new QSqlTableModel(this, DatabaseManager::getConnection());
    model->setTable("reports");
    model->setFilter(QString("sender_id = %1").arg(SessionInfo::getSessionInfo().accId));
    model->select();
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(2, Qt::Horizontal, "Текст");
    model->setHeaderData(3, Qt::Horizontal, "Время отправки");

    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->hideColumn(1);
    ui->tableView->resizeColumnsToContents();

    SessionInfo::Info info = SessionInfo::getSessionInfo();

    ui->idLine->setText(info.accId);
    ui->loginLine->setText(info.login);
    ui->accTypeLine->setText(info.accountType);

    connect(ui->tableView, &QTableView::doubleClicked, this, &rowHandler);
}

usercabwin::~usercabwin()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void usercabwin::rowHandler(const QModelIndex& index){
    if(!index.isValid()) return;

    int row = index.row();
    QSqlRecord record = dynamic_cast<QSqlTableModel*>(ui->tableView->model())->record(row);
    WidgetStackManager::openNew(new reportinfowin(record, dynamic_cast<QSqlTableModel*>(ui->tableView->model()), this));
}

void usercabwin::updateHandler(){
    dynamic_cast<QSqlTableModel*>(ui->tableView->model())->select();
}
