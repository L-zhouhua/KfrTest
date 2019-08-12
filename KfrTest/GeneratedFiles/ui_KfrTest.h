/********************************************************************************
** Form generated from reading UI file 'KfrTest.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KFRTEST_H
#define UI_KFRTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_KfrTestClass
{
public:
    QWidget *centralWidget;
    QChartView *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KfrTestClass)
    {
        if (KfrTestClass->objectName().isEmpty())
            KfrTestClass->setObjectName(QString::fromUtf8("KfrTestClass"));
        KfrTestClass->resize(600, 400);
        centralWidget = new QWidget(KfrTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QChartView(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 551, 271));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 310, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 310, 75, 23));
        KfrTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KfrTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        KfrTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KfrTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        KfrTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KfrTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        KfrTestClass->setStatusBar(statusBar);

        retranslateUi(KfrTestClass);

        QMetaObject::connectSlotsByName(KfrTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *KfrTestClass)
    {
        KfrTestClass->setWindowTitle(QCoreApplication::translate("KfrTestClass", "KfrTest", nullptr));
        pushButton->setText(QCoreApplication::translate("KfrTestClass", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("KfrTestClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KfrTestClass: public Ui_KfrTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KFRTEST_H
