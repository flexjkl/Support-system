#ifndef AGENTRESPONSEWIN_H
#define AGENTRESPONSEWIN_H

#include <QWidget>
#include <QString>

namespace Ui {
class agentresponsewin;
}

class agentresponsewin : public QWidget
{
    Q_OBJECT

public:
    explicit agentresponsewin(const QString& _id, QWidget *parent = nullptr);
    ~agentresponsewin();

private:
    Ui::agentresponsewin *ui;

    QString id;
private slots:
    void sendHandler();
};

#endif // AGENTRESPONSEWIN_H
