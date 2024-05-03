#include "persona.h"

Persona::Persona() : nombre(""), fechaNacimiento(""), DNI(""), sexo(' '), peso(0), altura(0) {}

Persona::Persona(  std::string &nombre,   std::string &fechaNacimiento, char sexo, double peso, double altura)
    : nombre(nombre), fechaNacimiento(fechaNacimiento), sexo(sexo), peso(peso), altura(altura) {}

Persona::Persona(  std::string &nombre,   std::string &fechaNacimiento,   std::string &DNI, char sexo, double peso, double altura)
    : nombre(nombre), fechaNacimiento(fechaNacimiento), DNI(DNI), sexo(sexo), peso(peso), altura(altura) {}

void Persona::cargarDatos() {
    std::cout << "Ingrese el nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese la fecha de nacimiento (dd/mm/aaaa): ";
    std::cin >> fechaNacimiento;
    std::cout << "Ingrese el DNI: ";
    std::cin >> DNI;
    std::cout << "Ingrese el sexo (H hombre, M mujer): ";
    std::cin >> sexo;
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la altura (m): ";
    std::cin >> altura;
}

void Persona::mostrarDatos()   {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Fecha de nacimiento: " << fechaNacimiento << std::endl;
    std::cout << "DNI: " << DNI << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Altura: " << altura << " m" << std::endl;
}

double Persona::calcularIMC()   {
    return peso / (altura * altura);
}

int Persona::calcularEdad()   {
    // Obtener la fecha actual
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    int añoActual = now->tm_year + 1900;
    int mesActual = now->tm_mon + 1;
    int diaActual = now->tm_mday;

    // Obtener el año de nacimiento
    int añoDeNac, mesDeNac, diaDeNac;
    sscanf(fechaNacimiento.c_str(), "%d/%d/%d", &diaDeNac, &mesDeNac, &añoDeNac);

    // Calcular la edad
    int age = añoActual - añoDeNac;
    if (mesActual < mesDeNac || (mesActual == mesDeNac && diaActual < diaDeNac)) {
        age--;
    }
    return age;
}

bool Persona::esMayorDeEdad()   {
    return calcularEdad() >= 18;
}
