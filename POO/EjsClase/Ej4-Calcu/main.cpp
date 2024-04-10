#include <iostream>
#include "calcu.h"

int main() {
    Calcu calcu;
    int valor1, valor2;
    
    std::cout << "Ingrese el primer valor: ";
    std::cin >> valor1;
    std::cout << "Ingrese el segundo valor: ";
    std::cin >> valor2;
    
    calcu.cargarValores(valor1, valor2);
    
    std::cout << "Suma: " << calcu.calcularSuma() << std::endl;
    std::cout << "Resta: " << calcu.calcularResta() << std::endl;
    std::cout << "Multiplicacion: " << calcu.calcularMultiplicacion() << std::endl;
    
    // Verificamos si el divisor es cero para evitar división por cero
    if (valor2 != 0)
        std::cout << "Division: " << calcu.calcularDivision() << std::endl;
    else
        std::cout << "Division: No se puede dividir por cero." << std::endl;
    
    return 0;
}
