#include <iostream>
#include "Alarma.h"

void Alarma::setAlarma(int HH, int MM, int SS)
{
    this->HH = HH;
    this->MM = MM;
    this->SS = SS;
}

int Alarma::getHH()
{
    return HH;
}

int Alarma::getMM()
{
    return MM;
}

int Alarma::getSS()
{
    return SS;
}
