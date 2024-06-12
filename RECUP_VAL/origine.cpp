#include "origine.h"
#include "ui_destination.h"

Origine::Origine() : value{0}
{
}

int Origine::getValue() const
{
    return value;
}

void Origine::setValue(int value)
{
    if(value != this->value){
        this->value = value;

        emit valeurChangee(this->value);
    }
}
