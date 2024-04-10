#include <iostream>
#include "punto.h"

void Punto::cargarPunto(double xi, double yi) {
    xi = x;
    yi = y;
}

void Punto::imprimirCuadrante() {
    if (x > 0 && y > 0)
        std::cout << "El punto se encuentra en el primer cuadrante." << std::endl;
    else if (x < 0 && y > 0)
        std::cout << "El punto se encuentra en el segundo cuadrante." << std::endl;
    else if (x < 0 && y < 0)
        std::cout << "El punto se encuentra en el tercer cuadrante." << std::endl;
    else if (x > 0 && y < 0)
        std::cout << "El punto se encuentra en el cuarto cuadrante." << std::endl;
    else if (x == 0 && y != 0)
        std::cout << "El punto se encuentra sobre el eje y." << std::endl;
    else if (x != 0 && y == 0)
        std::cout << "El punto se encuentra sobre el eje x." << std::endl;
    else
        std::cout << "El punto se encuentra en el origen." << std::endl;
}
