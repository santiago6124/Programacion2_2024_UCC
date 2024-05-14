#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
using namespace std;
#include "Hora.h"
#include "Alarma.h"
#include "Temperatura.h"

class Display
{

public:
    void mostrarHora(int HH, int MM, int SS);
    void mostrarAlarma(int HH, int MM, int SS);
    void mostrarTemperatura(double tempC, double tempf, double tempk);
};
#endif