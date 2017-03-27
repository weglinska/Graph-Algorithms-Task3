/********************************************************************************
** Form generated from reading UI file 'dijkstraview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIJKSTRAVIEW_H
#define UI_DIJKSTRAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DijkstraView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *djPointNumber;
    QPushButton *generateTrigger;
    QLabel *djResultLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DijkstraView)
    {
        if (DijkstraView->objectName().isEmpty())
            DijkstraView->setObjectName(QStringLiteral("DijkstraView"));
        DijkstraView->resize(400, 300);
        verticalLayout = new QVBoxLayout(DijkstraView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DijkstraView);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        djPointNumber = new QSpinBox(DijkstraView);
        djPointNumber->setObjectName(QStringLiteral("djPointNumber"));

        horizontalLayout->addWidget(djPointNumber);

        generateTrigger = new QPushButton(DijkstraView);
        generateTrigger->setObjectName(QStringLiteral("generateTrigger"));

        horizontalLayout->addWidget(generateTrigger);


        verticalLayout->addLayout(horizontalLayout);

        djResultLabel = new QLabel(DijkstraView);
        djResultLabel->setObjectName(QStringLiteral("djResultLabel"));
        djResultLabel->setTextFormat(Qt::RichText);
        djResultLabel->setWordWrap(true);

        verticalLayout->addWidget(djResultLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(DijkstraView);

        QMetaObject::connectSlotsByName(DijkstraView);
    } // setupUi

    void retranslateUi(QWidget *DijkstraView)
    {
        DijkstraView->setWindowTitle(QApplication::translate("DijkstraView", "Form", 0));
        label->setText(QApplication::translate("DijkstraView", "Sprawdzany punkt:", 0));
        generateTrigger->setText(QApplication::translate("DijkstraView", "oblicz", 0));
        djResultLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DijkstraView: public Ui_DijkstraView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIJKSTRAVIEW_H
