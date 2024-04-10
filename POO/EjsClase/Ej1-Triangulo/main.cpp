#include <iostream>
#include "triangulo.h"

int main() {
    int ladoA, ladoB, ladoC;
    std::cout << "Ingrese el valor del lado A: ";
    std::cin >> ladoA;
    std::cout << "Ingrese el valor del lado B: ";
    std::cin >> ladoB;
    std::cout << "Ingrese el valor del lado C: ";
    std::cin >> ladoC;

    Triangulo miTriangulo;
    miTriangulo.inicializar(ladoA, ladoB, ladoC);

    miTriangulo.imprimirLadoMayor();
    miTriangulo.esEquilatero();

    return 0;
}
