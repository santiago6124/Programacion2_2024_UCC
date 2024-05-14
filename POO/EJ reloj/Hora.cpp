#include "Hora.h"
#include <unistd.h>
// #include <windows.h>

int Hora::getHH() {
    return HH;
}
int Hora::getMM() {
    return MM;
}
int Hora::getSS() {
    return SS;
}

void Hora::setHora(int HH, int MM, int SS) {
    this->HH = HH;
    this->MM = MM;
    this->SS = SS;
}

void Hora::incrementarHora() {
    sleep(1);
    //Sleep(1000);
    SS++;
    if (SS == 60) {
        SS = 0;
        MM++;
        if (MM == 60) {
            MM = 0;
            HH++;
            if (HH == 24) {
                HH = 0;
            }
        }
    }
}