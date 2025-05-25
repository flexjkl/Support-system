#include "agentresponselist.h"
#include "ui_agentresponselist.h"
#include "WidgetStackManager.h"
#include "responseinfowin.h"
#include "DatabaseManager.h"
#include "SessionInfo.h"
#include <QSqlTableModel>

agentresponselist::agentresponselist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::agentresponselist)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Мои ответы");

    QSqlTableModel* model = new QSqlTableModel(this, DatabaseManager::getConnection());
    model->setTable("response");
    model->setFilter(QString("agent_id = %1").arg(SessionInfo::getSessionInfo().accId));
    model->select();
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "ID сообщения");
    model->setHeaderData(3, Qt::Horizontal, "Текст");
    model->setHeaderData(4, Qt::Horizontal, "Время отправки");

    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->hideColumn(2);

    connect(ui->closeButton, &QPushButton::clicked, this, &close);
    connect(ui->updateButton, &QPushButton::clicked, this, &updateHandler);
    connect(ui->tableView, &QTableView::doubleClicked, this, &rowHandler);
}

agentresponselist::~agentresponselist()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void agentresponselist::updateHandler(){
    dynamic_cast<QSqlTableModel*>(ui->tableView->model())->select();
}

void agentresponselist::rowHandler(const QModelIndex &index){
    if(!index.isValid()) return;

    int row = index.row();
    QSqlRecord record = dynamic_cast<QSqlTableModel*>(ui->tableView->model())->record(row);
    WidgetStackManager::openNew(new responseinfowin(record, dynamic_cast<QSqlTableModel*>(ui->tableView->model()), this));
}
