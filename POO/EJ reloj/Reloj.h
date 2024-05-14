#ifndef RELOJ_H
#define RELOJ_H

#include <iostream>
#include "Hora.h"
#include "Alarma.h"
#include "Temperatura.h"
#include "Display.h"

class Reloj
{
private:
    Hora hora;
    Alarma alarma;
    Temperatura temperatura;
    Display display;
public:
    void setHora(int HH, int MM, int SS);
    void setAlarma(int HH, int MM, int SS);
    void setTempC(double tempC);
    void setTempF(double tempF);
    void setTempK(double tempK);
    void incrementarHora();
    void tomarTemp();
    void mostrarHora();
    void mostrarAlarma();
    void mostrarTemperatura();
    bool checkAlarma();
};

#endif // RELOJ_H
