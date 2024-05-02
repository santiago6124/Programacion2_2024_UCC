/*
Realizar una clase que permita representar un punto en coordenadas
cartesianas.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa el punto en el origen de coordenadas.
 Definir la sobrecarga del operador ++ que incrementa en 1 ambas
coordenadas.
 Idem para el operador --.
 Definir 2 sobrecargas para el operados +, una para sumar 2 puntos entre si y
otra para sumar a un punto un valor entero.
 Idem para el operador -.
 Definir la/las función/es miembro para obtener la conversión en coordenadas
polares.
 Realizar un programa principal que haga uso de la clase.
*/
#include <iostream>
#include "punto.h"

int main() {
    Punto punto1;
    punto1.mostrarCoordenadas();
    punto1.obtenerCoordenadasPolares();

    ++punto1;
    punto1.mostrarCoordenadas();

    Punto punto2(3, 4);
    punto2.mostrarCoordenadas();

    Punto sumaPuntos = punto1 + punto2;
    sumaPuntos.mostrarCoordenadas();

    Punto sumaEntero = punto1 + 5;
    sumaEntero.mostrarCoordenadas();

    Punto restaPuntos = punto1 - punto2;
    restaPuntos.mostrarCoordenadas();

    Punto restaEntero = punto1 - 2;
    restaEntero.mostrarCoordenadas();

    punto1.obtenerCoordenadasPolares();

    return 0;
}
