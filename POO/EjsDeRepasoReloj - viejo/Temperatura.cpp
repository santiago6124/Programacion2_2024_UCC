#include "Temperatura.h"

int Temperatura::getTemp() {
    return temp;
}
void Temperatura::setTemp(double temp) {
    this->temp = temp;
}
void Temperatura::calcularTemp(double temp, char escala) {
    if (escala == 'C') {
        this->temp = temp;
    } else if (escala == 'F') {
        this->temp = (temp + 32) * 9 / 5;
    } else if (escala == 'K') {
        this->temp = temp + 273.15;
    }
}
void Temperatura::mostrarTemp(char escala) {
    if (escala == 'C') {
        std::cout << "La temperatura es de " << temp << " grados Celsius" << std::endl;
    } else if (escala == 'F') {
        std::cout << "La temperatura es de " << temp << " grados Fahrenheit" << std::endl;
    } else if (escala == 'K') {
        std::cout << "La temperatura es de " << temp << " grados Kelvin" << std::endl;
    }
}



