#ifndef CALCU_H
#define CALCU_H

class Calcu {
private:
    int valor1, valor2;
public:
    void cargarValores(int v1, int v2);
    int calcularSuma();
    int calcularResta();
    int calcularMultiplicacion();
    double calcularDivision();
};

#endif
