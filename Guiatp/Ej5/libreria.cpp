#include <iostream>
#include "libreria.h"

#include <vector>
// Función para verificar si N y M tienen el mismo conjunto de divisores primos
bool mismosDivisoresPrimos(int N, int M) {
    return obtenerDivisoresPrimos(N) == obtenerDivisoresPrimos(M);
}

// Función para obtener los divisores primos de un número
std::vector<int> obtenerDivisoresPrimos(int numero) {
    std::vector<int> divisores;
    int divisor = 2;
    while (numero > 1) {
        if (numero % divisor == 0) {
            divisores.push_back(divisor);
            while (numero % divisor == 0) {
                numero /= divisor;
            }
        }
        divisor++;
    }
    return divisores;
}
