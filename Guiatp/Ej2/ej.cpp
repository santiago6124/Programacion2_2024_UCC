#include <iostream>

int main(){
    int x,y, *p, *q;
    p =&x;
    *p=5; // el puntero de p = 5
    q = &y; //q = direccion de y
    *q = 23; // el puntero de q, osea y es 23
    std::cout << *p << "-" << *q <<std::endl;
    q=p; // la direccion de p y q son iguales, ambos apuntan a y
    *p = 35; // y ahora vale 35
    std::cout << *p << "-" << *q <<std::endl;
    q= NULL; // el puntero de 1 es nulo, no apunta a nada
    std::cout << x << "-" << y <<std::endl;
    return 0;
}