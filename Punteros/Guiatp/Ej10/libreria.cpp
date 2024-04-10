#include "libreria.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void reservarMemoria(int*& arreglo, int tamano) {
    arreglo = new int[tamano];
}

void generarValoresAleatorios(int* arreglo, int tamano) {
    std::srand(std::time(nullptr));
    for (int i = 0; i < tamano; ++i) {
        arreglo[i] = std::rand() % 101;
    }
}

void ordenarDeMayorAMenor(int* arreglo, int tamano) {
    std::sort(arreglo, arreglo + tamano, std::greater<int>());
}

void mostrarArreglo(int* arreglo, int tamano) {
    for (int i = 0; i < tamano; ++i) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}

void liberarMemoria(int*& arreglo) {
    delete[] arreglo;
    arreglo = nullptr;
}