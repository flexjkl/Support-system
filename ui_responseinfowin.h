/********************************************************************************
** Form generated from reading UI file 'responseinfowin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESPONSEINFOWIN_H
#define UI_RESPONSEINFOWIN_H

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

class Ui_responseinfowin
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *deleteButton;
    QLineEdit *IDLine;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateButton;
    QPushButton *closeButton;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QWidget *responseinfowin)
    {
        if (responseinfowin->objectName().isEmpty())
            responseinfowin->setObjectName("responseinfowin");
        responseinfowin->resize(452, 444);
        gridLayout_2 = new QGridLayout(responseinfowin);
        gridLayout_2->setObjectName("gridLayout_2");
        deleteButton = new QPushButton(responseinfowin);
        deleteButton->setObjectName("deleteButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(deleteButton, 0, 2, 1, 1);

        IDLine = new QLineEdit(responseinfowin);
        IDLine->setObjectName("IDLine");
        sizePolicy.setHeightForWidth(IDLine->sizePolicy().hasHeightForWidth());
        IDLine->setSizePolicy(sizePolicy);
        IDLine->setReadOnly(true);

        gridLayout_2->addWidget(IDLine, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        updateButton = new QPushButton(responseinfowin);
        updateButton->setObjectName("updateButton");

        horizontalLayout->addWidget(updateButton);

        closeButton = new QPushButton(responseinfowin);
        closeButton->setObjectName("closeButton");

        horizontalLayout->addWidget(closeButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 3);

        textEdit = new QTextEdit(responseinfowin);
        textEdit->setObjectName("textEdit");

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 3);

        label = new QLabel(responseinfowin);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        retranslateUi(responseinfowin);

        QMetaObject::connectSlotsByName(responseinfowin);
    } // setupUi

    void retranslateUi(QWidget *responseinfowin)
    {
        responseinfowin->setWindowTitle(QCoreApplication::translate("responseinfowin", "Form", nullptr));
        deleteButton->setText(QCoreApplication::translate("responseinfowin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        updateButton->setText(QCoreApplication::translate("responseinfowin", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202", nullptr));
        closeButton->setText(QCoreApplication::translate("responseinfowin", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("responseinfowin", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class responseinfowin: public Ui_responseinfowin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESPONSEINFOWIN_H
