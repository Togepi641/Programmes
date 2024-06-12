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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *bt_envoi;
    QFrame *frame_2;
    QFrame *frame_3;
    QTextBrowser *zone_affichage;
    QLineEdit *linEdit_envoi;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_4;
    QLCDNumber *lcdTemperature;
    QLabel *label;
    QFrame *frame;
    QLCDNumber *lcdConsigne;
    QSlider *Slider_val;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(801, 683);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        bt_envoi = new QPushButton(centralWidget);
        bt_envoi->setObjectName(QString::fromUtf8("bt_envoi"));
        bt_envoi->setGeometry(QRect(40, 100, 301, 41));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(930, 180, 120, 80));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(410, 0, 381, 621));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        zone_affichage = new QTextBrowser(frame_3);
        zone_affichage->setObjectName(QString::fromUtf8("zone_affichage"));
        zone_affichage->setGeometry(QRect(10, 80, 361, 381));
        linEdit_envoi = new QLineEdit(frame_3);
        linEdit_envoi->setObjectName(QString::fromUtf8("linEdit_envoi"));
        linEdit_envoi->setGeometry(QRect(10, 530, 331, 41));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 171, 41));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 500, 221, 31));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(40, 360, 321, 181));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Plain);
        lcdTemperature = new QLCDNumber(frame_4);
        lcdTemperature->setObjectName(QString::fromUtf8("lcdTemperature"));
        lcdTemperature->setGeometry(QRect(10, 70, 291, 101));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 211, 31));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 160, 321, 191));
        frame->setAcceptDrops(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        lcdConsigne = new QLCDNumber(frame);
        lcdConsigne->setObjectName(QString::fromUtf8("lcdConsigne"));
        lcdConsigne->setGeometry(QRect(0, 80, 301, 101));
        Slider_val = new QSlider(frame);
        Slider_val->setObjectName(QString::fromUtf8("Slider_val"));
        Slider_val->setGeometry(QRect(0, 50, 301, 31));
        Slider_val->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 201, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 801, 22));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bt_envoi->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Console reception Arduino :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ligne de commande vers Arduino :", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Temp\303\251rature :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Consigne remp\303\251rature :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
