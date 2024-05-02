#include <iostream>
#include "Rectangulo.h"

int main() {
    float longitud1, ancho1, longitud2, ancho2;
    std::cout << "Ingrese la longitud del primer rectángulo: ";
    std::cin >> longitud1;
    std::cout << "Ingrese el ancho del primer rectángulo: ";
    std::cin >> ancho1;

    std::cout << "Ingrese la longitud del segundo rectángulo: ";
    std::cin >> longitud2;
    std::cout << "Ingrese el ancho del segundo rectángulo: ";
    std::cin >> ancho2;

    Rectangulo rectangulo1(longitud1, ancho1);
    Rectangulo rectangulo2(longitud2, ancho2);

    int opcion;
    do {
        std::cout << "\nMenú:\n";
        std::cout << "1) Perímetro del rectángulo 1\n";
        std::cout << "2) Perímetro del rectángulo 2\n";
        std::cout << "3) Área del rectángulo 1\n";
        std::cout << "4) Área del rectángulo 2\n";
        std::cout << "5) Mayor área\n";
        std::cout << "6) Salir\n";
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "\n Perímetro del rectángulo 1: " << rectangulo1.calcularPerimetro() << std::endl;
                break;
            case 2:
                std::cout << "\n Perímetro del rectángulo 2: " << rectangulo2.calcularPerimetro() << std::endl;
                break;
            case 3:
                std::cout << "\n Área del rectángulo 1: " << rectangulo1.calcularArea() << std::endl;
                break;
            case 4:
                std::cout << "\n Área del rectángulo 2: " << rectangulo2.calcularArea() << std::endl;
                break;
            case 5:
                if (rectangulo1.calcularArea() > rectangulo2.calcularArea()) {
                    std::cout << "\n El rectángulo 1 tiene mayor área." << std::endl;
                } else if (rectangulo2.calcularArea() > rectangulo1.calcularArea()) {
                    std::cout << "\n El rectángulo 2 tiene mayor área." << std::endl;
                } else {
                    std::cout << "\n Ambos rectángulos tienen la misma área." << std::endl;
                }
                break;
            case 6:
                std::cout << "\n Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "\n Opción inválida. Por favor, ingrese una opción válida." << std::endl;
        }
    } while (opcion != 6);

    return 0;
}
