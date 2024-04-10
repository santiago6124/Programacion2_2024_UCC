#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo {
private:
    int lado1, lado2, lado3;
public:
    Triangulo();
    void inicializar(int a, int b, int c);
    void imprimirLadoMayor();
    void esEquilatero();
};

#endif
