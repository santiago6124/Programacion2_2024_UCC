#include <iostream>
#include "libreria.h"
using namespace std;

int main() {
    const int MAX_LONGITUD = 51; 
    char cadena[MAX_LONGITUD];

    cout << "Ingrese una cadena de caracteres (máximo 50 elementos): ";
    cin.getline(cadena, MAX_LONGITUD);

    invertirCadena(cadena);

    cout << "Cadena invertida: " << cadena << endl;

    return 0;
}
