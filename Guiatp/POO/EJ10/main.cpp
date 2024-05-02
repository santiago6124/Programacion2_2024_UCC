#include <iostream>
#include "Matriz.h"
/*
 Construir la clase Matriz que permita representar un arreglo bidimensional de
enteros. Obtener las siguientes sobrecargas:
 Operador + para sumar dos Matrices.
 Operador – para restar dos Matrices.
 Operador * para calcular el producto de 2 Matrices.
 Operador () para subindicar cada elemento de la matriz.
 Operador [] para subindicar los elementos de la diagonal principal
Realizar un programa principal que haga uso de la clase.
*/
int main() {
    // Pedir al usuario las dimensiones de las matrices
    int filas, columnas;
    std::cout << "Ingrese el número de filas de las matrices: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas de las matrices: ";
    std::cin >> columnas;

    // Crear dos matrices con las dimensiones ingresadas por el usuario
    Matriz matriz1(filas, columnas);
    Matriz matriz2(filas, columnas);

    // Pedir al usuario que ingrese los valores de la primera matriz
    std::cout << "Ingrese los valores de la primera matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el valor para la posición (" << i << ", " << j << "): ";
            std::cin >> matriz1(i, j);
        }
    }

    // Pedir al usuario que ingrese los valores de la segunda matriz
    std::cout << "Ingrese los valores de la segunda matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el valor para la posición (" << i << ", " << j << "): ";
            std::cin >> matriz2(i, j);
        }
    }

    // Sumar las matrices
    Matriz suma = matriz1 + matriz2;

    // Restar las matrices
    Matriz resta = matriz1 - matriz2;

    // Multiplicar las matrices
    Matriz producto = matriz1 * matriz2;

// Mostrar los resultados
    std::cout << "Matriz suma:" << std::endl;
    suma.imprimir();
    std::cout << std::endl;

    std::cout << "Matriz resta:" << std::endl;
    resta.imprimir();
    std::cout << std::endl;

    std::cout << "Matriz producto:" << std::endl;
    producto.imprimir();
    std::cout << std::endl;

    // Acceder a los elementos de la diagonal principal
    std::cout << "Elementos de la diagonal principal de la matriz 1: ";
    for (int i = 0; i < matriz1.obtenerFilas(); ++i) {
        std::cout << matriz1[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}