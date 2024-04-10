#include <cstring>
#include "libreria.h"

void invertirCadena(char *cadena) {
    int longitud = std::strlen(cadena);
    char temp;

    
    for (int i = 0; i < longitud / 2; ++i) {
        temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }
}
