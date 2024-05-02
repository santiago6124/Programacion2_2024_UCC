#include <iostream>
#include "libreria.h"


int main() {
    int X, Y;

    // Solicitar al usuario que ingrese los valores de X e Y
    std::cout << "Ingrese el valor de X: ";
    std::cin >> X;

    std::cout << "Ingrese el valor de Y: ";
    std::cin >> Y;

    std::cout << "Antes del intercambio: X = " << X << ", Y = " << Y << std::endl;

    // Llamada a la función intercambiar
    intercambiar(X, Y);

    std::cout << "Después del intercambio: X = " << X << ", Y = " << Y << std::endl;

    return 0;
}