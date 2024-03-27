#include <iostream>
#include "libreria.h"

int main() {
    int A, B, K;
    std::cout << "Ingrese tres enteros A, B y K: ";
    std::cin >> A >> B >> K;

    if (K == 0) {
        std::cout << "Error: K no puede ser cero." << std::endl;
        return 1;
    }

    int cantidad = cantidadNumerosDivisibles(A, B, K);
    std::cout << "Cantidad de números divisibles por " << K << " en el rango de " << A << " a " << B << ": " << cantidad << std::endl;

    return 0;
}