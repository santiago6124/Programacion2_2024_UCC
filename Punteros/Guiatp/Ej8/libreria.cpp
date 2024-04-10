#include "libreria.h"

int contarVocalesMinusculas(const char* cadena) {
    int contador = 0;
    while (*cadena) {
        char letra = *cadena;
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contador++;
        }
        cadena++;
    }
    return contador;
}
