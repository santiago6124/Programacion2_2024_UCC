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

    // Verificar si existe un triplete triangular en el arreglo
    if (existeTripleteTriangular(vector)) {
        std::cout << "Existe un triplete triangular en el arreglo." << std::endl;
    } else {
        std::cout << "No existe un triplete triangular en el arreglo." << std::endl;
    }

    return 0;
}