#include <iostream>
#include <vector>
#include "libreria.h"

int main() {
    int N;
    std::cout << "Ingrese el tamaño del vector: ";
    std::cin >> N;

    std::vector<int> vector(N);

    std::cout << "Ingrese los " << N << " elementos del vector:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> vector[i];
    }

    // Invertir el vector
    invertirVector(vector);

    // Mostrar el vector invertido
    std::cout << "El vector invertido es: ";
    for (int i = 0; i < N; ++i) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
