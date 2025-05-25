#ifndef REPRESPONSEWIN_H
#define REPRESPONSEWIN_H

#include <QWidget>
#include <QString>
#include <QSqlTableModel>

namespace Ui {
class represponsewin;
}

class represponsewin : public QWidget
{
    Q_OBJECT

public:
    explicit represponsewin(const QString& repId, QSqlTableModel *_model, QWidget *parent = nullptr);
    ~represponsewin();

private:
    QString id;

    QSqlTableModel *model;

    Ui::represponsewin *ui;

private slots:
    void yesHandler();

    void noHandler();
};

#endif // REPRESPONSEWIN_H
