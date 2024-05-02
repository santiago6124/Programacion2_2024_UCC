/*
Realizar una clase que permita representar una fecha.
 Definir los datos miembros de la clase.
 Definir si fuera necesario funciones de carga y muestra de los datos miembro.
 Definir un constructor que inicializa la fecha a una fecha dada.
 Definir un constructor que inicializa la fecha en 01/01/1900.
 Definir sobrecargas de los siguientes operadores:
o ++ y – incrementa o decrementa la fecha en 1 día.
o + y – suma a una fecha un cierto número de días.
 Realizar un programa principal que haga uso de la clase
*/

#include "fecha.h"
#include <iostream>
using namespace std;

int main() {
    Fecha fecha1(9, 12, 2018);
    cout << fecha1.getDia() << "/" << fecha1.getMes() << "/" << fecha1.getAnio() << endl;

    ++fecha1;
    cout << fecha1.getDia() << "/" << fecha1.getMes() << "/" << fecha1.getAnio() << endl;

    Fecha fecha2;
    cout << fecha2.getDia() << "/" << fecha2.getMes() << "/" << fecha2.getAnio() << endl;
    
    fecha2 = fecha2 + 33;
    cout << fecha2.getDia() << "/" << fecha2.getMes() << "/" << fecha2.getAnio() << endl;
    return 0;
}
