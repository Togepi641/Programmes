/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *message;
    QLabel *label_1;
    QLabel *label_2;
    QLineEdit *evoi;
    QPushButton *btPublie;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1291, 659);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        message = new QTextBrowser(centralwidget);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(290, 160, 461, 211));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(280, 130, 121, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 90, 51, 21));
        evoi = new QLineEdit(centralwidget);
        evoi->setObjectName(QString::fromUtf8("evoi"));
        evoi->setGeometry(QRect(310, 90, 271, 22));
        btPublie = new QPushButton(centralwidget);
        btPublie->setObjectName(QString::fromUtf8("btPublie"));
        btPublie->setGeometry(QRect(590, 90, 75, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1291, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Console des messages", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Message :", nullptr));
        btPublie->setText(QCoreApplication::translate("MainWindow", "Publie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
