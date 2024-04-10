#include <iostream>
#include "libreria.h"
using namespace std;

void asignarPuntero(int *ptr, int &variable) {
    ptr = &variable;
    cout << "Dirección de memoria apuntada por el puntero: " << ptr << endl;
    cout << "Contenido de la dirección apuntada por el puntero: " << *ptr << endl;
}
