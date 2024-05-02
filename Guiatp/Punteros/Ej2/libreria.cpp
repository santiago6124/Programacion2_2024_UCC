#include <iostream>
#include "libreria.h"

int cantidadNumerosDivisibles(int A, int B, int K) {
    int count = (A % K == 0) ? 1 : 0;
    count += (B / K) - ((A - 1) / K);
    return count;
}