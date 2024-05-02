#include "Articulo.h"

// Constructores
Articulo::Articulo() : costoBase(0), precioPorMayor(0), precioPorMenor(0) {}

Articulo::Articulo(int costo, float porcentajePorMayor, float porcentajePorMenor) 
    : costoBase(costo), precioPorMayor(0), precioPorMenor(0) {
    calcularPrecios(porcentajePorMayor, porcentajePorMenor);
}

// Getters y Setters
int Articulo::getCostoBase() { return costoBase; }

float Articulo::getPrecioPorMayor() { return precioPorMayor; }

float Articulo::getPrecioPorMenor() { return precioPorMenor; }

void Articulo::setCostoBase(int costo) { 
    costoBase = costo;
    calcularPrecios(0.15, 0.3); // recalcula precios por defecto cuando cambia el costo base
}

// Métodos
void Articulo::calcularPrecios(float porcentajePorMayor, float porcentajePorMenor) {
    precioPorMayor = costoBase * (1 + porcentajePorMayor);
    precioPorMenor = costoBase * (1 + porcentajePorMenor);
}

void Articulo::incremento(int incrementoCosto) {
    costoBase += incrementoCosto;
    calcularPrecios(0.15, 0.3); // recalcula precios por defecto después de incremento
}
