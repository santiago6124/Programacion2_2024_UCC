#include "libreria.h"
#include <iostream>

void reservarMemoria(int*& arreglo, int tamano) {
    arreglo = new int[tamano];
}

void ingresarDatos(int* arreglo, int tamano) {
    std::cout << "Ingrese los datos del arreglo:\n";
    for (int i = 0; i < tamano; ++i) {
        std::cout << "Ingrese el elemento " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }
}

void mostrarContenidoVectorial(int* arreglo, int tamano) {
    std::cout << "Mostrando contenido del arreglo usando notacion vectorial:\n";
    for (int i = 0; i < tamano; ++i) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}

void mostrarContenidoPunteros(int* arreglo, int tamano) {
    std::cout << "Mostrando contenido del arreglo usando aritmetica de punteros:\n";
    for (int i = 0; i < tamano; ++i) {
        std::cout << *(arreglo + i) << " ";
    }
    std::cout << std::endl;
}

void liberarMemoria(int*& arreglo) {
    delete[] arreglo;
    arreglo = nullptr;
}
