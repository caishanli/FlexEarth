/********************************************************************************
** Form generated from reading UI file 'FEMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEMAINWINDOW_H
#define UI_FEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FEMainWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FEMainWindow)
    {
        if (FEMainWindow->objectName().isEmpty())
            FEMainWindow->setObjectName(QStringLiteral("FEMainWindow"));
        FEMainWindow->resize(400, 300);
        menuBar = new QMenuBar(FEMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        FEMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FEMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FEMainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(FEMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FEMainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FEMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FEMainWindow->setStatusBar(statusBar);

        retranslateUi(FEMainWindow);

        QMetaObject::connectSlotsByName(FEMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FEMainWindow)
    {
        FEMainWindow->setWindowTitle(QApplication::translate("FEMainWindow", "FEMainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class FEMainWindow: public Ui_FEMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEMAINWINDOW_H
