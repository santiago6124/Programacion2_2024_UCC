#include <iostream>
int main() {
int *p, *q, x, y;
p = &x;
*p = 14;
q = p;
std::cout  << *p << "- " << *q << std::endl;
q = NULL;
std::cout  << x << " -" << y << std::endl;
return 0;
}

