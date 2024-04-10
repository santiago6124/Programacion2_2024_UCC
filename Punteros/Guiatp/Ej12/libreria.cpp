#include "libreria.h"
#include <iostream>

void reservarMemoria(double**& arreglo, int filas, int columnas) {
    arreglo = new double*[filas];
    for (int i = 0; i < filas; ++i) {
        arreglo[i] = new double[columnas];
    }
}

void ingresarDatos(double** arreglo, int filas, int columnas) {
    std::cout << "Ingrese los datos:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            std::cin >> arreglo[i][j];
        }
    }
}

void mostrarContenido(double** arreglo, int filas, int columnas) {
    std::cout << "Contenido del arreglo:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << arreglo[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void liberarMemoria(double**& arreglo, int filas) {
    for (int i = 0; i < filas; ++i) {
        delete[] arreglo[i];
    }
    delete[] arreglo;
    arreglo = nullptr;
}