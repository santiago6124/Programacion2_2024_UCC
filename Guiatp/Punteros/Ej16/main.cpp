#include <iostream>
#include <vector>
#include "libreria.h"

int main() {
    // Ejemplo de matriz
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;
    std::cout << "Ingrese la posición (i, j) en la matriz: ";
    std::cin >> i >> j;

    // Calcular la suma de elementos adyacentes
    int suma = sumaElementosAdyacentes(matriz, i, j);

    std::cout << "La suma de elementos adyacentes a m(" << i << ", " << j << ") es: " << suma << std::endl;

    return 0;
}