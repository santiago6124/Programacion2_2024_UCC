#include <iostream>
#include <vector>

void reorganizarArreglo(std::vector<int>& arreglo) {
    int izquierda = 0;
    int derecha = arreglo.size() - 1;

    while (izquierda < derecha) {
        while (izquierda < derecha && arreglo[izquierda] % 2 != 0) {
            izquierda++;
        }
        while (izquierda < derecha && arreglo[derecha] % 2 == 0) {
            derecha--;
        }
        if (izquierda < derecha) {
            std::swap(arreglo[izquierda], arreglo[derecha]);
            izquierda++;
            derecha--;
        }
    }
}