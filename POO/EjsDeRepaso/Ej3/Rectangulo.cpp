#include "Rectangulo.h"

Rectangulo::Rectangulo(float longitud, float ancho)
    : longitud(longitud), ancho(ancho) {}

float Rectangulo::calcularArea() {
    return longitud * ancho;
}

float Rectangulo::calcularPerimetro() {
    return 2 * (longitud + ancho);
}
    