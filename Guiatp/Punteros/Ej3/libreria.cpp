#include <iostream>
#include "libreria.h"

int mcd(int M, int N) {
    if (N == 0)
        return M;
    return mcd(N, M % N);
}