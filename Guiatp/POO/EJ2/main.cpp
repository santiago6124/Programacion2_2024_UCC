/*'
Realizar una clase que permita representar un número racional.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir uno o más constructores para inicializar los datos miembro.
 Definir sobrecargas de los siguientes operadores:
o + suma 2 racionales generando otro como resultado.
o – resta 2 racionales generando otro como resultado.
o ++ incrementa en 1 un racional
o –– decrementa en 1 un racional.
o +=suma un entero a un racional.
o –=suma un entero a un racional
 Definir además una función miembro que implemente la simplificación del
racional.
 Realizar un programa principal que haga uso de la clase
*/

#include <iostream>
#include "racional.h"
using namespace std;

int main() {
    NumeroRacional num1(3, 4), num2(5, 6);

    // Suma
    NumeroRacional suma = num1 + num2;
    suma.simplificar();
    cout << "La suma de los numeros racionales es: " << suma.getNumerador() << "/" << suma.getDenominador() << endl;

    // Resta
    NumeroRacional resta = num1 - num2;
    resta.simplificar();
    cout << "La resta de los numeros racionales es: " << resta.getNumerador() << "/" << resta.getDenominador() << endl;

    // Incremento
    ++num1;
    num1.simplificar();
    cout << "El primer numero racional incrementado en 1 es: " << num1.getNumerador() << "/" << num1.getDenominador() << endl;

    // Decremento
    --num2;
    num2.simplificar();
    cout << "El segundo numero racional decrementado en 1 es: " << num2.getNumerador() << "/" << num2.getDenominador() << endl;

    // Suma compuesta
    num1 += 5;
    num1.simplificar();
    cout << "El primer numero racional incrementado en 5 es: " << num1.getNumerador() << "/" << num1.getDenominador() << endl;

    // Resta compuesta
    num2 -= 3;
    num2.simplificar();
    cout << "El segundo numero racional decrementado en 3 es: " << num2.getNumerador() << "/" << num2.getDenominador() << endl;

    return 0;
}
