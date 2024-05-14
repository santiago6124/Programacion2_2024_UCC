#ifndef TEMPERATURA_H
#define TEMPERATURA_H
#include <iostream>

class Temperatura {
private:
    double tempC, tempF, tempK;
public:
    double getTempC();
    void setTempC(double temp);
    double getTempF();
    void setTempF(double temp);
    double getTempK();
    void setTempK(double temp);
    void calcularTemp(double temp);
    void tomarTemp();
};
#endif