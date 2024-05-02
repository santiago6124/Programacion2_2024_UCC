#include <iostream>
#include "libreria.h"

// Definición de la función para buscar un número en un arreglo
bool buscarNumero(const std::vector<int>& arreglo, int numero, int& ubicacion) {
    for (size_t i = 0; i < arreglo.size(); ++i) {
        if (arreglo[i] == numero) {
            ubicacion = i;
            return true;
        }
    }
    return false;
}
