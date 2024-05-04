#include <iostream>
#include "libreria.h"

int main() {
    int N, M;
    std::cout << "Ingrese dos enteros positivos N y M: ";
    std::cin >> N >> M;

    if (mismosDivisoresPrimos(N, M))
        std::cout << "N y M tienen el mismo conjunto de divisores primos." << std::endl;
    else
        std::cout << "N y M no tienen el mismo conjunto de divisores primos." << std::endl;

    return 0;
}