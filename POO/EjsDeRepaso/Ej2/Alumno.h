#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>

class Alumno {
private:
    std::string claveUCC;
    std::string nombre;
    float nota1;
    float nota2;
    float nota3;

public:
    // Constructor
    Alumno(std::string clave, std::string nombre, float nota1, float nota2, float nota3);

    // Método para calcular la nota final
    float calcularNotaFinal();

    // Método para verificar si el alumno aprobó
    bool aproboAsignatura();
    
    // Método para imprimir la información del alumno
    void imprimirInformacion();
};

#endif // ALUMNO_H
