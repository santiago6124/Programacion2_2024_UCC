#include "Raices.h"
#include <cmath>

Raices::Raices(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

// gets

int Raices::getA() const {
    return a;
}

int Raices::getB() const {
    return b;
}

int Raices::getC() const {
    return c;
}



// sets

void Raices::setA(int a) {
    this->a = a;
}

void Raices::setB(int b) {
    this->b = b;
}

void Raices::setC(int c) {
    this->c = c;
}

// métodos
double Raices::getDiscriminante() {
    double discriminante = b*b - 4*a*c;
    return discriminante; // return the discriminant value
}

bool Raices::TieneRaices() {
    double discriminante = b*b - 4*a*c;
    return discriminante >= 0;
}

bool Raices::tieneRaiz() {
    double discriminante = b*b - 4*a*c;
    return discriminante == 0;
}

double Raices::obtenerRaiz() {
    double discriminante = b*b - 4*a*c;
    if (discriminante == 0) {
        return -b / (2*a);
    } else {
        return 0.0; 
    }
}

std::pair<double, double> Raices::obtenerRaices() {
    double discriminante = b*b - 4*a*c;
    if (discriminante >= 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2*a);
        double raiz2 = (-b - sqrt(discriminante)) / (2*a);
        return {raiz1, raiz2};
    } else {

        return {0.0, 0.0};
    }
}

