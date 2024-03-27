#include <iostream>
using namespace std;

int main() {
    int x = 5;//se crea la variable x y se le asigna un valor de 5
    float y = 3.14;//se crea la variable y y se le asigna un valor de 3.14

    int *pInt = &x; //puntero entero apunta a la dirección de x
    float *pFloat = &y; //puntero float apuntan a la dirección de y

    cout << "Valor de x a través de pInt: " << *pInt << endl;
    cout << "Valor de y a través de pFloat: " << *pFloat << endl;

    *pInt = 10;// asignarle a x a través de su puntero, el valor 10
    *pFloat = 6.28;// asignarle a y a través de su puntero, el valor 6.28

    cout << "Nuevo valor de x: " << x << endl;
    cout << "Nuevo valor de y: " << y << endl;

    return 0;
}
