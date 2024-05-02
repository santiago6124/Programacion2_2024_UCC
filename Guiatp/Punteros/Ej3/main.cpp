#include <iostream>
#include "libreria.h"

int main() {
    int M, N;
    std::cout << "Ingrese dos enteros M y N: ";
    std::cin >> M >> N;

    // Calcular el MCD utilizando la función recursiva de la librería
    int resultado = mcd(M, N);
    std::cout << "El MCD de " << M << " y " << N << " es: " << resultado << std::endl;

    return 0;
}