#include <iostream>
#include "Cuenta.h"

int main() {
    // Crear una cuenta
    Cuenta cuenta("Juan Pérez", 1000.0);

    // Acceder a los atributos y métodos
    std::cout << "Titular de la cuenta: " << cuenta.getTitular() << std::endl;
    std::cout << "Cantidad en la cuenta: " << cuenta.getCantidad() << std::endl;

    // Realizar operaciones
    cuenta.ingresar(500.0);
    cuenta.retirar(200.0);

    // Mostrar el saldo actualizado
    std::cout << "Saldo actualizado: " << cuenta.getCantidad() << std::endl;

    return 0;
}
