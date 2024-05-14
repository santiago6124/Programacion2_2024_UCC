#ifndef ALARMA_H
#define ALARMA_H
#include <iostream>

class Alarma {
private:
    int HH;
    int MM;
    int SS;

public:
    void setAlarma(int HH, int MM, int SS);
    int getHH();
    int getMM();
    int getSS();
};
#endif