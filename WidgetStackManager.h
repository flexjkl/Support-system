#ifndef WIDGETSTACKMANAGER_H
#define WIDGETSTACKMANAGER_H

#include <QStack>
#include <QWidget>

class WidgetStackManager{
public:
    static void eraseTop();

    static void openNew(QWidget* newWid);
private:
    static QStack<QWidget*> winStack;
};

#endif // WIDGETSTACKMANAGER_H
