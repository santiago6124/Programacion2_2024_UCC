#include <iostream>
#include "punto.h"

int main() {
    Punto punto;
    double x, y;
    
    std::cout << "Ingrese el valor de x: ";
    std::cin >> x;
    std::cout << "Ingrese el valor de y: ";
    std::cin >> y;
    
    punto.cargarPunto(x, y);
    punto.imprimirCuadrante();
    
    return 0;
}
