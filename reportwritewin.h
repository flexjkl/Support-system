#ifndef REPORTWRITEWIN_H
#define REPORTWRITEWIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class reportwritewin;
}
QT_END_NAMESPACE

class reportwritewin : public QWidget
{
    Q_OBJECT

public:
    explicit reportwritewin(QWidget *parent = nullptr);
    ~reportwritewin();

private:
    Ui::reportwritewin *ui;

private slots:
    void sendHandler();
};

#endif //REPORTWRITEWIN_H
