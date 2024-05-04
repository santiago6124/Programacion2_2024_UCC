#include <iostream>
#include "libreria.h"

int main(int argc, char* argv[]) {
    // Llamadas a las funciones de la librería
    int x = std::stoi(argv[1]);
    int y = std::stoi(argv[2]);
    int d = std::stoi(argv[3]);

int result = saltos(x, y, d);
    std::cout << "Cantidad de saltos: " << result << std::endl;

    return 0;
}