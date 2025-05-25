#ifndef AGENTRESPONSELIST_H
#define AGENTRESPONSELIST_H

#include <QWidget>

namespace Ui {
class agentresponselist;
}

class agentresponselist : public QWidget
{
    Q_OBJECT

public:
    explicit agentresponselist(QWidget *parent = nullptr);
    ~agentresponselist();

private:
    Ui::agentresponselist *ui;

private slots:
    void updateHandler();

    void rowHandler(const QModelIndex &index);
};

#endif // AGENTRESPONSELIST_H
