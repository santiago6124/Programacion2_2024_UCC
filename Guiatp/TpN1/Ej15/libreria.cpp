#include <iostream>
#include "libreria.h"

void invertirVector(std::vector<int>& vec) {
    int inicio = 0;
    int fin = vec.size() - 1;

    while (inicio < fin) {
        // Intercambiar los elementos en las posiciones inicio y fin
        int temp = vec[inicio];
        vec[inicio] = vec[fin];
        vec[fin] = temp;

        // Mover los punteros de inicio y fin hacia el centro del vector
        inicio++;
        fin--;
    }
}