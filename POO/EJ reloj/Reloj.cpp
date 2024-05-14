#include <iostream>
#include "Reloj.h"

void Reloj::setHora(int HH, int MM, int SS)
{
    hora.setHora(HH, MM, SS);
}

void Reloj::setAlarma(int HH, int MM, int SS)
{
    alarma.setAlarma(HH, MM, SS);
}

void Reloj::setTempC(double tempC)
{
    temperatura.setTempC(tempC);
}

void Reloj::setTempF(double tempF)
{
    temperatura.setTempF(tempF);
}

void Reloj::setTempK(double tempK)
{
    temperatura.setTempK(tempK);
}

void Reloj::mostrarHora()
{
    display.mostrarHora(hora.getHH(), hora.getMM(), hora.getSS());
}

void Reloj::mostrarAlarma()
{
    display.mostrarAlarma(alarma.getHH(), alarma.getMM(), alarma.getSS());
}

void Reloj::mostrarTemperatura()
{
    display.mostrarTemperatura(temperatura.getTempC(), temperatura.getTempF(), temperatura.getTempK());
}

bool Reloj::checkAlarma()
{
    if (hora.getHH() == alarma.getHH() && hora.getMM() == alarma.getMM() && hora.getSS() == alarma.getSS())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Reloj::incrementarHora()
{
    hora.incrementarHora();
}

void Reloj::tomarTemp()
{
    temperatura.tomarTemp();
}