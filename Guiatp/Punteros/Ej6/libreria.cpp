#include <iostream>
#include "libreria.h"

#include <cmath>

bool esPrimo(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

bool esSemiPrimo(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (esPrimo(i) && n % i == 0) {
            int otroFactor = n / i;
            if (esPrimo(otroFactor))
                return true;
        }
    }
    return false;
}