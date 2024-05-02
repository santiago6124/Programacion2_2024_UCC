#include <iostream>
#include "libreria.h"

// Definición de la función para intercambiar los valores de dos variables
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
