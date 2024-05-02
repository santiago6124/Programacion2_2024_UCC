
#include <iostream>
#include "Articulo.h"

int main() {
    // Ejemplo de uso
    Articulo articulo(100, 0.15, 0.3); // costo base, porcentaje por mayor, porcentaje por menor
    std::cout << "Precio al por mayor: $" << articulo.getPrecioPorMayor() << std::endl;
    std::cout << "Precio al por menor: $" << articulo.getPrecioPorMenor() << std::endl;

    articulo.incremento(20); // Incremento de $20 al costo base
    std::cout << "Nuevo costo base: $" << articulo.getCostoBase() << std::endl;
    std::cout << "Nuevo precio al por mayor: $" << articulo.getPrecioPorMayor() << std::endl;
    std::cout << "Nuevo precio al por menor: $" << articulo.getPrecioPorMenor() << std::endl;

    return 0;
}
