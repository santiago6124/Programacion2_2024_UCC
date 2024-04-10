#include <iostream>
#include "libreria.h"

int main() {
    const int MAX_TAMANO = 51;
    char cadenaOrigen[MAX_TAMANO];
    char cadenaDestino[MAX_TAMANO];

    std::cout << "Ingrese una cadena de caracteres (maximo 50 caracteres): ";
    std::cin.getline(cadenaOrigen, MAX_TAMANO);

    copia(cadenaOrigen, cadenaDestino);

    std::cout << "La cadena copiada es: " << cadenaDestino << std::endl;

    return 0;
}
