/********************************************************************************
** Form generated from reading UI file 'agentrepinfowin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENTREPINFOWIN_H
#define UI_AGENTREPINFOWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agentrepinfowin
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *IDLine;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *responseButton;
    QPushButton *closeButton;

    void setupUi(QWidget *agentrepinfowin)
    {
        if (agentrepinfowin->objectName().isEmpty())
            agentrepinfowin->setObjectName("agentrepinfowin");
        agentrepinfowin->resize(426, 430);
        gridLayout = new QGridLayout(agentrepinfowin);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(agentrepinfowin);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        IDLine = new QLineEdit(agentrepinfowin);
        IDLine->setObjectName("IDLine");
        IDLine->setReadOnly(true);

        gridLayout->addWidget(IDLine, 0, 1, 1, 1);

        textEdit = new QTextEdit(agentrepinfowin);
        textEdit->setObjectName("textEdit");
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        responseButton = new QPushButton(agentrepinfowin);
        responseButton->setObjectName("responseButton");

        horizontalLayout->addWidget(responseButton);

        closeButton = new QPushButton(agentrepinfowin);
        closeButton->setObjectName("closeButton");

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(agentrepinfowin);

        QMetaObject::connectSlotsByName(agentrepinfowin);
    } // setupUi

    void retranslateUi(QWidget *agentrepinfowin)
    {
        agentrepinfowin->setWindowTitle(QCoreApplication::translate("agentrepinfowin", "Form", nullptr));
        label->setText(QCoreApplication::translate("agentrepinfowin", "ID", nullptr));
        responseButton->setText(QCoreApplication::translate("agentrepinfowin", "\320\236\321\202\320\262\320\265\321\202\320\270\321\202\321\214", nullptr));
        closeButton->setText(QCoreApplication::translate("agentrepinfowin", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agentrepinfowin: public Ui_agentrepinfowin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENTREPINFOWIN_H
