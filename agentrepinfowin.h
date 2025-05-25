#ifndef AGENTREPINFOWIN_H
#define AGENTREPINFOWIN_H

#include <QWidget>
#include <QSqlRecord>

namespace Ui {
class agentrepinfowin;
}

class agentrepinfowin : public QWidget
{
    Q_OBJECT

public:
    explicit agentrepinfowin(const QSqlRecord& record, QWidget *parent = nullptr);
    ~agentrepinfowin();

private:
    Ui::agentrepinfowin *ui;

private slots:
    void responseHandler();
};

#endif // AGENTREPINFOWIN_H
