#include <iostream>
using namespace std;

int main() {
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;

    int *p;

    p = &num1;
    cout << "Contenido de p apuntando a num1: " << *p << endl;

    p = &num2;
    cout << "Contenido de p apuntando a num2: " << *p << endl;

    p = &num3;
    cout << "Contenido de p apuntando a num3: " << *p << endl;

    return 0;
}
