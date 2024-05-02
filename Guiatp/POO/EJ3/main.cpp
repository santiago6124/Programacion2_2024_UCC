/*
. Realizar una clase que permita representar un número complejo.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir uno o más constructores para inicializar los datos miembro.
 Definir la sobrecarga de los operadores +, - y * para efectuar estas
operaciones entre complejos.
 Definir una función miembro para calcular el conjugado de un complejo.
 Realizar un programa principal que haga uso de la clase.
*/
#include <iostream>
#include "complejo.h"

int main() {
    // Crear dos números complejos
    Complejo c1(2.0, 3.0);
    Complejo c2(1.0, -2.0);

    // Mostrar los números complejos
    std::cout << "Numero complejo 1: ";
    c1.mostrar();
    std::cout << std::endl;

    std::cout << "Numero complejo 2: ";
    c2.mostrar();
    std::cout << std::endl;

    // Sumar los números complejos
    Complejo suma = c1 + c2;
    std::cout << "Suma: ";
    suma.mostrar();
    std::cout << std::endl;

    // Restar los números complejos
    Complejo resta = c1 - c2;
    std::cout << "Resta: ";
    resta.mostrar();
    std::cout << std::endl;

    // Multiplicar los números complejos
    Complejo producto = c1 * c2;
    std::cout << "Multiplicacion: ";
    producto.mostrar();
    std::cout << std::endl;

    // Calcular el conjugado de un número complejo
    Complejo conjugado = c1.conjugado();
    std::cout << "Conjugado de c1: ";
    conjugado.mostrar();
    std::cout << std::endl;

    return 0;
}
