#ifndef HORA_H
#define HORA_H
class Hora {
private:
    int HH;
    int MM;
    int SS;

public:
    int getHH();
    int getMM();
    int getSS();

    void setHora(int HH, int MM, int SS);
    void incrementarHora();

};
#endif