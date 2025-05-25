#ifndef RESPONSEINFOWIN_H
#define RESPONSEINFOWIN_H

#include <QWidget>
#include <QSqlRecord>
#include <QSqlTableModel>

namespace Ui {
class responseinfowin;
}

class responseinfowin : public QWidget
{
    Q_OBJECT

public:
    explicit responseinfowin(const QSqlRecord& record, QSqlTableModel *_model, QWidget *parent = nullptr);
    ~responseinfowin();

private:
    QSqlTableModel* model;

    Ui::responseinfowin *ui;

private slots:
    void updateHandler();

    void deleteHandler();
};

#endif // RESPONSEINFOWIN_H
