#ifndef ARREGLOENTEROS_H
#define ARREGLOENTEROS_H

class ArregloEnteros {
private:
    int *datos;
    int tamano;

public:
    // Constructor
    ArregloEnteros(int size);

    // Destructor
    ~ArregloEnteros();

    // Sobrecarga del operador +
    ArregloEnteros operator+(  ArregloEnteros &otro)  ;

    // Sobrecarga del operador -
    ArregloEnteros operator-(  ArregloEnteros &otro)  ;

    // Sobrecarga del operador *
    int operator*(  ArregloEnteros &otro)  ;

    // Sobrecarga del operador []
    int& operator[](int index);

    // Método para obtener el tamaño del arreglo
    int obtenerTamano()  ;
};

#endif // ARREGLOENTEROS_H
