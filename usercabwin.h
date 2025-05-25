#ifndef USERCABWIN_H
#define USERCABWIN_H

#include <QWidget>

namespace Ui {
class usercabwin;
}

class usercabwin : public QWidget
{
    Q_OBJECT

public:
    explicit usercabwin(QWidget *parent = nullptr);
    ~usercabwin();

private:
    Ui::usercabwin *ui;

private slots:
    void rowHandler(const QModelIndex& index);

    void updateHandler();
};

#endif // USERCABWIN_H
