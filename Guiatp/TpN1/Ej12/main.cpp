#include <iostream>
#include <vector>
#include "libreria.h"

int main() {
    int N;
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> N;

    std::vector<int> vector(N);

    std::cout << "Ingrese los " << N << " elementos del vector:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> vector[i];
    }

    // Ordenar el vector de mayor a menor
    ordenarVector(vector);

    // Mostrar el vector ordenado
    std::cout << "El vector ordenado de mayor a menor es: ";
    for (int i = 0; i < N; ++i) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
