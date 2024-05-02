#include <iostream>
#include "Rectangulo.h"

int main() {
    float longitud, ancho;
    std::cout << "Ingrese la longitud del rectángulo: ";
    std::cin >> longitud;
    std::cout << "Ingrese el ancho del rectángulo: ";
    std::cin >> ancho;

    Rectangulo rectangulo(longitud, ancho);

    std::cout << "El área del rectángulo es: " << rectangulo.calcularArea() << std::endl;
    std::cout << "El perímetro del rectángulo es: " << rectangulo.calcularPerimetro() << std::endl;

    return 0;
}
