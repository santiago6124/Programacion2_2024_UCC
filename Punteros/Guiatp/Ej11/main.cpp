#include <iostream>
#include "libreria.h"

int main() {
    int numDatos;
    std::cout << "Ingrese el numero de datos: ";
    std::cin >> numDatos;

    float* datos = new float[numDatos];

    std::cout << "Ingrese los datos:\n";
    for (int i = 0; i < numDatos; ++i) {
        std::cout << "Dato " << i + 1 << ": ";
        std::cin >> datos[i];
    }

    float maximo = calcularMaximo(datos, numDatos);
    float minimo = calcularMinimo(datos, numDatos);
    float media = calcularMedia(datos, numDatos);

    std::cout << "El maximo es: " << maximo << std::endl;
    std::cout << "El minimo es: " << minimo << std::endl;
    std::cout << "La media aritmetica es: " << media << std::endl;

    delete[] datos;

    return 0;
}