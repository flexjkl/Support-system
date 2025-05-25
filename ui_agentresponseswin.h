/********************************************************************************
** Form generated from reading UI file 'agentresponseswin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENTRESPONSESWIN_H
#define UI_AGENTRESPONSESWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agentresponseswin
{
public:
    QTableView *tableView;

    void setupUi(QWidget *agentresponseswin)
    {
        if (agentresponseswin->objectName().isEmpty())
            agentresponseswin->setObjectName("agentresponseswin");
        agentresponseswin->resize(412, 404);
        tableView = new QTableView(agentresponseswin);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 30, 411, 341));

        retranslateUi(agentresponseswin);

        QMetaObject::connectSlotsByName(agentresponseswin);
    } // setupUi

    void retranslateUi(QWidget *agentresponseswin)
    {
        agentresponseswin->setWindowTitle(QCoreApplication::translate("agentresponseswin", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agentresponseswin: public Ui_agentresponseswin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENTRESPONSESWIN_H
