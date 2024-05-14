#include <iostream>
#include "Reloj.h"
using namespace std;

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
