#include <iostream>
#include "Persona.h"
int main() {
        std::string nombre;
    int edad;
    char sexo;
    double peso, altura;

    std::cout << "Ingrese el nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese la edad: ";
    std::cin >> edad;

    std::cout << "Ingrese el sexo (H/M): ";
    std::cin >> sexo;

    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;

    std::cout << "Ingrese la altura (m): ";
    std::cin >> altura;
    Persona persona1(nombre, edad);
    Persona persona2("María López", 25);
    Persona persona3;

    // couts
    mostrarInformacionPersona(persona1);
    std::cout << "IMC: " << persona1.calcularIMC() << std::endl;
    std::cout << "Es mayor de edad: " << std::boolalpha << persona1.esMayorDeEdad() << std::endl;

    mostrarInformacionPersona(persona2);
    std::cout << "IMC: " << persona2.calcularIMC() << std::endl;
    std::cout << "Es mayor de edad: " << std::boolalpha << persona2.esMayorDeEdad() << std::endl;

    mostrarInformacionPersona(persona3);
    std::cout << "IMC: " << persona3.calcularIMC() << std::endl;
    std::cout << "Es mayor de edad: " << std::boolalpha << persona3.esMayorDeEdad() << std::endl;

    return 0;
}
