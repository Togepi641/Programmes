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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLCDNumber *LCD_Rayon;
    QLCDNumber *LCD_Circonference;
    QSlider *Slide_Rayon;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *Slide_Circonference;
    QLCDNumber *LCD_Surface;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1194, 658);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        LCD_Rayon = new QLCDNumber(centralWidget);
        LCD_Rayon->setObjectName(QString::fromUtf8("LCD_Rayon"));
        LCD_Rayon->setGeometry(QRect(340, 40, 151, 81));
        LCD_Circonference = new QLCDNumber(centralWidget);
        LCD_Circonference->setObjectName(QString::fromUtf8("LCD_Circonference"));
        LCD_Circonference->setGeometry(QRect(350, 190, 151, 71));
        Slide_Rayon = new QSlider(centralWidget);
        Slide_Rayon->setObjectName(QString::fromUtf8("Slide_Rayon"));
        Slide_Rayon->setGeometry(QRect(300, 140, 241, 41));
        Slide_Rayon->setMaximum(200);
        Slide_Rayon->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 440, 251, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 111, 61));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 210, 191, 51));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 150, 131, 41));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 290, 241, 41));
        Slide_Circonference = new QSlider(centralWidget);
        Slide_Circonference->setObjectName(QString::fromUtf8("Slide_Circonference"));
        Slide_Circonference->setGeometry(QRect(310, 280, 231, 41));
        Slide_Circonference->setMaximum(1257);
        Slide_Circonference->setOrientation(Qt::Horizontal);
        LCD_Surface = new QLCDNumber(centralWidget);
        LCD_Surface->setObjectName(QString::fromUtf8("LCD_Surface"));
        LCD_Surface->setGeometry(QRect(350, 330, 151, 61));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 360, 191, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1194, 43));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        label->setText(QApplication::translate("MainWindow", "Rayon", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Circonf\303\251rence", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "R_Rayon", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "R_Circonf\303\251rence", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Surface", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
