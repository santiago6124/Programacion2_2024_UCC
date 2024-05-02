#include "cronometro.h"
#include <iostream>
using namespace std;    

// Constructor que inicializa a cero el cronómetro
Cronometro::Cronometro() : horas(0), minutos(0), segundos(0) {}

// Método para resetear el cronómetro
void Cronometro::Reset() {
    horas = 0;
    minutos = 0;
    segundos = 0;
}

// Sobrecarga del operador ++
Cronometro& Cronometro::operator++() {
    segundos++;
    if (segundos >= 60) {
        segundos = 0;
        minutos++;
        if (minutos >= 60) {
            minutos = 0;
            horas++;
        }
    }
    return *this;
}

// Función para mostrar el tiempo del cronómetro
void Cronometro::MostrarTiempo() {
    cout << "Tiempo: " << horas << "h " << minutos << "m " << segundos << "s" << endl;
}
