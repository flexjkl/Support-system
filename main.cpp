#include "ipinsertwin.h"
#include "WidgetStackManager.h"
#include <QApplication>
#include <QStack>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/icons/icon.png"));
    WidgetStackManager::openNew(new ipinsertwin);
    return a.exec();
}
