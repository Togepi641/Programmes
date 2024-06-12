#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

double Cels2Far (double temper){
    return temper*9.0/5.0+32.0;
}





void MainWindow::on_But_convertir_clicked()
{
    double Far = Cels2Far(this->ui->saisie->text().toDouble());
    this->ui->LCD_resultats_Far->display(Far);
}
