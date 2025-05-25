/********************************************************************************
** Form generated from reading UI file 'registwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTWINDOW_H
#define UI_REGISTWINDOW_H

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

class Ui_RegistWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *agentCheckBox;
    QCheckBox *userCheckBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loginButton;
    QPushButton *registButton;
    QVBoxLayout *verticalLayout;
    QLabel *loginLabel;
    QLineEdit *loginField;
    QLabel *passwordLabel;
    QLineEdit *passwordField;

    void setupUi(QWidget *RegistWindow)
    {
        if (RegistWindow->objectName().isEmpty())
            RegistWindow->setObjectName("RegistWindow");
        RegistWindow->resize(266, 402);
        gridLayout = new QGridLayout(RegistWindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 11, -1, 11);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, -1, 48);
        agentCheckBox = new QCheckBox(RegistWindow);
        agentCheckBox->setObjectName("agentCheckBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(agentCheckBox->sizePolicy().hasHeightForWidth());
        agentCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(agentCheckBox);

        userCheckBox = new QCheckBox(RegistWindow);
        userCheckBox->setObjectName("userCheckBox");
        sizePolicy.setHeightForWidth(userCheckBox->sizePolicy().hasHeightForWidth());
        userCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(userCheckBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        loginButton = new QPushButton(RegistWindow);
        loginButton->setObjectName("loginButton");
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(loginButton);

        registButton = new QPushButton(RegistWindow);
        registButton->setObjectName("registButton");
        sizePolicy.setHeightForWidth(registButton->sizePolicy().hasHeightForWidth());
        registButton->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(registButton);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 0, -1, 77);
        loginLabel = new QLabel(RegistWindow);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(loginLabel);

        loginField = new QLineEdit(RegistWindow);
        loginField->setObjectName("loginField");
        sizePolicy.setHeightForWidth(loginField->sizePolicy().hasHeightForWidth());
        loginField->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(loginField);

        passwordLabel = new QLabel(RegistWindow);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(passwordLabel);

        passwordField = new QLineEdit(RegistWindow);
        passwordField->setObjectName("passwordField");
        sizePolicy.setHeightForWidth(passwordField->sizePolicy().hasHeightForWidth());
        passwordField->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(passwordField);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(3, 1);

        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);

        retranslateUi(RegistWindow);

        QMetaObject::connectSlotsByName(RegistWindow);
    } // setupUi

    void retranslateUi(QWidget *RegistWindow)
    {
        RegistWindow->setWindowTitle(QCoreApplication::translate("RegistWindow", "RegistWindow", nullptr));
        agentCheckBox->setText(QCoreApplication::translate("RegistWindow", "\320\220\320\263\320\265\320\275\321\202", nullptr));
        userCheckBox->setText(QCoreApplication::translate("RegistWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        loginButton->setText(QCoreApplication::translate("RegistWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        registButton->setText(QCoreApplication::translate("RegistWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        loginLabel->setText(QCoreApplication::translate("RegistWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        passwordLabel->setText(QCoreApplication::translate("RegistWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistWindow: public Ui_RegistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTWINDOW_H
