/********************************************************************************
** Form generated from reading UI file 'reportinfowin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTINFOWIN_H
#define UI_REPORTINFOWIN_H

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

class Ui_reportinfowin
{
public:
    QGridLayout *gridLayout;
    QLineEdit *IDLine;
    QLabel *label;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateButton;
    QPushButton *responseButton;
    QPushButton *closeButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *reportinfowin)
    {
        if (reportinfowin->objectName().isEmpty())
            reportinfowin->setObjectName("reportinfowin");
        reportinfowin->resize(472, 461);
        gridLayout = new QGridLayout(reportinfowin);
        gridLayout->setObjectName("gridLayout");
        IDLine = new QLineEdit(reportinfowin);
        IDLine->setObjectName("IDLine");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IDLine->sizePolicy().hasHeightForWidth());
        IDLine->setSizePolicy(sizePolicy);
        IDLine->setReadOnly(true);

        gridLayout->addWidget(IDLine, 0, 1, 1, 1);

        label = new QLabel(reportinfowin);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deleteButton = new QPushButton(reportinfowin);
        deleteButton->setObjectName("deleteButton");
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(deleteButton, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        updateButton = new QPushButton(reportinfowin);
        updateButton->setObjectName("updateButton");
        sizePolicy.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(updateButton);

        responseButton = new QPushButton(reportinfowin);
        responseButton->setObjectName("responseButton");
        sizePolicy.setHeightForWidth(responseButton->sizePolicy().hasHeightForWidth());
        responseButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(responseButton);

        closeButton = new QPushButton(reportinfowin);
        closeButton->setObjectName("closeButton");
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);

        textEdit = new QTextEdit(reportinfowin);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 3);


        retranslateUi(reportinfowin);

        QMetaObject::connectSlotsByName(reportinfowin);
    } // setupUi

    void retranslateUi(QWidget *reportinfowin)
    {
        reportinfowin->setWindowTitle(QCoreApplication::translate("reportinfowin", "Form", nullptr));
        label->setText(QCoreApplication::translate("reportinfowin", "ID", nullptr));
        deleteButton->setText(QCoreApplication::translate("reportinfowin", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        updateButton->setText(QCoreApplication::translate("reportinfowin", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202", nullptr));
        responseButton->setText(QCoreApplication::translate("reportinfowin", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\276\321\202\320\262\320\265\321\202", nullptr));
        closeButton->setText(QCoreApplication::translate("reportinfowin", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reportinfowin: public Ui_reportinfowin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTINFOWIN_H
