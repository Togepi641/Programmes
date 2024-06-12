#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<cmath>

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

double Circonference(double rayon)
{
    return 2.0*rayon*M_PI;
}

double Surface(double rayon)
{
    return rayon*rayon*M_PI;
}

double Rayon (double circonference)
{
    return circonference/2.0*M_PI;
}



void MainWindow::on_Slide_Rayon_sliderMoved(int position)
{
    this->ui->LCD_Rayon->display(position);
    double Circonf = Circonference(position);
    this ->ui->LCD_Circonference->display(Circonf);
    double surface = Surface(position);
    this ->ui->LCD_Surface->display(surface);
}

void MainWindow::on_Slide_Circonference_sliderMoved(int position)
{
    this->ui->LCD_Circonference->display(position);

}



