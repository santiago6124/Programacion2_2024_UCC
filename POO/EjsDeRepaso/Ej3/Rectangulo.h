#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo {
private:
    float longitud;
    float ancho;

public:
    // Constructor
    Rectangulo(float longitud, float ancho);

    // Métodos para calcular el área y el perímetro
    float calcularArea();
    float calcularPerimetro();
};

#endif // RECTANGULO_H
