#include <iostream>
#include "Reloj.h"
using namespace std;
/*
Se desea implementar un software que represente un reloj como el de la figura:
Se pide implementar los objetos Hora y Temperatura
Requerimientos Hora:
1) Se debe permitir poner en hora el reloj ( Set Hora).
1) La hora se representa en el formato de 00:00:00 a 23:59:59
1) Configurar Alarma ( Set Alarma).
1) Cuando la alarma se active, la misma debe durar un determinado tiempo (Ej: 20 seg)
Requerimientos Temperatura
1) El reloj toma temperatura ambiente a través de un sensor. (Se simula simplemente seteando por
teclado una temperatura inicial de trabajo)
2) Se puede mostrar la temperatura en 3 escalas distintas.
*/


int main()
{
    Reloj miReloj;

    miReloj.setHora(10, 30, 0);

    miReloj.setAlarma(10, 30, 10);

    miReloj.setTempC(25.5);
    miReloj.setTempF(78.5);
    miReloj.setTempK(298.5);

    bool continuar = true;
    while (continuar)
    {
        miReloj.incrementarHora();
        miReloj.tomarTemp();
        miReloj.mostrarHora();
        miReloj.mostrarAlarma();
        miReloj.mostrarTemperatura();

        if (miReloj.checkAlarma())
        {
            for (int i = 0; i < 20; i++)
            {
                cout << "La alarma esta activa!" << endl;
                miReloj.incrementarHora();
                miReloj.tomarTemp();
                miReloj.mostrarHora();
                miReloj.mostrarAlarma();
                miReloj.mostrarTemperatura();
            }
        }
        else
        {
            cout << "La alarma no esta activa." << endl;
        }
    }

    return 0;
}
