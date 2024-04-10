#include "calcu.h"

void Calcu::cargarValores(int v1, int v2) {
    valor1 = v1;
    valor2 = v2;
}

int Calcu::calcularSuma() {
    return valor1 + valor2;
}

int Calcu::calcularResta() {
    return valor1 - valor2;
}

int Calcu::calcularMultiplicacion() {
    return valor1 * valor2;
}

double Calcu::calcularDivision() {
    if (valor2 != 0)
        return static_cast<double>(valor1) / valor2;
    else
        return 0.0; // En caso de división por cero, devolvemos 0
}
