#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSerialPort>

#define PORT "COM18"
#define VITESSE QSerialport::Baud115200

QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bt_envoi_clicked();
    void on_linEdit_envoi_returnPressed();
    void on_Slider_val_sliderReleased();
    void DetecteErreur(QSerialPort::SerialPortError erreur);
    void LitDonneesRecues();

private:
    Ui::MainWindow *ui;
    QSerialPort     m_lecteur_port_serie;
};

#endif // MAINWINDOW_H
