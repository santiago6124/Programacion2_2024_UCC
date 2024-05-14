#include "Reloj.h"
#include <iostream>
#include <unistd.h>

int main()
{
    Reloj reloj;

    reloj.setHora(12, 30, 0);
    reloj.setAlarma(12, 30, 10);
    while (true)
    {
        reloj.incrementarHora();
        if (reloj.checkAlarma())
        {
            for (int i = 0; i < 10; i++)
            {
                sleep(1);
                std::cout << "ALARMA" << std::endl;
                reloj.incrementarHora();
            }
            std::cout << "ALARMA Terminó" << std::endl;
            reloj.incrementarHora();

        }
    }

    return 0;
}
