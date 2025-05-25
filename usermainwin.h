#ifndef USERMAINWIN_H
#define USERMAINWIN_H

#include <QWidget>

namespace Ui {
class usermainwin;
}

class usermainwin : public QWidget
{
    Q_OBJECT

public:
    explicit usermainwin(QWidget *parent = nullptr);
    ~usermainwin();

    void closeEvent(QCloseEvent *event);

private slots:
    void perCabHandler();

    void reportHandler();

private:
    Ui::usermainwin *ui;
};

#endif // USERMAINWIN_H
