/********************************************************************************
** Form generated from reading UI file 'represponsewin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPRESPONSEWIN_H
#define UI_REPRESPONSEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_represponsewin
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *IDLine;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *yesButton;
    QPushButton *noButton;
    QPushButton *closeButton;

    void setupUi(QWidget *represponsewin)
    {
        if (represponsewin->objectName().isEmpty())
            represponsewin->setObjectName("represponsewin");
        represponsewin->resize(500, 440);
        gridLayout = new QGridLayout(represponsewin);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(represponsewin);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        IDLine = new QLineEdit(represponsewin);
        IDLine->setObjectName("IDLine");
        IDLine->setReadOnly(true);

        gridLayout->addWidget(IDLine, 0, 4, 1, 1);

        textEdit = new QTextEdit(represponsewin);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 5);

        label = new QLabel(represponsewin);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        yesButton = new QPushButton(represponsewin);
        yesButton->setObjectName("yesButton");

        gridLayout->addWidget(yesButton, 2, 1, 1, 1);

        noButton = new QPushButton(represponsewin);
        noButton->setObjectName("noButton");

        gridLayout->addWidget(noButton, 2, 2, 1, 1);

        closeButton = new QPushButton(represponsewin);
        closeButton->setObjectName("closeButton");

        gridLayout->addWidget(closeButton, 2, 3, 1, 2);


        retranslateUi(represponsewin);

        QMetaObject::connectSlotsByName(represponsewin);
    } // setupUi

    void retranslateUi(QWidget *represponsewin)
    {
        represponsewin->setWindowTitle(QCoreApplication::translate("represponsewin", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("represponsewin", "ID \320\276\321\202\320\262\320\265\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("represponsewin", "\320\255\321\202\320\276\321\202 \320\276\321\202\320\262\320\265\321\202 \320\277\320\276\320\274\320\276\320\263?", nullptr));
        yesButton->setText(QCoreApplication::translate("represponsewin", "\320\224\320\260", nullptr));
        noButton->setText(QCoreApplication::translate("represponsewin", "\320\235\320\265\321\202", nullptr));
        closeButton->setText(QCoreApplication::translate("represponsewin", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class represponsewin: public Ui_represponsewin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPRESPONSEWIN_H
