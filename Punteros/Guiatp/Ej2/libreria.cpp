#include <iostream>
#include "libreria.h"
using namespace std;

void imprimirDirecciones(int *ptr) {
    cout << "Direcciones de memoria de los elementos del arreglo:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento " << i+1 << ": " << ptr + i << endl;
    }
}
