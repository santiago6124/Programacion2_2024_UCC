#include <string>
#include <iostream>
#include <ctime>
#include "Reloj.h"

class Temperatura {
private:
    double temp;
    char escala;

public:

    int getTemp();


    void setTemp(double temp);
    void calcularTemp(double temp, char escala);
    void mostrarTemp(char escala);
    void sumarTemp(double temp);
};