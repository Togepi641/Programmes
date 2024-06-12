#ifndef ORIGINE_H
#define ORIGINE_H

#include <QObject>

class Origine: public QObject
{
    Q_OBJECT

public:
    Origine();
    int getValue() const;
    void setValue(int value);

signals:
    void valeurChangee(int nouvelleValeur);

private:
    int value;
};

#endif
