/********************************************************************************
** Form generated from reading UI file 'reportwritewin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTWRITEWIN_H
#define UI_REPORTWRITEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reportwritewin
{
public:
    QGridLayout *gridLayout;
    QLabel *helpLabel;
    QTextEdit *textEdit;
    QPushButton *sendButton;
    QPushButton *backButton;

    void setupUi(QWidget *reportwritewin)
    {
        if (reportwritewin->objectName().isEmpty())
            reportwritewin->setObjectName("reportwritewin");
        reportwritewin->resize(497, 397);
        gridLayout = new QGridLayout(reportwritewin);
        gridLayout->setObjectName("gridLayout");
        helpLabel = new QLabel(reportwritewin);
        helpLabel->setObjectName("helpLabel");

        gridLayout->addWidget(helpLabel, 0, 0, 1, 1);

        textEdit = new QTextEdit(reportwritewin);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 2);

        sendButton = new QPushButton(reportwritewin);
        sendButton->setObjectName("sendButton");

        gridLayout->addWidget(sendButton, 2, 0, 1, 1);

        backButton = new QPushButton(reportwritewin);
        backButton->setObjectName("backButton");

        gridLayout->addWidget(backButton, 2, 1, 1, 1);


        retranslateUi(reportwritewin);

        QMetaObject::connectSlotsByName(reportwritewin);
    } // setupUi

    void retranslateUi(QWidget *reportwritewin)
    {
        reportwritewin->setWindowTitle(QCoreApplication::translate("reportwritewin", "Form", nullptr));
        helpLabel->setText(QCoreApplication::translate("reportwritewin", "\320\236\320\277\320\270\321\210\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\203", nullptr));
        sendButton->setText(QCoreApplication::translate("reportwritewin", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        backButton->setText(QCoreApplication::translate("reportwritewin", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reportwritewin: public Ui_reportwritewin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWRITEWIN_H
