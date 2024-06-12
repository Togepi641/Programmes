#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QStandardItemModel>

#include "httprest.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_getBut_clicked();
    void restFinishedGet();


private:
    Ui::MainWindow *ui;
    Httprest *httpRest;
    QStandardItemModel* modele;

};

#endif // MAINWINDOW_H
