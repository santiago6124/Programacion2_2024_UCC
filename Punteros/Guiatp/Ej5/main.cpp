#include <iostream>
#include "libreria.h"
using namespace std;

int main() {
    const int LONGITUD_MAXIMA = 11;
    char cadena[LONGITUD_MAXIMA];

    cout << "Ingrese una cadena de caracteres (máximo 10 caracteres): ";
    cin.getline(cadena, LONGITUD_MAXIMA);

    char *resultado = convertirMayusculas(cadena);

    cout << "Cadena en mayúsculas: " << resultado << endl;

    return 0;
}
