#include "libreria.h"

float calcularMaximo(float* datos, int numDatos) {
    float maximo = datos[0];
    for (int i = 1; i < numDatos; ++i) {
        if (datos[i] > maximo) {
            maximo = datos[i];
        }
    }
    return maximo;
}

float calcularMinimo(float* datos, int numDatos) {
    float minimo = datos[0];
    for (int i = 1; i < numDatos; ++i) {
        if (datos[i] < minimo) {
            minimo = datos[i];
        }
    }
    return minimo;
}

float calcularMedia(float* datos, int numDatos) {
    float suma = 0.0f;
    for (int i = 0; i < numDatos; ++i) {
        suma += datos[i];
    }
    return suma / numDatos;
}