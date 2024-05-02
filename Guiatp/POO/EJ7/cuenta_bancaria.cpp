#include "cuenta_bancaria.h"

CuentaBancaria::CuentaBancaria(int numeroCuenta, double tasaInteres) {
    this->numeroCuenta = numeroCuenta;
    this->saldo = 0.0;
    this->tasaInteres = tasaInteres;
}

bool CuentaBancaria::depositar(double cantidad) {
    if (cantidad > 0) {
        saldo += cantidad;
        return true;
    } else {
        return false;
    }
}

bool CuentaBancaria::extraer(double cantidad) {
    if (cantidad > 0 && saldo >= cantidad) {
        saldo -= cantidad;
        return true;
    } else {
        return false;
    }
}

void CuentaBancaria::acreditarIntereses() {
    double intereses = saldo * (tasaInteres / 100.0);
    saldo += intereses;
}

double CuentaBancaria::obtenerSaldo() {
    return saldo;
}

int CuentaBancaria::obtenerNumeroCuenta() {
    return numeroCuenta;
}
