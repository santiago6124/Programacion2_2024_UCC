#include "password.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Password::Password() : longitud(8) {}

Password::Password(int longitud) : longitud(longitud) {}

void Password::generarPassword() {
    contrasenia = "";
    srand(time(0)); // Semilla para generar números aleatorios
    for (int i = 0; i < longitud; ++i) {
        char c;
        int tipo = rand() % 3; // 0: mayúscula, 1: minúscula, 2: número
        if (tipo == 0) {
            c = 'A' + rand() % 26; // Generar una mayúscula aleatoria
        } else if (tipo == 1) {
            c = 'a' + rand() % 26; // Generar una minúscula aleatoria
        } else {
            c = '0' + rand() % 10; // Generar un número aleatorio
        }
        contrasenia += c;
    }
}

bool Password::esFuerte() const {
    int mayusculas = 0;
    int minusculas = 0;
    int numeros = 0;
    for (char c : contrasenia) {
        if (isupper(c)) {
            mayusculas++;
        } else if (islower(c)) {
            minusculas++;
        } else if (isdigit(c)) {
            numeros++;
        }
    }
    return (mayusculas > 2 && minusculas > 1 && numeros > 5);
}

void Password::mostrar() const {
    std::cout << "contrasenia: " << contrasenia << std::endl;
    std::cout << "Longitud: " << longitud << std::endl;
}

void Password::cargarLongitud(int longitud) {
    this->longitud = longitud;
}
