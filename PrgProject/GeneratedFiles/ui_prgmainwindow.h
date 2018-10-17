/********************************************************************************
** Form generated from reading UI file 'prgmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRGMAINWINDOW_H
#define UI_PRGMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrgMainWindowClass
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PrgMainWindowClass)
    {
        if (PrgMainWindowClass->objectName().isEmpty())
            PrgMainWindowClass->setObjectName(QStringLiteral("PrgMainWindowClass"));
        PrgMainWindowClass->resize(600, 400);
        centralWidget = new QWidget(PrgMainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(190, 100, 104, 71));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 220, 75, 23));
        PrgMainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PrgMainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        PrgMainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PrgMainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PrgMainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PrgMainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PrgMainWindowClass->setStatusBar(statusBar);

        retranslateUi(PrgMainWindowClass);

        QMetaObject::connectSlotsByName(PrgMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *PrgMainWindowClass)
    {
        PrgMainWindowClass->setWindowTitle(QApplication::translate("PrgMainWindowClass", "PrgMainWindow", nullptr));
        pushButton->setText(QApplication::translate("PrgMainWindowClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrgMainWindowClass: public Ui_PrgMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRGMAINWINDOW_H
