#ifndef AGENTMAINWIN_H
#define AGENTMAINWIN_H

#include <QWidget>

namespace Ui {
class agentmainwin;
}

class agentmainwin : public QWidget
{
    Q_OBJECT

public:
    explicit agentmainwin(QWidget *parent = nullptr);
    ~agentmainwin();

    void closeEvent(QCloseEvent *event);

private:
    Ui::agentmainwin *ui;

private slots:
    void reportHandler();

    void responseHandler();
};

#endif // AGENTMAINWIN_H
