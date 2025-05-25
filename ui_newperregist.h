/********************************************************************************
** Form generated from reading UI file 'newperregist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPERREGIST_H
#define UI_NEWPERREGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newperregist
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *agentCheckBox;
    QCheckBox *userCheckBox;
    QVBoxLayout *verticalLayout;
    QLabel *loginLabel;
    QLineEdit *loginField;
    QLabel *passwordLabel;
    QLineEdit *passwordField;
    QVBoxLayout *verticalLayout_2;
    QPushButton *registButton;
    QPushButton *backButton;

    void setupUi(QWidget *newperregist)
    {
        if (newperregist->objectName().isEmpty())
            newperregist->setObjectName("newperregist");
        newperregist->resize(266, 389);
        newperregist->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        gridLayout = new QGridLayout(newperregist);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 33, -1, 11);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, -1, 20);
        agentCheckBox = new QCheckBox(newperregist);
        agentCheckBox->setObjectName("agentCheckBox");

        horizontalLayout->addWidget(agentCheckBox);

        userCheckBox = new QCheckBox(newperregist);
        userCheckBox->setObjectName("userCheckBox");

        horizontalLayout->addWidget(userCheckBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 12, -1, 64);
        loginLabel = new QLabel(newperregist);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(loginLabel);

        loginField = new QLineEdit(newperregist);
        loginField->setObjectName("loginField");

        verticalLayout->addWidget(loginField);

        passwordLabel = new QLabel(newperregist);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(passwordLabel);

        passwordField = new QLineEdit(newperregist);
        passwordField->setObjectName("passwordField");

        verticalLayout->addWidget(passwordField);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        registButton = new QPushButton(newperregist);
        registButton->setObjectName("registButton");

        verticalLayout_2->addWidget(registButton);

        backButton = new QPushButton(newperregist);
        backButton->setObjectName("backButton");

        verticalLayout_2->addWidget(backButton);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        gridLayout->setRowStretch(1, 1);

        retranslateUi(newperregist);

        QMetaObject::connectSlotsByName(newperregist);
    } // setupUi

    void retranslateUi(QWidget *newperregist)
    {
        newperregist->setWindowTitle(QCoreApplication::translate("newperregist", "Form", nullptr));
        agentCheckBox->setText(QCoreApplication::translate("newperregist", "\320\220\320\263\320\265\320\275\321\202", nullptr));
        userCheckBox->setText(QCoreApplication::translate("newperregist", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        loginLabel->setText(QCoreApplication::translate("newperregist", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275", nullptr));
        passwordLabel->setText(QCoreApplication::translate("newperregist", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        registButton->setText(QCoreApplication::translate("newperregist", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        backButton->setText(QCoreApplication::translate("newperregist", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newperregist: public Ui_newperregist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPERREGIST_H
