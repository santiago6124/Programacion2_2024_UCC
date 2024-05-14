#include <string>
#include <iostream>
#include <ctime>
//#include "Temperatura.h"

class Reloj {
private:
    int HH;
    int MM;
    int SS;
    //Temperatura temp;
    int HHA;
    int MMA;
    int SSA;

public:

    int getHH();
    int getMM();
    int getSS();

    void setHora(int HH, int MM, int SS);
    void setAlarma(int HHA, int MMA, int SSA);
    bool checkAlarma(); 
    void incrementarHora();

};