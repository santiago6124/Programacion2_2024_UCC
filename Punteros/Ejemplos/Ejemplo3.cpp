#include <iostream>
int main() {
int x, y, *p, *q;
p = &x;
*p = 12;//x=12
q = &y;
*q = 23;//y=23
std::cout << *p <<" "<<*q<<std::endl;//12 - 23
*p = *q;//x=23
std::cout << *p <<" "<<*q<<std::endl;//23-23
q = NULL;
std::cout<<*p<<std::endl;//23
std::cout<<x<<" "<<y<<std::endl;//23 23
return 0;
}