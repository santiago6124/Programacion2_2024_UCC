#ifndef CUADRADO_H
#define CUADRADO_H

class Cuadrado {
private:
    double lado;
public:
    void cargarLado(double lado);
    double calcularPerimetro();
    double calcularSuperficie();
};

#endif
