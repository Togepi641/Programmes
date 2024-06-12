#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "httprest.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow (parent),
    ui(new Ui::MainWindow),
    httpRest(new Httprest),
    modele(new QStandardItemModel)
{
    ui->setupUi(this);
    setWindowTitle(tr("HTTP"));
    ui->tableView->setModel(modele);
}


void MainWindow::on_getBut_clicked()
{
    httpRest->requeteRestGET();
    connect(httpRest->getReply(), &QNetworkReply::finished, this, &MainWindow::restFinishedGet);
}

void MainWindow::restFinishedGet()
{
    QByteArray *dataBuffer = nullptr;
    dataBuffer = httpRest->getDataBuffer();
    QJsonDocument doc = QJsonDocument::fromJson(*dataBuffer);
    QJsonObject jsonObj = doc.object();
    QJsonArray resultatsTab = jsonObj["results"].toArray();

    modele->setRowCount(resultatsTab.count());
    modele->setColumnCount(2);

    for (int i=0; i< resultatsTab.count(); i++)
    {
        QJsonObject resultats = resultatsTab[i].toObject();
        modele->setItem(i, 0, new QStandardItem(resultats["name"].toString()));
        modele->setItem(i, 1, new QStandardItem(resultats["vicinity"].toString()));
    }
    dataBuffer->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete modele;
    delete httpRest;
}
