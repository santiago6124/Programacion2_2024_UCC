#include "complejo.h"
#include <iostream>

// Constructor predeterminado
Complejo::Complejo() : real(0.0), imaginario(0.0) {}

// Constructor con parámetros
Complejo::Complejo(double real, double imaginario) : real(real), imaginario(imaginario) {}

// Función para mostrar el número complejo
void Complejo::mostrar() {
    std::cout << real << " + " << imaginario << "i";
}

// Sobrecarga del operador de suma
Complejo Complejo::operator+(const Complejo& otro) {
    return Complejo(real + otro.real, imaginario + otro.imaginario);
}

// Sobrecarga del operador de resta
Complejo Complejo::operator-(const Complejo& otro) {
    return Complejo(real - otro.real, imaginario - otro.imaginario);
}

// Sobrecarga del operador de multiplicación
Complejo Complejo::operator*(const Complejo& otro) {
    double real_resultado = real * otro.real - imaginario * otro.imaginario;
    double imaginario_resultado = real * otro.imaginario + imaginario * otro.real;
    return Complejo(real_resultado, imaginario_resultado);
}

// Función para calcular el conjugado de un número complejo
Complejo Complejo::conjugado() {
    return Complejo(real, -imaginario);
}
