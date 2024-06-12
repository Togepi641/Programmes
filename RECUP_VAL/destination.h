#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>

class Destination : public QObject
{
    Q_OBJECT

public:
    Destination();
    int getUneValeur() const;

public slots:
    void setUneValeur(int value);

private:
    int uneValeur;
};

#endif // DESTINATION_H
