#include "reportlist.h"
#include "ui_reportlist.h"
#include "agentrepinfowin.h"
#include "DatabaseManager.h"
#include "WidgetStackManager.h"
#include <QSqlTableModel>

reportList::reportList(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::reportList)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::WindowModality::WindowModal);
    this->setWindowFlag(Qt::Window, true);

    this->setWindowTitle("Список сообщений");

    QSqlTableModel* model = new QSqlTableModel(this, DatabaseManager::getConnection());
    model->setTable("reports");
    model->setSort(3, Qt::DescendingOrder);
    model->select();
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "ID пользователя");
    model->setHeaderData(2, Qt::Horizontal, "Текст");
    model->setHeaderData(3, Qt::Horizontal, "Время отправки");

    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->resizeColumnsToContents();

    connect(ui->closeButton, &QPushButton::clicked, this, &close);
    connect(ui->tableView, &QTableView::doubleClicked, this, &rowHandler);
}

reportList::~reportList()
{
    WidgetStackManager::eraseTop();
    delete ui;
}

void reportList::rowHandler(const QModelIndex& index){
    if(!index.isValid()) return;

    int row = index.row();
    QSqlRecord record = dynamic_cast<QSqlTableModel*>(ui->tableView->model())->record(row);
    WidgetStackManager::openNew(new agentrepinfowin(record, this));
}
