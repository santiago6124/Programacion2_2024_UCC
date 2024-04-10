#include "libreria.h"

int main() {
    int arreglo[5] = {1, 2, 3, 4, 5}; 
    int *ptr_inicio = arreglo;
    int *ptr_final = arreglo + 4; 

    imprimirDiferenciaPunteros(ptr_inicio, ptr_final);

    return 0;
}
