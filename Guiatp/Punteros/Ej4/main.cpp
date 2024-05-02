#include <iostream>
#include "libreria.h"

int main() {
    int N;
    std::cout << "Ingrese un número para calcular su factorial: ";
    std::cin >> N;

    unsigned long long resultado = factorial(N);
    std::cout << "El factorial de " << N << " es: " << resultado << std::endl;

    return 0;
}