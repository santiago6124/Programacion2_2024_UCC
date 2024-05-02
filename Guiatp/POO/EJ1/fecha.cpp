#include "fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

Fecha::Fecha() : dia(1), mes(1), anio(1900) {}

int Fecha::getDia(){
    return dia;
}
int Fecha::getMes(){
    return mes;
}
int Fecha::getAnio(){
    return anio;
}

Fecha Fecha::operator++() {
    if (dia < 31) {
        ++dia;
    } else {
        dia = 1;
        if (mes < 12) {
            ++mes;
        } else {
            mes = 1;
            ++anio;
        }
    }
    return *this;
}

Fecha Fecha::operator--() {
    if (dia > 1) {
        --dia;
    } else {
        if (mes > 1) {
            --mes;
            dia = 31; // Suponiendo que todos los meses tienen 31 días
        } else {
            --anio;
            mes = 12;
            dia = 31;
        }
    }
    return *this;
}

Fecha Fecha::operator+(int dias) {
    Fecha nuevaFecha(*this);
    for (int i = 0; i < dias; ++i) {
        ++nuevaFecha;
    }
    return nuevaFecha;
}

Fecha Fecha::operator-(int dias) {
    Fecha nuevaFecha(*this);
    for (int i = 0; i < dias; ++i) {
        --nuevaFecha;
    }
    return nuevaFecha;
}
