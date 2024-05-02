#ifndef ARTICULO_H
#define ARTICULO_H

class Articulo {
private:
    int costoBase;
    float precioPorMayor;
    float precioPorMenor;

public:
    // Constructores
    Articulo();
    Articulo(int costo, float porcentajePorMayor, float porcentajePorMenor);

    // Getters y Setters
    int getCostoBase();
    float getPrecioPorMayor();
    float getPrecioPorMenor();

    void setCostoBase(int costo);

    // Métodos
    void calcularPrecios(float porcentajePorMayor, float porcentajePorMenor);
    void incremento(int incrementoCosto);
};

#endif // ARTICULO_H
