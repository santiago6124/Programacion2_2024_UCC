#include "racional.h"

NumeroRacional::NumeroRacional() : numerador(0), denominador(1) {}

NumeroRacional::NumeroRacional(int num, int den) : numerador(num), denominador(den) {}

void NumeroRacional::setNumerador(int num) {
    numerador = num;
}

void NumeroRacional::setDenominador(int den) {
    denominador = den;
}

int NumeroRacional::getNumerador() const {
    return numerador;
}

int NumeroRacional::getDenominador() const {
    return denominador;
}

void NumeroRacional::simplificar() {
    int gcd = mcd(numerador, denominador);
    numerador /= gcd;
    denominador /= gcd;
}

NumeroRacional NumeroRacional::operator+(const NumeroRacional& otro) {
    NumeroRacional resultado;
    resultado.setNumerador(numerador * otro.getDenominador() + otro.getNumerador() * denominador);
    resultado.setDenominador(denominador * otro.getDenominador());
    resultado.simplificar();
    return resultado;
}

NumeroRacional NumeroRacional::operator-(const NumeroRacional& otro) {
    NumeroRacional resultado;
    resultado.setNumerador(numerador * otro.getDenominador() - otro.getNumerador() * denominador);
    resultado.setDenominador(denominador * otro.getDenominador());
    resultado.simplificar();
    return resultado;
}

NumeroRacional NumeroRacional::operator++() {
    numerador += denominador;
    return *this;
}

NumeroRacional NumeroRacional::operator--() {
    numerador -= denominador;
    return *this;
}

NumeroRacional NumeroRacional::operator+=(int entero) {
    numerador += entero * denominador;
    return *this;
}

NumeroRacional NumeroRacional::operator-=(int entero) {
    numerador -= entero * denominador;
    return *this;
}

int NumeroRacional::mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
