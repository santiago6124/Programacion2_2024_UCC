/*
Crear una clase llamada Password que siga las siguientes condiciones:
 Los atributos son longitud y contraseña. Por defecto, la longitud será de 8
caracteres
Generar los siguientes constructores:
 Un constructor por defecto.
 Un constructor con la longitud pasada como parámetro.
Generar los siguientes métodos:
 generarPassword(): genera la contraseña del objeto con la longitud que
corresponda.
 esFuerte(): devuelve si es fuerte o no. Para que sea fuerte debe tener más de
2 mayúsculas, más de 1 minúscula y más de 5 números.
 Método para visualización de la contraseña y la longitud.
 Método para cargar la longitud.
Realizar un programa principal que haga uso de la clase.
*/
#include <iostream>
#include "password.h"

int main() {
    Password pass1;
    pass1.generarPassword();
    pass1.mostrar();
    std::cout << "Es fuerte: " << (pass1.esFuerte() ? "Si" : "No") << std::endl;

    Password pass2(20);
    pass2.generarPassword();
    pass2.mostrar();
    std::cout << "Es fuerte: " << (pass2.esFuerte() ? "Si" : "No") << std::endl;

    pass2.cargarLongitud(6);
    pass2.generarPassword();
    pass2.mostrar();
    std::cout << "Es fuerte: " << (pass2.esFuerte() ? "Si" : "No") << std::endl;

    return 0;
}
