/*
. Realizar una clase que permita representar un cronómetro. Dicho cronómetro
consta de horas, minutos y segundos. Las horas no tienen límite en valor
mientras que los minutos y segundos llegan al máximo hasta 59.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa a cero el cronómetro.
 Definir un método Reset que permita llevar a cero el cronómetro.
 Definir la sobrecarga del operador ++ para producir el incremento del
cronómetro en un segundo.
 Realizar un programa principal que haga uso de la clase.
*/
#include <iostream>
#include "cronometro.h"

int main() {
    // Crear un objeto de la clase Cronometro
    Cronometro cronometro;

    // Incrementar el cronómetro en un segundo cinco veces
    for (int i = 0; i < 5; ++i) {
        ++cronometro;
    }

    // Mostrar el tiempo del cronómetro
    cronometro.MostrarTiempo();

    // Resetear el cronómetro
    cronometro.Reset();

    // Mostrar el tiempo después de resetear
    cronometro.MostrarTiempo();

    return 0;
}
