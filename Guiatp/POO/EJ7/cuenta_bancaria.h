#ifndef CUENTA_BANCARIA_H
#define CUENTA_BANCARIA_H

class CuentaBancaria {
private:
    int numeroCuenta;
    double saldo;
    double tasaInteres;

public:
    CuentaBancaria(int numeroCuenta, double tasaInteres);
    bool depositar(double cantidad);
    bool extraer(double cantidad);
    void acreditarIntereses();
    double obtenerSaldo();
    int obtenerNumeroCuenta();
};

#endif // CUENTA_BANCARIA_H
