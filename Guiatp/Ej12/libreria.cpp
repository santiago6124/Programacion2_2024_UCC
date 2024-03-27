#include <iostream>
#include "libreria.h"
#include <algorithm>
// Definición de la función para ordenar un vector de mayor a menor
void ordenarVector(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), std::greater<int>());
}
