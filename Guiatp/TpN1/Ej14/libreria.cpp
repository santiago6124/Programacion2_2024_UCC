#include <iostream>
#include "libreria.h"

// Definición de la función para verificar si existe un triplete triangular en el arreglo
bool existeTripleteTriangular(const std::vector<int>& A) {
    int N = A.size();

    // Verificar si hay al menos tres elementos en el arreglo
    if (N < 3) {
        return false;
    }

    // Iterar sobre el arreglo para encontrar un triplete triangular
    for (int P = 0; P < N - 2; ++P) {
        for (int Q = P + 1; Q < N - 1; ++Q) {
            for (int R = Q + 1; R < N; ++R) {
                if (A[P] + A[Q] > A[R] && A[Q] + A[R] > A[P] && A[R] + A[P] > A[Q]) {
                    return true;
                }
            }
        }
    }

    return false;
}