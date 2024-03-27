#include <iostream>
int main() {
int x, y, *p, *q;
p = &x;
*p = 14;//x=14
q = p;//q=direccion de x
if ( p == q)std::cout <<"Mensaje 1";//Mensaje 1
q = &y;//q=direccion de y
if ( p == q)std::cout <<"Mensaje 2";//no se imprime
*q = 14;//y=14
if (p == q) std::cout <<"Mensaje 3";//no se imprime
if (*p == *q) std::cout <<"Mensaje 4";//Mensaje 4
return 0;
}