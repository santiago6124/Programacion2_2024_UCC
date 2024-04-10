#include <iostream>
#include "libreria.h"

int main() {
    int filas, columnas;

    std::cout << "Ingrese el numero de filas: ";
    std::cin >> filas;

    std::cout << "Ingrese el numero de columnas: ";
    std::cin >> columnas;

    double** arreglo;
    reservarMemoria(arreglo, filas, columnas);

    ingresarDatos(arreglo, filas, columnas);

    mostrarContenido(arreglo, filas, columnas);

    liberarMemoria(arreglo, filas);

    return 0;
}