#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <set>
#include <iostream>

class Conjunto {
private:
    std::set<int> elementos;
    int tamanoMaximo;

public:
    // Constructor
    Conjunto(int tamano);
    
    // Destructor
    ~Conjunto();

    // Métodos
    void agregar(int elemento);
    void eliminar(int elemento);
    void mostrar() ;

    // Sobrecargas de operadores
    Conjunto operator+( Conjunto& otro) ;
    Conjunto operator*( Conjunto& otro) ;
    Conjunto operator-( Conjunto& otro) ;
    Conjunto& operator=( Conjunto& otro);
};

#endif // CONJUNTO_H
