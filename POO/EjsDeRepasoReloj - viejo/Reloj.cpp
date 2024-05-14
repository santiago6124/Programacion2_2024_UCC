#include "Reloj.h"

int Reloj::getHH() {
    return HH;
}
int Reloj::getMM() {
    return MM;
}
int Reloj::getSS() {
    return SS;
}

void Reloj::setHora(int HH, int MM, int SS) {
    this->HH = HH;
    this->MM = MM;
    this->SS = SS;
}

void Reloj::setAlarma(int HHA, int MMA, int SSA) {
    this->HHA = HHA;
    this->MMA = MMA;
    this->SSA = SSA;
}

bool Reloj::checkAlarma() {
    if (HH == HHA && MM == MMA && SS == SSA) {
    return true;
    }
    return false;
}

void Reloj::incrementarHora() {
    sleep(1);
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


