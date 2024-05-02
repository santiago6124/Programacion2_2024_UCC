#include <iostream>
#include <vector>
#include "libreria.h"

int main() {
    int N, numero;
    std::cout << "Ingrese la cantidad de elementos del arreglo: ";
    std::cin >> N;

    std::vector<int> arreglo(N);

    std::cout << "Ingrese los " << N << " elementos del arreglo:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> arreglo[i];
    }

    std::cout << "Ingrese el número que desea buscar: ";
    std::cin >> numero;

    int ubicacion;
    if (buscarNumero(arreglo, numero, ubicacion)) {
        std::cout << "El número " << numero << " está presente en el arreglo en la posición " << ubicacion << std::endl;
    } else {
        std::cout << "El número " << numero << " no está presente en el arreglo." << std::endl;
    }

    return 0;
}
