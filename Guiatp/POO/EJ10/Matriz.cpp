#include "Matriz.h"

// Constructor
Matriz::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    datos = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        datos[i] = new int[columnas];
        for (int j = 0; j < columnas; ++j) {
            datos[i][j] = 0;
        }
    }
}

// Destructor
Matriz::~Matriz() {
    for (int i = 0; i < filas; ++i) {
        delete[] datos[i];
    }
    delete[] datos;
}

// Sobrecarga del operador +
Matriz Matriz::operator+(  Matriz &otra)   {
    if (filas != otra.filas || columnas != otra.columnas) {
        std::cerr << "No se pueden sumar matrices de diferentes dimensiones." << std::endl;
        exit(1);
    }
    Matriz resultado(filas, columnas);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
        }
    }
    return resultado;
}

// Sobrecarga del operador -
Matriz Matriz::operator-(  Matriz &otra)   {
    if (filas != otra.filas || columnas != otra.columnas) {
        std::cerr << "No se pueden restar matrices de diferentes dimensiones." << std::endl;
        exit(1);
    }
    Matriz resultado(filas, columnas);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
        }
    }
    return resultado;
}

// Sobrecarga del operador *
Matriz Matriz::operator*(  Matriz &otra)   {
    if (columnas != otra.filas) {
        std::cerr << "El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz para multiplicación." << std::endl;
        exit(1);
    }
    Matriz resultado(filas, otra.columnas);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < otra.columnas; ++j) {
            for (int k = 0; k < columnas; ++k) {
                resultado.datos[i][j] += datos[i][k] * otra.datos[k][j];
            }
        }
    }
    return resultado;
}

// Sobrecarga del operador ()
int& Matriz::operator()(int fila, int columna) {
    return datos[fila][columna];
}

// Sobrecarga del operador []
int& Matriz::operator[](int indice) {
    return datos[indice][indice];
}

// Método para obtener el número de filas
int Matriz::obtenerFilas()   {
    return filas;
}

// Método para obtener el número de columnas
int Matriz::obtenerColumnas()   {
    return columnas;
}

// Método para imprimir la matriz
void Matriz::imprimir()   {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << datos[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
