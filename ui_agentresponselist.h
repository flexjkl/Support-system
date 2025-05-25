/********************************************************************************
** Form generated from reading UI file 'agentresponselist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENTRESPONSELIST_H
#define UI_AGENTRESPONSELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agentresponselist
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateButton;
    QPushButton *closeButton;

    void setupUi(QWidget *agentresponselist)
    {
        if (agentresponselist->objectName().isEmpty())
            agentresponselist->setObjectName("agentresponselist");
        agentresponselist->resize(424, 457);
        gridLayout = new QGridLayout(agentresponselist);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(agentresponselist);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        updateButton = new QPushButton(agentresponselist);
        updateButton->setObjectName("updateButton");

        horizontalLayout->addWidget(updateButton);

        closeButton = new QPushButton(agentresponselist);
        closeButton->setObjectName("closeButton");

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(agentresponselist);

        QMetaObject::connectSlotsByName(agentresponselist);
    } // setupUi

    void retranslateUi(QWidget *agentresponselist)
    {
        agentresponselist->setWindowTitle(QCoreApplication::translate("agentresponselist", "Form", nullptr));
        updateButton->setText(QCoreApplication::translate("agentresponselist", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        closeButton->setText(QCoreApplication::translate("agentresponselist", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agentresponselist: public Ui_agentresponselist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENTRESPONSELIST_H
