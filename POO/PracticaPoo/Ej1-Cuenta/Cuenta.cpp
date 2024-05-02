#include "Cuenta.h"

// Constructor
Cuenta::Cuenta(std::string titular, double cantidad) {
    this->titular = titular;
    this->cantidad = cantidad;
}

// Métodos get y set
std::string Cuenta::getTitular() const {
    return titular;
}

void Cuenta::setTitular(std::string titular) {
    this->titular = titular;
}

double Cuenta::getCantidad() const {
    return cantidad;
}

void Cuenta::setCantidad(double cantidad) {
    this->cantidad = cantidad;
}

// Otros métodos
void Cuenta::ingresar(double cantidad) {
    if (cantidad > 0)
        this->cantidad += cantidad;
}

void Cuenta::retirar(double cantidad) {
    if (this->cantidad - cantidad < 0)
        this->cantidad = 0;
    else
        this->cantidad -= cantidad;
}
