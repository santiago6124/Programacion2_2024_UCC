#include <iostream>
#include "libreria.h"

int main() {
    int tamano;
    std::cout << "Ingrese el tamano del arreglo: ";
    std::cin >> tamano;

    int* arreglo;
    reservarMemoria(arreglo, tamano);

    ingresarDatos(arreglo, tamano);

    mostrarContenidoVectorial(arreglo, tamano);
    mostrarContenidoPunteros(arreglo, tamano);

    liberarMemoria(arreglo);

    return 0;
}
