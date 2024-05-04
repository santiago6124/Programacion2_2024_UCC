#include <iostream>
#include "libreria.h"

int main() {
    int n;
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> n;

    std::vector<int> arreglo(n);
    std::cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arreglo[i];
    }

    reorganizarArreglo(arreglo);

    std::cout << "Arreglo reorganizado: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
