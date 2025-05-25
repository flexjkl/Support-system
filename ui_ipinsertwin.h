/********************************************************************************
** Form generated from reading UI file 'ipinsertwin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPINSERTWIN_H
#define UI_IPINSERTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ipinsertwin
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *helpLabel;
    QLineEdit *ipline;
    QPushButton *connectButton;

    void setupUi(QWidget *ipinsertwin)
    {
        if (ipinsertwin->objectName().isEmpty())
            ipinsertwin->setObjectName("ipinsertwin");
        ipinsertwin->resize(193, 173);
        gridLayout = new QGridLayout(ipinsertwin);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 20, -1, 25);
        helpLabel = new QLabel(ipinsertwin);
        helpLabel->setObjectName("helpLabel");
        helpLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(helpLabel);

        ipline = new QLineEdit(ipinsertwin);
        ipline->setObjectName("ipline");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ipline->sizePolicy().hasHeightForWidth());
        ipline->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(ipline);

        connectButton = new QPushButton(ipinsertwin);
        connectButton->setObjectName("connectButton");
        sizePolicy.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(connectButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ipinsertwin);

        QMetaObject::connectSlotsByName(ipinsertwin);
    } // setupUi

    void retranslateUi(QWidget *ipinsertwin)
    {
        ipinsertwin->setWindowTitle(QCoreApplication::translate("ipinsertwin", "Form", nullptr));
        helpLabel->setText(QCoreApplication::translate("ipinsertwin", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 IP", nullptr));
        connectButton->setText(QCoreApplication::translate("ipinsertwin", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ipinsertwin: public Ui_ipinsertwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPINSERTWIN_H
