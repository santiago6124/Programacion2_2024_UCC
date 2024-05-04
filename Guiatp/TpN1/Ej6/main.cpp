#include <iostream>
#include "libreria.h"


int main() {
    int X;
    std::cout << "Ingrese un número entero: ";
    std::cin >> X;

    if (esSemiPrimo(X))
        std::cout << X << " es un número semi-primo." << std::endl;
    else
        std::cout << X << " no es un número semi-primo." << std::endl;

    return 0;
}