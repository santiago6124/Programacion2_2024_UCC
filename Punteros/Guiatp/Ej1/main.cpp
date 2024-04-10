#include <iostream>
#include "libreria.h"
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int *p;

    cout << "Asignando el puntero a la primera variable:" << endl;
    asignarPuntero(p, a);

    cout << "Asignando el puntero a la segunda variable:" << endl;
    asignarPuntero(p, b);

    return 0;
}