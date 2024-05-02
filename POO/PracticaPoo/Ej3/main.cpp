#include <iostream>
#include "Raices.h"
int main() {

    int a,b,c;


    std::cout << "Ingrese a ";
    std::cin >> a;

    std::cout << "Ingrese b ";
    std::cin >> b;

    std::cout << "Ingrese c ";
    std::cin >> c;

    Raices ecuacion(a,b,c);
    // Mostrar información y resultados
    std::cout << "Discriminante: " << ecuacion.getDiscriminante() << std::endl;
    std::cout << "Tiene Raices: " << ecuacion.TieneRaices() << std::endl;
    std::cout << "Tiene Raiz: " << ecuacion.tieneRaiz() << std::endl;
    std::cout << "Raiz: " << ecuacion.obtenerRaiz() << std::endl;
    auto raices = ecuacion.obtenerRaices();
    std::cout << "Raiz 1: " << raices.first << std::endl;
    std::cout << "Raiz 2: " << raices.second << std::endl;


    return 0;
}
