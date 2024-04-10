#include "libreria.h"

int main() {
    const int TAMANO = 15;
    int arreglo[TAMANO];

    rellenarArreglo(arreglo, TAMANO);
    mostrarValoresYPunteros(arreglo, TAMANO);

    return 0;
}
