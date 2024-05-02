#include "Persona.h"
#include <iostream>
#include <cstdlib> 

void mostrarInformacionPersona(const Persona &persona) {
    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;
    std::cout << "DNI: " << persona.getDni() << std::endl;
    std::cout << "Sexo: " << persona.getSexo() << std::endl;
    std::cout << "Peso: " << persona.getPeso() << std::endl;
    std::cout << "Altura: " << persona.getAltura() << std::endl;
}

Persona::Persona() {
    nombre = "";
    edad = 0;
    dni = 0; 
    sexo = 'H'; 
    peso = 0.0;
    altura = 0.0;
    comprobarSexo();
    dni= generarDNI();
}



Persona::Persona(std::string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
    this->sexo = 'H';
    this->peso = peso = 0.0;
    this->altura = altura = 0.0;
    comprobarSexo();
    dni= generarDNI();
}

Persona::Persona(std::string nombre, int edad, int dni, char sexo, double peso, double altura) {
    this->nombre = nombre;
    this->edad = edad;
    this->dni = dni;
    this->sexo = sexo;
    this->peso = peso;
    this->altura = altura;
    comprobarSexo();
    dni= generarDNI();

}

// gets
std::string Persona::getNombre() const {
    return nombre;
}

int Persona::getEdad() const {
    return edad;
}

int Persona::getDni() const {
    return dni;
}

char Persona::getSexo() const {
    return sexo;
}

double Persona::getPeso() const {
    return peso;
}

double Persona::getAltura() const {
    return altura;
}

// sets
void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::setSexo(char sexo) {
    this->sexo = sexo;
    comprobarSexo();
}

void Persona::setPeso(double peso) {
    this->peso = peso;
}

void Persona::setAltura(double altura) {
    this->altura = altura;
}

// métodos
int Persona::generarDNI() {
    return rand() % 89999999 + 10000000;
}
int Persona::calcularIMC() {
    double imc = peso / (altura * altura);
    if (imc < 20)
        return -1;
    else if (imc >= 20 && imc <= 25)
        return 0;
    else
        return 1;
}

bool Persona::esMayorDeEdad() {
    return edad >= 18;
}

void Persona::comprobarSexo() {
    if (sexo != 'H' && sexo != 'M')
        sexo = 'H';
}

