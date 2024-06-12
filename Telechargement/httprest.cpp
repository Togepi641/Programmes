#include "httprest.h"

Httprest::Httprest():
    dataBuffer(new QByteArray)
{
}

Httprest::~Httprest()
{
}

void Httprest::requeteRestGET()
{
    QUrl url = QUrl::fromUserInput("https://maps.googleapis.com/maps/api/place/nearbysearch/json?language=fr&location=43.3807801,-1.3069362&radius=10000&keyword=électricien&key=AIzaSyDGA1LfAItRLRZwgmuk3S6JWBB8JQUVpBw");
    reply = qnam.get(QNetworkRequest(url));
    connect(reply, &QNetworkReply::finished, this, &Httprest::httpFinished);
    connect(reply, &QIODevice::readyRead,this, &Httprest::httpReadyRead);
}

void Httprest::httpReadyRead()
{
    dataBuffer->append(reply->readAll());
}

void Httprest::httpFinished()
{
    reply->deleteLater();
    reply = Q_NULLPTR;
}

QNetworkReply* Httprest::getReply()
{
    return reply;
}

QByteArray* Httprest::getDataBuffer()
{
    return dataBuffer;
}
