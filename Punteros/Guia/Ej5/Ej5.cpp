#include <iostream>
using namespace std;

int main() {
    int a = 501; //se le asigna 501 a la variable a
int *p; //se crea el puntero p
p = &a; // a p se le asigna la direccion de a
*p = 5; // a la direccion del puntero, osea a la variable a, se le asigna un valor de 5
}