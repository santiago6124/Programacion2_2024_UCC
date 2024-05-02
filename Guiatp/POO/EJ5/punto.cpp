#include "punto.h"
#include <iostream>
#include <cmath>

Punto::Punto() : x(0), y(0) {}

Punto::Punto(double x, double y) : x(x), y(y) {}

void Punto::operator++() {
    ++x;
    ++y;
}

void Punto::operator--() {
    --x;
    --y;
}

Punto Punto::operator+(const Punto& otroPunto) const {
    return Punto(x + otroPunto.x, y + otroPunto.y);
}

Punto Punto::operator+(int valor) const {
    return Punto(x + valor, y + valor);
}

Punto Punto::operator-(const Punto& otroPunto) const {
    return Punto(x - otroPunto.x, y - otroPunto.y);
}

Punto Punto::operator-(int valor) const {
    return Punto(x - valor, y - valor);
}

void Punto::mostrarCoordenadas() const {
    std::cout << "Coordenadas cartesianas: (" << x << ", " << y << ")" << std::endl;
}

void Punto::obtenerCoordenadasPolares() const {
    double r = std::sqrt(x * x + y * y);
    double theta = std::atan2(y, x);
    std::cout << "Coordenadas polares: (r = " << r << ", theta = " << theta << " rad)" << std::endl;
}
