#include <iostream>
#include "libreria.h"

int main() {
    int grade;
    std::cout << "Ingrese el grado del polinomio (1, 2, 3, 4, etc): ";
    std::cin >> grade;

    int* coefficients = new int[grade + 1];

    for (int i = 0; i <= grade; i++) {
        std::cout << "Ingrese el coeficiente de x^" << i << ": ";
        std::cin >> coefficients[i];
    }

    std::cout << "Polinomio ingresado: ";
    for (int i = grade; i >= 0; i--) {
        std::cout << "+" << coefficients[i] << "x^" << i;
    }
    std::cout << std::endl;

    int extra_num;
    std::cout << "Ingrese el número a evaluar: ";
    std::cin >> extra_num;

    std::cout << "Resultado: " << PolynomialFunction(coefficients, grade + 1, extra_num) << std::endl;

    delete[] coefficients;

    return 0;
}
