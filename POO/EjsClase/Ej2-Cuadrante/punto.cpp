#include <iostream>
#include "punto.h"

Triangulo::Triangulo() {
    lado1 = lado2 = lado3 = 0;
}

void Triangulo::inicializar(int a, int b, int c) {
    lado1 = a;
    lado2 = b;
    lado3 = c;
}

void Triangulo::imprimirLadoMayor() {
    int mayor = lado1;
    if (lado2 > mayor)
        mayor = lado2;
    if (lado3 > mayor)
        mayor = lado3;

    std::cout << "El lado mayor es: " << mayor << std::endl;
}

void Triangulo::esEquilatero() {
    if (lado1 == lado2 && lado2 == lado3)
        std::cout << "El triángulo es equilátero." << std::endl;
    else
        std::cout << "El triángulo no es equilátero." << std::endl;
}
