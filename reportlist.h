#ifndef REPORTLIST_H
#define REPORTLIST_H

#include <QWidget>

namespace Ui {
class reportList;
}

class reportList : public QWidget
{
    Q_OBJECT

public:
    explicit reportList(QWidget *parent = nullptr);
    ~reportList();

private:
    Ui::reportList *ui;

private slots:
    void rowHandler(const QModelIndex& index);
};

#endif // REPORTLIST_H
