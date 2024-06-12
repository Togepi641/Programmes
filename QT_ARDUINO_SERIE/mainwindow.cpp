#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_lecteur_port_serie.setPortName(PORT);
    m_lecteur_port_serie.setBaudRate(VITESSE);

    if(!m_lecteur_port_serie.open(QIODevice::ReadWrite))
    {
        qDebug() << "Echec de l'ouverture du port : ";
        qDebug() << PORT << "\n";
        qDebug() << "Type d'erreur : ";
        qDebug() << m_lecteur_port_serie.errorString() << "\n";
    }

    connect(&m_lecteur_port_serie, &QSerialPort::errorOccurred, this, &MainWindow::DetecteErreur);
    connect(&m_lecteur_port_serie, &QSerialPort::readyRead, this, &MainWindow::LitDonneesRecues);
    ui->zone_affichage->setStyleSheet("background-color: green;");
    ui->linEdit_envoi->setStyleSheet("background-color: green");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LitDonneesRecues()
{
    static QByteArray tableau_octets_lus;
    tableau_octets_lus.append(m_lecteur_port_serie.readAll());
    if (tableau_octets_lus.back() =='\n')
    {
        ui->zone_affichage->append(tableau_octets_lus.data());
        qDebug() <<"tableau_octets_lus.data() :" << tableau_octets_lus.data();
        QString derniere_ligne = QString::fromUtf8(tableau_octets_lus);

        if(derniere_ligne.startsWith("PC: => ON"))
            ui->bt_envoi->setText("Mode Actuel : PC");
        else
            ui->bt_envoi->setText("Mode Actuel : Autonome");
    }
}

void MainWindow::DetecteErreur(QSerialPort::SerialPortError erreur)
{
    if (erreur == QSerialPort::ReadError)
    {
        qDebug() << "Erreur d'entrée-sortie en lecture du port : ";
        qDebug() << m_lecteur_port_serie.portName() << "\n";
        qDebug() << "Erreur : ";
        qDebug() << m_lecteur_port_serie.errorString() << "\n";
        QCoreApplication::exit(1);
    }
}

void MainWindow::on_bt_envoi_clicked()
{
    m_lecteur_port_serie.write("PC:");
}


void MainWindow::on_linEdit_envoi_returnPressed()
{
    QByteArray envoi;
    QString txt;
    envoi = txt.toUtf8();
    m_lecteur_port_serie.write(envoi);
}


void MainWindow::on_Slider_val_sliderReleased()
{
    QByteArray envoi;
    float consigne = ui->Slider_val->sliderPosition()/10.0;
    ui->lcdConsigne->display(consigne);
    QString txt = "CONS:"+ QString::number(consigne);
    qDebug() << "envoi" << envoi;
    m_lecteur_port_serie.write(envoi);
}

