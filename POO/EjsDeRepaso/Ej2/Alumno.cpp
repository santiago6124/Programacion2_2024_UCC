#include "Alumno.h"
#include <iostream>

Alumno::Alumno(std::string clave, std::string nombre, float nota1, float nota2, float nota3)
    : claveUCC(clave), nombre(nombre), nota1(nota1), nota2(nota2), nota3(nota3) {}

float Alumno::calcularNotaFinal() {
    return (nota1 + nota2 + nota3) / 3;
}

bool Alumno::aproboAsignatura() {
    return calcularNotaFinal() >= 4;
}

void Alumno::imprimirInformacion() {
    std::cout << "Clave UCC: " << claveUCC << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Nota Final: " << calcularNotaFinal() << std::endl;
    if (aproboAsignatura()) {
        std::cout << "El alumno aprobó la asignatura." << std::endl;
    } else {
        std::cout << "El alumno no aprobó la asignatura." << std::endl;
    }
}
