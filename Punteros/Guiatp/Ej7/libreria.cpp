#include "libreria.h"

void copia(const char* origen, char* destino) {
    while (*origen) {
        *destino = *origen;
        origen++;
        destino++;
    }
    *destino = '\0';
}
