#include "destination.h"
#include "ui_destination.h"

Destination::Destination() : uneValeur{0}
{
}

int Destination::getUneValeur() const
{
    return uneValeur;
}

void Destination::setUneValeur(int value)
{
    this->uneValeur = value;
}
