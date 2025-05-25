/********************************************************************************
** Form generated from reading UI file 'usercabwin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCABWIN_H
#define UI_USERCABWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usercabwin
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *idLine;
    QLabel *label_2;
    QLineEdit *loginLine;
    QLabel *label_3;
    QLineEdit *accTypeLine;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QPushButton *updateButton;
    QPushButton *backButton;

    void setupUi(QWidget *usercabwin)
    {
        if (usercabwin->objectName().isEmpty())
            usercabwin->setObjectName("usercabwin");
        usercabwin->resize(479, 406);
        gridLayout = new QGridLayout(usercabwin);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(usercabwin);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        idLine = new QLineEdit(usercabwin);
        idLine->setObjectName("idLine");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(idLine->sizePolicy().hasHeightForWidth());
        idLine->setSizePolicy(sizePolicy);
        idLine->setReadOnly(true);

        verticalLayout->addWidget(idLine);

        label_2 = new QLabel(usercabwin);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        loginLine = new QLineEdit(usercabwin);
        loginLine->setObjectName("loginLine");
        sizePolicy.setHeightForWidth(loginLine->sizePolicy().hasHeightForWidth());
        loginLine->setSizePolicy(sizePolicy);
        loginLine->setReadOnly(true);

        verticalLayout->addWidget(loginLine);

        label_3 = new QLabel(usercabwin);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        accTypeLine = new QLineEdit(usercabwin);
        accTypeLine->setObjectName("accTypeLine");
        sizePolicy.setHeightForWidth(accTypeLine->sizePolicy().hasHeightForWidth());
        accTypeLine->setSizePolicy(sizePolicy);
        accTypeLine->setReadOnly(true);

        verticalLayout->addWidget(accTypeLine);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(usercabwin);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label);

        tableView = new QTableView(usercabwin);
        tableView->setObjectName("tableView");

        verticalLayout_3->addWidget(tableView);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 95, -1, -1);
        updateButton = new QPushButton(usercabwin);
        updateButton->setObjectName("updateButton");
        sizePolicy.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(updateButton);

        backButton = new QPushButton(usercabwin);
        backButton->setObjectName("backButton");
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(backButton);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);


        retranslateUi(usercabwin);

        QMetaObject::connectSlotsByName(usercabwin);
    } // setupUi

    void retranslateUi(QWidget *usercabwin)
    {
        usercabwin->setWindowTitle(QCoreApplication::translate("usercabwin", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("usercabwin", "\320\222\320\260\321\210 ID", nullptr));
        label_2->setText(QCoreApplication::translate("usercabwin", "\320\222\320\260\321\210 \320\273\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("usercabwin", "\320\242\320\270\320\277 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("usercabwin", "\320\222\320\260\321\210\320\270 \320\267\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        updateButton->setText(QCoreApplication::translate("usercabwin", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        backButton->setText(QCoreApplication::translate("usercabwin", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usercabwin: public Ui_usercabwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCABWIN_H
