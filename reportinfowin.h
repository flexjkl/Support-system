#ifndef REPORTINFOWIN_H
#define REPORTINFOWIN_H

#include <QWidget>
#include <QSqlRecord>
#include <QSqlTableModel>

namespace Ui {
class reportinfowin;
}

class reportinfowin : public QWidget
{
    Q_OBJECT

public:
    explicit reportinfowin(const QSqlRecord& record, QSqlTableModel* _model, QWidget *parent = nullptr);
    ~reportinfowin();

private:
    Ui::reportinfowin *ui;

    QSqlTableModel *model;

private slots:
    void updateHandler();

    void responseHandler();

    void deleteHandler();
};

#endif // REPORTINFOWIN_H
