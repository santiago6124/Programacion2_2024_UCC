#include <iostream>
#include "libreria.h"
using namespace std;

void imprimirDiferenciaPunteros(int *ptr_inicio, int *ptr_final) {
    cout << "Diferencia entre los punteros: " << ptr_final - ptr_inicio << endl;
}
