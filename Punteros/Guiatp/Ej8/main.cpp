#include <iostream>
#include "libreria.h"

int main() {
    const int MAX_TAMANO = 51;
    char cadena[MAX_TAMANO];

    std::cout << "Ingrese una cadena de caracteres (maximo 50 caracteres): ";
    std::cin.getline(cadena, MAX_TAMANO);

    int vocalesMinusculas = contarVocalesMinusculas(cadena);

    std::cout << "El numero de vocales minusculas en la cadena es: " << vocalesMinusculas << std::endl;

    return 0;
}
