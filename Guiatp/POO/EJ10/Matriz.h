#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>

class Matriz {
private:
    int **datos;
    int filas;
    int columnas;

public:
    // Constructor
    Matriz(int filas, int columnas);

    // Destructor
    ~Matriz();

    // Sobrecarga del operador +
    Matriz operator+(  Matriz &otra)  ;

    // Sobrecarga del operador -
    Matriz operator-(  Matriz &otra)  ;

    // Sobrecarga del operador *
    Matriz operator*(  Matriz &otra)  ;

    // Sobrecarga del operador ()
    int& operator()(int fila, int columna);

    // Sobrecarga del operador []
    int& operator[](int indice);

    // Método para obtener el número de filas
    int obtenerFilas()  ;

    // Método para obtener el número de columnas
    int obtenerColumnas()  ;

    // Método para imprimir la matriz
    void imprimir()  ;
};

#endif // MATRIZ_H
