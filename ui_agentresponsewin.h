/********************************************************************************
** Form generated from reading UI file 'agentresponsewin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENTRESPONSEWIN_H
#define UI_AGENTRESPONSEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agentresponsewin
{
public:
    QGridLayout *gridLayout;
    QLabel *helpLabel;
    QTextEdit *textEdit;
    QPushButton *sendButton;
    QPushButton *backButton;

    void setupUi(QWidget *agentresponsewin)
    {
        if (agentresponsewin->objectName().isEmpty())
            agentresponsewin->setObjectName("agentresponsewin");
        agentresponsewin->resize(482, 386);
        gridLayout = new QGridLayout(agentresponsewin);
        gridLayout->setObjectName("gridLayout");
        helpLabel = new QLabel(agentresponsewin);
        helpLabel->setObjectName("helpLabel");

        gridLayout->addWidget(helpLabel, 0, 0, 1, 1);

        textEdit = new QTextEdit(agentresponsewin);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 2);

        sendButton = new QPushButton(agentresponsewin);
        sendButton->setObjectName("sendButton");

        gridLayout->addWidget(sendButton, 2, 0, 1, 1);

        backButton = new QPushButton(agentresponsewin);
        backButton->setObjectName("backButton");

        gridLayout->addWidget(backButton, 2, 1, 1, 1);


        retranslateUi(agentresponsewin);

        QMetaObject::connectSlotsByName(agentresponsewin);
    } // setupUi

    void retranslateUi(QWidget *agentresponsewin)
    {
        agentresponsewin->setWindowTitle(QCoreApplication::translate("agentresponsewin", "Form", nullptr));
        helpLabel->setText(QCoreApplication::translate("agentresponsewin", "\320\236\320\277\320\270\321\210\320\270\321\202\320\265 \321\200\320\265\321\210\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\213", nullptr));
        sendButton->setText(QCoreApplication::translate("agentresponsewin", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        backButton->setText(QCoreApplication::translate("agentresponsewin", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agentresponsewin: public Ui_agentresponsewin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENTRESPONSEWIN_H
