/********************************************************************************
** Form generated from reading UI file 'usermainwin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINWIN_H
#define UI_USERMAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usermainwin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *perCabButton;
    QPushButton *reportButton;
    QPushButton *exitButton;

    void setupUi(QWidget *usermainwin)
    {
        if (usermainwin->objectName().isEmpty())
            usermainwin->setObjectName("usermainwin");
        usermainwin->resize(451, 409);
        verticalLayout_2 = new QVBoxLayout(usermainwin);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(50);
        verticalLayout->setObjectName("verticalLayout");
        perCabButton = new QPushButton(usermainwin);
        perCabButton->setObjectName("perCabButton");

        verticalLayout->addWidget(perCabButton);

        reportButton = new QPushButton(usermainwin);
        reportButton->setObjectName("reportButton");

        verticalLayout->addWidget(reportButton);

        exitButton = new QPushButton(usermainwin);
        exitButton->setObjectName("exitButton");

        verticalLayout->addWidget(exitButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(usermainwin);

        QMetaObject::connectSlotsByName(usermainwin);
    } // setupUi

    void retranslateUi(QWidget *usermainwin)
    {
        usermainwin->setWindowTitle(QCoreApplication::translate("usermainwin", "Form", nullptr));
        perCabButton->setText(QCoreApplication::translate("usermainwin", " \320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        reportButton->setText(QCoreApplication::translate("usermainwin", "\320\241\320\276\320\276\320\261\321\211\320\270\321\202\321\214 \320\276\320\261 \320\276\321\210\320\270\320\261\320\272\320\265", nullptr));
        exitButton->setText(QCoreApplication::translate("usermainwin", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usermainwin: public Ui_usermainwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINWIN_H
