#include <iostream>
#include "libreria.h"

int saltos(int x, int y, int d){
    int i = 0;
    while (y >x){
        x = x+d;
        i++;
    } 

    return i;
};
