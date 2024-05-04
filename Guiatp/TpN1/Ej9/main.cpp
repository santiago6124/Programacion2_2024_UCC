#include <iostream>
#include "libreria.h"

int main() {
    int n;
    std::cout << "Ingrese el tamanio del arreglo: ";
    std::cin >> n;
    
    std::vector<int> arreglo(n);
    std::cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arreglo[i];
    }
    
    if (esPermutacion(arreglo)) {
        std::cout << "El arreglo representa una permutacion.\n";
    } else {
        std::cout << "El arreglo no representa una permutacion.\n";
    }
    
    return 0;
}