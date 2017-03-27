/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "centerview.h"
#include "dijkstraview.h"
#include "distancematrix.h"
#include "graphpainter.h"
#include "graphsizewidget.h"
#include "matrixview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    GraphSizeWidget *newGraphProvider;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    MatrixView *matrixWidget;
    QLabel *label;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *consistentVertexCount;
    QPushButton *consistentGraphGeneratorTrigget;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_4;
    DijkstraView *dijkstraView;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_5;
    CenterView *centrumView;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    DistanceMatrix *distanceMatrix;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *removeTrigget;
    QPushButton *MSTTrigger;
    QSpacerItem *verticalSpacer_5;
    GraphPainter *graphPainter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(773, 554);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolBox = new QToolBox(widget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMaximumSize(QSize(300, 16777215));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 300, 239));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        newGraphProvider = new GraphSizeWidget(page);
        newGraphProvider->setObjectName(QStringLiteral("newGraphProvider"));

        verticalLayout->addWidget(newGraphProvider);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        toolBox->addItem(page, QStringLiteral("Nowy graf"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 300, 239));
        horizontalLayout_3 = new QHBoxLayout(page_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        matrixWidget = new MatrixView(page_2);
        matrixWidget->setObjectName(QStringLiteral("matrixWidget"));

        gridLayout->addWidget(matrixWidget, 0, 1, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        toolBox->addItem(page_2, QString::fromUtf8("Macierz po\305\202\304\205cze\305\204"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 300, 239));
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        consistentVertexCount = new QSpinBox(page_3);
        consistentVertexCount->setObjectName(QStringLiteral("consistentVertexCount"));

        horizontalLayout_2->addWidget(consistentVertexCount);

        consistentGraphGeneratorTrigget = new QPushButton(page_3);
        consistentGraphGeneratorTrigget->setObjectName(QStringLiteral("consistentGraphGeneratorTrigget"));

        horizontalLayout_2->addWidget(consistentGraphGeneratorTrigget);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        toolBox->addItem(page_3, QStringLiteral("ConsistentGraphGenerator"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 300, 239));
        verticalLayout_4 = new QVBoxLayout(page_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        dijkstraView = new DijkstraView(page_4);
        dijkstraView->setObjectName(QStringLiteral("dijkstraView"));

        verticalLayout_4->addWidget(dijkstraView);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        toolBox->addItem(page_4, QStringLiteral("Dijkstra"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 300, 239));
        verticalLayout_5 = new QVBoxLayout(page_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        centrumView = new CenterView(page_5);
        centrumView->setObjectName(QStringLiteral("centrumView"));

        verticalLayout_5->addWidget(centrumView);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        toolBox->addItem(page_5, QStringLiteral("Centrum"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 300, 239));
        horizontalLayout_8 = new QHBoxLayout(page_6);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(page_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout_8->addWidget(label_3);

        distanceMatrix = new DistanceMatrix(page_6);
        distanceMatrix->setObjectName(QStringLiteral("distanceMatrix"));

        horizontalLayout_8->addWidget(distanceMatrix);

        toolBox->addItem(page_6, QString::fromUtf8("Macierz odleg\305\202o\305\233ci"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        verticalLayout_7 = new QVBoxLayout(page_7);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        removeTrigget = new QPushButton(page_7);
        removeTrigget->setObjectName(QStringLiteral("removeTrigget"));

        horizontalLayout_5->addWidget(removeTrigget);

        MSTTrigger = new QPushButton(page_7);
        MSTTrigger->setObjectName(QStringLiteral("MSTTrigger"));

        horizontalLayout_5->addWidget(MSTTrigger);


        verticalLayout_7->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        toolBox->addItem(page_7, QStringLiteral("Minimalne drzewo rozpinajace"));

        horizontalLayout->addWidget(toolBox);

        graphPainter = new GraphPainter(widget);
        graphPainter->setObjectName(QStringLiteral("graphPainter"));

        horizontalLayout->addWidget(graphPainter);


        verticalLayout_6->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 773, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Grafy3", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Nowy graf", 0));
        label->setText(QApplication::translate("MainWindow", "M=", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Macierz po\305\202\304\205cze\305\204", 0));
        label_2->setText(QApplication::translate("MainWindow", "Ilo\305\233\304\207 wierzcho\305\202k\303\263w:", 0));
        consistentGraphGeneratorTrigget->setText(QApplication::translate("MainWindow", "generuj", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "ConsistentGraphGenerator", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "Dijkstra", 0));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MainWindow", "Centrum", 0));
        label_3->setText(QApplication::translate("MainWindow", "D = ", 0));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("MainWindow", "Macierz odleg\305\202o\305\233ci", 0));
        removeTrigget->setText(QApplication::translate("MainWindow", "usu\305\204", 0));
        MSTTrigger->setText(QApplication::translate("MainWindow", "wyznacz", 0));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("MainWindow", "Minimalne drzewo rozpinajace", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
