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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLCDNumber>
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
    QComboBox *choixConversion;
    QPushButton *boutConvertir;
    QPushButton *quitter;
    QLineEdit *valeur;
    QLCDNumber *resultats;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1105, 603);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        choixConversion = new QComboBox(centralWidget);
        choixConversion->addItem(QString());
        choixConversion->addItem(QString());
        choixConversion->setObjectName(QString::fromUtf8("choixConversion"));
        choixConversion->setGeometry(QRect(450, 250, 141, 21));
        boutConvertir = new QPushButton(centralWidget);
        boutConvertir->setObjectName(QString::fromUtf8("boutConvertir"));
        boutConvertir->setGeometry(QRect(460, 290, 75, 23));
        quitter = new QPushButton(centralWidget);
        quitter->setObjectName(QString::fromUtf8("quitter"));
        quitter->setGeometry(QRect(570, 290, 75, 23));
        valeur = new QLineEdit(centralWidget);
        valeur->setObjectName(QString::fromUtf8("valeur"));
        valeur->setGeometry(QRect(320, 250, 113, 20));
        resultats = new QLCDNumber(centralWidget);
        resultats->setObjectName(QString::fromUtf8("resultats"));
        resultats->setGeometry(QRect(600, 230, 101, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1105, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(quitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        choixConversion->setItemText(0, QApplication::translate("MainWindow", "Celsus -> Farenheit", nullptr));
        choixConversion->setItemText(1, QApplication::translate("MainWindow", "Farenheit -> Celsus", nullptr));

        boutConvertir->setText(QApplication::translate("MainWindow", "Convertir", nullptr));
        quitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        valeur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
