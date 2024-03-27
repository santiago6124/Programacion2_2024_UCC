#include <iostream>
int main() {
int x, y, *p, *q;
p = &x;
*p = 5;
q = &y;
*q = 23;
std::cout  << *p << " " << *q << std::endl;
q = p;
*p = 35;
std::cout << *p << " " << *q <<std::endl;
q = NULL;
std::cout  << x << " " << y << std::endl;
return 0;
}

int main() {
    int x, y; // Declare two integer variables, x and y
    int *p, *q; // Declare two integer pointers, p and q

    p = &x; // Assign the address of x to p
    *p = 5; // Assign the value at the address stored in p (which is x) to be 5

    q = &y; // Assign the address of y to q
    *q = 23; // Assign the value at the address stored in q (which is y) to be 23

    cout << *p << " “ << *q << endl; // Print the values at the addresses stored in p and q (which are x and y)

    q = p; // Assign the address stored in p (which is the address of x) to q

    *p = 35; // Assign the value at the address stored in p (which is x) to be 35

    cout << *p << " “ << *q << endl; // Print the values at the addresses stored in p and q (which are both x now)

    q = NULL; // Assign NULL to q, making it point to nothing

    cout << x << " “ << y << endl; // Print the values of x and y

    return 0; // Return 0 indicating successful execution of the program
}