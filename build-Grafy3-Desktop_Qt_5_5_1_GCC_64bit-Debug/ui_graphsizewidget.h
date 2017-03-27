/********************************************************************************
** Form generated from reading UI file 'graphsizewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHSIZEWIDGET_H
#define UI_GRAPHSIZEWIDGET_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphSizeWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *count;
    QPushButton *applyButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *GraphSizeWidget)
    {
        if (GraphSizeWidget->objectName().isEmpty())
            GraphSizeWidget->setObjectName(QStringLiteral("GraphSizeWidget"));
        GraphSizeWidget->resize(400, 300);
        horizontalLayout_2 = new QHBoxLayout(GraphSizeWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(GraphSizeWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        count = new QSpinBox(GraphSizeWidget);
        count->setObjectName(QStringLiteral("count"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(count->sizePolicy().hasHeightForWidth());
        count->setSizePolicy(sizePolicy1);
        count->setMinimum(2);
        count->setMaximum(30);
        count->setValue(5);

        horizontalLayout_2->addWidget(count);

        applyButton = new QPushButton(GraphSizeWidget);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        sizePolicy1.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(applyButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(GraphSizeWidget);

        QMetaObject::connectSlotsByName(GraphSizeWidget);
    } // setupUi

    void retranslateUi(QWidget *GraphSizeWidget)
    {
        GraphSizeWidget->setWindowTitle(QApplication::translate("GraphSizeWidget", "Form", 0));
        label->setText(QApplication::translate("GraphSizeWidget", "Ilo\305\233\304\207 wierzcho\305\202k\303\263w:", 0));
        applyButton->setText(QApplication::translate("GraphSizeWidget", "zastosuj", 0));
    } // retranslateUi

};

namespace Ui {
    class GraphSizeWidget: public Ui_GraphSizeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHSIZEWIDGET_H
