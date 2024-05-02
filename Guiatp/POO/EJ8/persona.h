#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
#include <ctime>

class Persona {
private:
    std::string nombre;
    std::string fechaNacimiento;
    std::string DNI;
    char sexo;
    double peso;
    double altura;

public:
    // Constructores
    Persona();
    Persona(  std::string &nombre,   std::string &fechaNacimiento, char sexo, double peso = 0, double altura = 0);
    Persona(  std::string &nombre,   std::string &fechaNacimiento,   std::string &DNI, char sexo, double peso, double altura);

    // Métodos para carga y muestra de los datos miembro
    void cargarDatos();
    void mostrarDatos()  ;

    // Métodos para calcular el IMC, la edad y si es mayor de edad
    double calcularIMC()  ;
    int calcularEdad()  ;
    bool esMayorDeEdad()  ;
};

#endif // PERSONA_H
