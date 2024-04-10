#include <cstring>
#include <cctype>
#include "libreria.h"

char* convertirMayusculas(char *cadena) {
    int longitud = std::strlen(cadena);

    for (int i = 0; i < longitud; ++i) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] = std::toupper(cadena[i]);
        }
    }

    return cadena;
}
