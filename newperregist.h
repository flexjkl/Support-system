#ifndef NEWPERREGIST_H
#define NEWPERREGIST_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class newperregist;
}
QT_END_NAMESPACE

class newperregist : public QWidget
{
    Q_OBJECT

public:
    explicit newperregist(QWidget *parent = nullptr);
    ~newperregist();

private:
    Ui::newperregist *ui;

private slots:
    void registHandler();
};

#endif // NEWPERREGIST_H
