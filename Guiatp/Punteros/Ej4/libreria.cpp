#include <iostream>
#include "libreria.h"

unsigned long long factorial(int N) {
    if (N == 0)
        return 1;
    return N * factorial(N - 1);
}
