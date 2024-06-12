#ifndef HTTPREST_H
#define HTTPREST_H

#include <QMainWindow>
#include <QObject>
#include <QtNetwork>


class Httprest: public QObject
{
    Q_OBJECT
private slots:
    void httpFinished();
    void httpReadyRead();

public:
    Httprest();
    ~Httprest();
    void requeteRestGET();
    QNetworkReply* getReply();
    QByteArray* getDataBuffer();


private:
    QNetworkAccessManager qnam;
    QNetworkReply* reply;
    QByteArray* dataBuffer;
};

#endif // HTTPREST_H
