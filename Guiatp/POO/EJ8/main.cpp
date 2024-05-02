#include "persona.h"
#include <iostream>
/*
Generar una clase Persona que siga las siguientes condiciones:
Los atributos son:
 Nombre
 Fecha de nacimiento
 DNI
 Sexo (H hombre, M mujer)
 Peso
 Altura
Generar los siguientes constructores:
 Un constructor por defecto.
 Un constructor con el nombre, edad y sexo, el resto por defecto.
 Un constructor con todos los atributos como parámetro.
Definir los métodos para:
 Carga y muestra de los datos miembro.
 calcularIMC: calcula el índice de masa corporal como (peso en kg/(altura2 en
m)),
 calcularEdad: calcula la edad según la fecha de nacimiento.
 esMayorDeEdad: indica si es mayor de edad.
Realizar un programa principal que haga uso de la clase
*/
int main() {
    // Crear una persona
    Persona persona1;
    
    // Cargar datos
    persona1.cargarDatos();
    
    // Mostrar datos
    persona1.mostrarDatos();

    // Calcular y mostrar el IMC
    double imc = persona1.calcularIMC();
    std::cout << "IMC: " << imc << std::endl;

    // Calcular y mostrar la edad
    int edad = persona1.calcularEdad();
    std::cout << "Edad: " << edad << " años" << std::endl;

    // Verificar si es mayor de edad
    bool mayorDeEdad = persona1.esMayorDeEdad();
    if (mayorDeEdad) {
        std::cout << "Es mayor de edad" << std::endl;
    } else {
        std::cout << "Es menor de edad" << std::endl;
    }

    return 0;
}
