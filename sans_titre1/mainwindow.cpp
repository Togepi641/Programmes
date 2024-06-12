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

double Far2Cell(double temper){
    return(temper-32.0)/1.8;
}


double Cels2Far (double temper){
    return temper*9.0/5.0+32.0;
}

void MainWindow::on_boutConvertir_clicked()
{

    double Far = Cels2Far(this->ui->valeur->text().toDouble());
    this->ui->resultats->display(Far);



            /*if (this->ui->choixConversion->currentIndex() == 1)
    {


    }

    else
    {
        double Far = Cels2Far(this->ui->valeur->text().toDouble());
        this->ui->resultats->setText(QString::number(Far));
    }*/

}



