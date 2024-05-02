#include "Conjunto.h"
/*
Crear una clase conjunto que represente un conjunto de números enteros. El
conjunto tiene un tamaño máximo y un cierto número de elementos. Considerar
que en un conjunto no puede haber elementos repetidos. Definir los constructores
que considere necesario, destructor y sobrecarga del operador de asignación.
Definir los siguientes métodos y sobrecargas:
 Agregar: inserta un elemento al conjunto.
 Eliminar: elimina un elemento del conjunto.
 Mostrar: Imprimir los elementos del conjunto.
 Sobrecargar el operador + para realizar la Union de conjuntos.
 Sobrecargar el operador * para realizar la intersección de conjuntos
 Sobrecargar el operador - para realizar la diferencia de conjuntos.
*/

int main() {
    // Crear dos conjuntos
    Conjunto conjunto1(5);
    Conjunto conjunto2(5);

    // Agregar elementos a los conjuntos
    conjunto1.agregar(1);
    conjunto1.agregar(2);
    conjunto1.agregar(3);
    conjunto1.agregar(4);
    conjunto1.agregar(5);

    conjunto2.agregar(4);
    conjunto2.agregar(5);
    conjunto2.agregar(6);
    conjunto2.agregar(7);
    conjunto2.agregar(8);

    // Mostrar los conjuntos
    std::cout << "Conjunto 1: ";
    conjunto1.mostrar();
    std::cout << "Conjunto 2: ";
    conjunto2.mostrar();

    // Realizar operaciones entre los conjuntos
    Conjunto unionConjunto = conjunto1 + conjunto2;
    Conjunto interseccionConjunto = conjunto1 * conjunto2;
    Conjunto diferenciaConjunto = conjunto1 - conjunto2;

    // Mostrar los resultados de las operaciones
    std::cout << "Unión de conjuntos: ";
    unionConjunto.mostrar();
    std::cout << "Intersección de conjuntos: ";
    interseccionConjunto.mostrar();
    std::cout << "Diferencia de conjuntos (conjunto1 - conjunto2): ";
    diferenciaConjunto.mostrar();

    return 0;
}
