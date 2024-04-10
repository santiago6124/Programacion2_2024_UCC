#include <iostream>
#include "libreria.h"

int main() {
    int tamano;
    std::cout << "Ingrese el tamano del arreglo: ";
    std::cin >> tamano;

    int* arreglo;
    reservarMemoria(arreglo, tamano);

    generarValoresAleatorios(arreglo, tamano);

    std::cout << "Arreglo original:\n";
    mostrarArreglo(arreglo, tamano);

    ordenarDeMayorAMenor(arreglo, tamano);

    std::cout << "Arreglo ordenado de mayor a menor:\n";
    mostrarArreglo(arreglo, tamano);

    liberarMemoria(arreglo);

    return 0;
}