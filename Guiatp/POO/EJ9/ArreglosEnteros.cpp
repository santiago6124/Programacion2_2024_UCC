#include "ArreglosEnteros.h"

// Constructor
ArregloEnteros::ArregloEnteros(int size) : tamano(size) {
    datos = new int[size];
    for (int i = 0; i < size; ++i) {
        datos[i] = 0;
    }
}

// Destructor
ArregloEnteros::~ArregloEnteros() {
    delete[] datos;
}

// Sobrecarga del operador +
ArregloEnteros ArregloEnteros::operator+(  ArregloEnteros &otro)   {
    ArregloEnteros resultado(tamano);
    for (int i = 0; i < tamano; ++i) {
        resultado.datos[i] = datos[i] + otro.datos[i];
    }
    return resultado;
}

// Sobrecarga del operador -
ArregloEnteros ArregloEnteros::operator-(  ArregloEnteros &otro)   {
    ArregloEnteros resultado(tamano);
    for (int i = 0; i < tamano; ++i) {
        resultado.datos[i] = datos[i] - otro.datos[i];
    }
    return resultado;
}

// Sobrecarga del operador *
int ArregloEnteros::operator*(  ArregloEnteros &otro)   {
    int producto = 0;
    for (int i = 0; i < tamano; ++i) {
        producto += datos[i] * otro.datos[i];
    }
    return producto;
}

// Sobrecarga del operador []
int& ArregloEnteros::operator[](int index) {
    return datos[index];
}

// Método para obtener el tamaño del arreglo
int ArregloEnteros::obtenerTamano()   {
    return tamano;
}
