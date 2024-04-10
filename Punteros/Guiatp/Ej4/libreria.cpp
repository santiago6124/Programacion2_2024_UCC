#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include "libreria.h"
using namespace std;

void rellenarArreglo(int *arreglo, int tamano) {
    srand(time(0));
    for (int i = 0; i < tamano; ++i) {
        arreglo[i] = rand() % 100 + 1; 
    }
}

void mostrarValoresYPunteros(int *arreglo, int tamano) {
    cout << "Valores en el vector y direcciones de memoria:" << endl;
    for (int i = 0; i < tamano; ++i) {
        cout << "Valor: " << *(arreglo + i) << " Dirección: " << (arreglo + i) << endl;
    }
}
