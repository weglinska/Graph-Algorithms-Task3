/********************************************************************************
** Form generated from reading UI file 'centerview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTERVIEW_H
#define UI_CENTERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CenterView
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *centerLabel;
    QLabel *minMaxCenterLabel;
    QPushButton *centersCalculationTrigger;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CenterView)
    {
        if (CenterView->objectName().isEmpty())
            CenterView->setObjectName(QStringLiteral("CenterView"));
        CenterView->resize(400, 300);
        verticalLayout = new QVBoxLayout(CenterView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CenterView);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(CenterView);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        centerLabel = new QLabel(CenterView);
        centerLabel->setObjectName(QStringLiteral("centerLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, centerLabel);

        minMaxCenterLabel = new QLabel(CenterView);
        minMaxCenterLabel->setObjectName(QStringLiteral("minMaxCenterLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, minMaxCenterLabel);


        verticalLayout->addLayout(formLayout);

        centersCalculationTrigger = new QPushButton(CenterView);
        centersCalculationTrigger->setObjectName(QStringLiteral("centersCalculationTrigger"));

        verticalLayout->addWidget(centersCalculationTrigger);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CenterView);

        QMetaObject::connectSlotsByName(CenterView);
    } // setupUi

    void retranslateUi(QWidget *CenterView)
    {
        CenterView->setWindowTitle(QApplication::translate("CenterView", "Form", 0));
        label->setText(QApplication::translate("CenterView", "Centrum grafu:", 0));
        label_2->setText(QApplication::translate("CenterView", "Centrum MIN-MAX:", 0));
        centerLabel->setText(QString());
        minMaxCenterLabel->setText(QString());
        centersCalculationTrigger->setText(QApplication::translate("CenterView", "wyznacz", 0));
    } // retranslateUi

};

namespace Ui {
    class CenterView: public Ui_CenterView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTERVIEW_H
