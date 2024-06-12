/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *saisie_valeur;
    QPushButton *bout_valid_saisie;
    QLabel *lab_saisie;
    QLabel *lab_result;
    QLCDNumber *lcdResult;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(858, 506);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        saisie_valeur = new QLineEdit(centralWidget);
        saisie_valeur->setObjectName(QString::fromUtf8("saisie_valeur"));
        saisie_valeur->setGeometry(QRect(300, 130, 141, 71));
        bout_valid_saisie = new QPushButton(centralWidget);
        bout_valid_saisie->setObjectName(QString::fromUtf8("bout_valid_saisie"));
        bout_valid_saisie->setGeometry(QRect(450, 130, 211, 71));
        QFont font;
        font.setPointSize(20);
        bout_valid_saisie->setFont(font);
        lab_saisie = new QLabel(centralWidget);
        lab_saisie->setObjectName(QString::fromUtf8("lab_saisie"));
        lab_saisie->setGeometry(QRect(30, 130, 251, 71));
        QFont font1;
        font1.setPointSize(24);
        lab_saisie->setFont(font1);
        lab_result = new QLabel(centralWidget);
        lab_result->setObjectName(QString::fromUtf8("lab_result"));
        lab_result->setGeometry(QRect(30, 220, 251, 71));
        lab_result->setFont(font1);
        lcdResult = new QLCDNumber(centralWidget);
        lcdResult->setObjectName(QString::fromUtf8("lcdResult"));
        lcdResult->setGeometry(QRect(300, 220, 141, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 858, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        bout_valid_saisie->setText(QApplication::translate("MainWindow", "Valide \n"
"la saisie", nullptr));
        lab_saisie->setText(QApplication::translate("MainWindow", "Saisir une valeur : ", nullptr));
        lab_result->setText(QApplication::translate("MainWindow", "<html><head/><body><p>R\303\251sultat :</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
