/********************************************************************************
** Form generated from reading UI file 'agentmainwin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENTMAINWIN_H
#define UI_AGENTMAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agentmainwin
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *idLine;
    QLineEdit *loginLine;
    QLineEdit *accountType;
    QVBoxLayout *verticalLayout;
    QPushButton *reportButton;
    QPushButton *requestButton;
    QPushButton *exitButton;

    void setupUi(QWidget *agentmainwin)
    {
        if (agentmainwin->objectName().isEmpty())
            agentmainwin->setObjectName("agentmainwin");
        agentmainwin->resize(452, 409);
        gridLayout = new QGridLayout(agentmainwin);
        gridLayout->setSpacing(7);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, -1, -1, 9);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 12, -1, -1);
        label = new QLabel(agentmainwin);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(agentmainwin);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(agentmainwin);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        idLine = new QLineEdit(agentmainwin);
        idLine->setObjectName("idLine");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(idLine->sizePolicy().hasHeightForWidth());
        idLine->setSizePolicy(sizePolicy);
        idLine->setReadOnly(true);

        horizontalLayout->addWidget(idLine);

        loginLine = new QLineEdit(agentmainwin);
        loginLine->setObjectName("loginLine");
        sizePolicy.setHeightForWidth(loginLine->sizePolicy().hasHeightForWidth());
        loginLine->setSizePolicy(sizePolicy);
        loginLine->setReadOnly(true);

        horizontalLayout->addWidget(loginLine);

        accountType = new QLineEdit(agentmainwin);
        accountType->setObjectName("accountType");
        sizePolicy.setHeightForWidth(accountType->sizePolicy().hasHeightForWidth());
        accountType->setSizePolicy(sizePolicy);
        accountType->setReadOnly(true);

        horizontalLayout->addWidget(accountType);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(70);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 58, -1, 56);
        reportButton = new QPushButton(agentmainwin);
        reportButton->setObjectName("reportButton");
        sizePolicy.setHeightForWidth(reportButton->sizePolicy().hasHeightForWidth());
        reportButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(reportButton);

        requestButton = new QPushButton(agentmainwin);
        requestButton->setObjectName("requestButton");
        sizePolicy.setHeightForWidth(requestButton->sizePolicy().hasHeightForWidth());
        requestButton->setSizePolicy(sizePolicy);
        requestButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(requestButton);

        exitButton = new QPushButton(agentmainwin);
        exitButton->setObjectName("exitButton");
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(exitButton);

        verticalLayout->setStretch(1, 5);

        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);


        retranslateUi(agentmainwin);

        QMetaObject::connectSlotsByName(agentmainwin);
    } // setupUi

    void retranslateUi(QWidget *agentmainwin)
    {
        agentmainwin->setWindowTitle(QCoreApplication::translate("agentmainwin", "Form", nullptr));
        label->setText(QCoreApplication::translate("agentmainwin", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("agentmainwin", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("agentmainwin", "\320\242\320\270\320\277 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
        accountType->setText(QCoreApplication::translate("agentmainwin", "\320\220\320\263\320\265\320\275\321\202", nullptr));
        reportButton->setText(QCoreApplication::translate("agentmainwin", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\271", nullptr));
        requestButton->setText(QCoreApplication::translate("agentmainwin", "\320\234\320\276\320\270 \320\276\321\202\320\262\320\265\321\202\321\213", nullptr));
        exitButton->setText(QCoreApplication::translate("agentmainwin", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agentmainwin: public Ui_agentmainwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENTMAINWIN_H
