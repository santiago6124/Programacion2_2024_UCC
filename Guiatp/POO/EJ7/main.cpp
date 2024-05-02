#include "cuenta_bancaria.h"
#include <iostream>

/*
Obtener una clase que represente una cuenta bancaria. Para la misma se tiene
como información:
 Número de cuenta.
 Saldo.
 Tasa de interés
Definir los datos miembro de la clase.
Obtener los métodos para:
 Crear una cuenta nueva (constructor) a partir de la asignación del número
de cuenta y una tasa de interés. Toda nueva cuenta se crea con saldo 0.
 Carga y visualización de los datos miembro.
 Realizar un depósito.
 Realizar una extracción.
 Acreditar intereses.
Considerar que algunas operaciones requieren comprobación antes de ser
realizadas
Definir un programa principal que gestione dos cuentas distintas.
*/

void mostrarInfoCuenta(CuentaBancaria cuenta) {
    std::cout << "Número de cuenta: " << cuenta.obtenerNumeroCuenta() << std::endl;
    std::cout << "Saldo: " << cuenta.obtenerSaldo() << std::endl;
}

int main() {
    // Crear cuentas bancarias
    int numeroCuenta1;
    double tasaInteres1;
    std::cout << "Ingrese el número de cuenta para la cuenta 1: ";
    std::cin >> numeroCuenta1;
    std::cout << "Ingrese la tasa de interés para la cuenta 1: ";
    std::cin >> tasaInteres1;
    CuentaBancaria cuenta1(numeroCuenta1, tasaInteres1);

    int numeroCuenta2;
    double tasaInteres2;
    std::cout << "Ingrese el número de cuenta para la cuenta 2: ";
    std::cin >> numeroCuenta2;
    std::cout << "Ingrese la tasa de interés para la cuenta 2: ";
    std::cin >> tasaInteres2;
    CuentaBancaria cuenta2(numeroCuenta2, tasaInteres2);

    // Realizar operaciones en las cuentas
    double cantidad;
    std::cout << "Ingrese la cantidad a depositar en la cuenta 1: ";
    std::cin >> cantidad;
    cuenta1.depositar(cantidad);
    std::cout << "Ingrese la cantidad a depositar en la cuenta 2: ";
    std::cin >> cantidad;
    cuenta2.depositar(cantidad);

    // Mostrar datos de las cuentas
    std::cout << "Datos de la cuenta 1:" << std::endl;
    mostrarInfoCuenta(cuenta1);
    std::cout << "Datos de la cuenta 2:" << std::endl;
    mostrarInfoCuenta(cuenta2);

    // Realizar más operaciones y mostrar datos actualizados
    do {
        std::cout << "Ingrese la cantidad a extraer de la cuenta 1: ";
        std::cin >> cantidad;
    } while (!cuenta1.extraer(cantidad));
    std::cout << "Extracción realizada correctamente." << std::endl;

    do {
        std::cout << "Ingrese la cantidad a extraer de la cuenta 2: ";
        std::cin >> cantidad;
    } while (!cuenta2.extraer(cantidad));
    std::cout << "Extracción realizada correctamente." << std::endl;

    std::cout << "Datos de la cuenta 1 después de la extracción:" << std::endl;
    mostrarInfoCuenta(cuenta1);
    std::cout << "Datos de la cuenta 2 después de la extracción:" << std::endl;
    mostrarInfoCuenta(cuenta2);

    cuenta1.acreditarIntereses();
    cuenta2.acreditarIntereses();

    std::cout << "Datos de la cuenta 1 después de acreditar intereses:" << std::endl;
    mostrarInfoCuenta(cuenta1);
    std::cout << "Datos de la cuenta 2 después de acreditar intereses:" << std::endl;
    mostrarInfoCuenta(cuenta2);

    return 0;
}
