/********************************************************************************
** Form generated from reading UI file 'reportlist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTLIST_H
#define UI_REPORTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reportList
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *closeButton;

    void setupUi(QWidget *reportList)
    {
        if (reportList->objectName().isEmpty())
            reportList->setObjectName("reportList");
        reportList->resize(449, 459);
        gridLayout = new QGridLayout(reportList);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(reportList);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        closeButton = new QPushButton(reportList);
        closeButton->setObjectName("closeButton");

        gridLayout->addWidget(closeButton, 1, 0, 1, 1);


        retranslateUi(reportList);

        QMetaObject::connectSlotsByName(reportList);
    } // setupUi

    void retranslateUi(QWidget *reportList)
    {
        reportList->setWindowTitle(QCoreApplication::translate("reportList", "Form", nullptr));
        closeButton->setText(QCoreApplication::translate("reportList", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reportList: public Ui_reportList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTLIST_H
