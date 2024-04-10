#include <iostream>
#include "cuadrado.h"

int main() {
    Cuadrado cuadrado;
    double lado;
    
    std::cout << "Ingrese el valor del lado del cuadrado: ";
    std::cin >> lado;
    
    cuadrado.cargarLado(lado);
    
    std::cout << "El perímetro del cuadrado es: " << cuadrado.calcularPerimetro() << std::endl;
    std::cout << "La superficie del cuadrado es: " << cuadrado.calcularSuperficie() << std::endl;
    
    return 0;
}
