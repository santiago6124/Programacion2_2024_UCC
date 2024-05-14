#include <iostream>
#include "Display.h"

void Display::mostrarHora(int HH, int MM, int SS)
{
    cout << "Hora: " << HH << ":" << MM << ":" << SS  << endl;
}

void Display::mostrarAlarma(int HH, int MM, int SS)
{
    cout << "Alarma: " << HH << ":" << MM << ":" << SS << endl;
}

void Display::mostrarTemperatura(double tempC, double tempf, double tempk)
{
    cout << "Temperatura en grados celsius: " << tempC << "C " << endl;
    cout << "Temperatura en grados fahrenheit: " << tempf << "F " << endl;
    cout << "Temperatura en grados kelvin: " << tempk << "K " << endl;
}