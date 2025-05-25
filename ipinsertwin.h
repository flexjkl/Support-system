#ifndef IPINSERTWIN_H
#define IPINSERTWIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class ipinsertwin;
}
QT_END_NAMESPACE

class ipinsertwin : public QWidget
{
    Q_OBJECT

public:
    explicit ipinsertwin(QWidget *parent = nullptr);
    ~ipinsertwin();

private:
    Ui::ipinsertwin *ui;

private slots:
    void connectHandler();
};

#endif // IPINSERTWIN_H
