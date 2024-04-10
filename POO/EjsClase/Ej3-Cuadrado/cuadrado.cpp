#include "cuadrado.h"

void Cuadrado::cargarLado(double lado) {
    this->lado = lado;
}

double Cuadrado::calcularPerimetro() {
    return 4 * lado;
}

double Cuadrado::calcularSuperficie() {
    return lado * lado;
}
