#include <iostream>
using namespace std;

int main() {
    int x = 5;
    float y = 3.14;

    int *pInt = &x; // Puntero a entero apuntando a la dirección de x
    float *pFloat = &y; // Puntero a flotante apuntando a la dirección de y

    cout << "Valor de x a través de pInt: " << *pInt << endl;
    cout << "Valor de y a través de pFloat: " << *pFloat << endl;

    // Modificar el valor de x e y a través de los punteros
    *pInt = 10;
    *pFloat = 6.28;

    cout << "Nuevo valor de x: " << x << endl;
    cout << "Nuevo valor de y: " << y << endl;

    return 0;
}
