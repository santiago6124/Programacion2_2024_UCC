#ifndef RAICES_H
#define RAICES_H

#include <string>

class Raices {
private:
    int a,b,c;


public:
    Raices(int a, int b, int c);
    

    int getA() const;
    void setA(int a);
    int getB() const;
    void setB(int b);
    int getC() const;
    void setC(int c);

    double getDiscriminante();
    bool TieneRaices();
    bool tieneRaiz();
    double obtenerRaiz();
    std::pair<double, double> obtenerRaices();
};


#endif // RAICES_H

