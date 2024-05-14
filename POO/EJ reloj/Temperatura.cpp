#include "Temperatura.h"

double Temperatura::getTempC() {
    return tempC;
}

void Temperatura::setTempC(double tempC) {
    this->tempC = tempC;
}

double Temperatura::getTempF() {
    return tempF;
}

void Temperatura::setTempF(double tempF) {
    this->tempF = tempF;
}

double Temperatura::getTempK() {
    return tempK;
}

void Temperatura::setTempK(double tempK) {
    this->tempK = tempK;
}

void Temperatura::calcularTemp(double temp) {
    tempC = temp;
    tempF = temp * 9 / 5 + 32;
    tempK = temp + 273.15;
}

void Temperatura::tomarTemp() {
    tempC += 1.0 ;
    tempF += 1.0 ;
    tempK += 1.0;
}