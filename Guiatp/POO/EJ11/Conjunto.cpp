#include "Conjunto.h"
#include <algorithm>

//  Constructor
Conjunto::Conjunto(int tamano) : tamanoMaximo(tamano) {}

// Destructor
Conjunto::~Conjunto() {}

// Método para agregar un elemento al conjunto
void Conjunto::agregar(int elemento) {
    if (elementos.size() < tamanoMaximo) {
        elementos.insert(elemento);
    }
}

// Método para eliminar un elemento del conjunto
void Conjunto::eliminar(int elemento) {
    elementos.erase(elemento);
}

// Método para mostrar los elementos del conjunto
void Conjunto::mostrar()   {
    std::cout << "Conjunto: ";
    for (int elemento : elementos) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}

// Sobrecarga del operador de unión de conjuntos
Conjunto Conjunto::operator+(  Conjunto& otro)   {
    Conjunto unionConjunto(tamanoMaximo);
    std::set_union(elementos.begin(), elementos.end(),
                   otro.elementos.begin(), otro.elementos.end(),
                   std::inserter(unionConjunto.elementos, unionConjunto.elementos.begin()));
    return unionConjunto;
}

// Sobrecarga del operador de intersección de conjuntos
Conjunto Conjunto::operator*(  Conjunto& otro)   {
    Conjunto interseccionConjunto(tamanoMaximo);
    std::set_intersection(elementos.begin(), elementos.end(),
                          otro.elementos.begin(), otro.elementos.end(),
                          std::inserter(interseccionConjunto.elementos, interseccionConjunto.elementos.begin()));
    return interseccionConjunto;
}

// Sobrecarga del operador de diferencia de conjuntos
Conjunto Conjunto::operator-(  Conjunto& otro)   {
    Conjunto diferenciaConjunto(tamanoMaximo);
    std::set_difference(elementos.begin(), elementos.end(),
                        otro.elementos.begin(), otro.elementos.end(),
                        std::inserter(diferenciaConjunto.elementos, diferenciaConjunto.elementos.begin()));
    return diferenciaConjunto;
}

// Sobrecarga del operador de asignación
Conjunto& Conjunto::operator=(  Conjunto& otro) {
    if (this != &otro) {
        elementos = otro.elementos;
        tamanoMaximo = otro.tamanoMaximo;
    }
    return *this;
}
