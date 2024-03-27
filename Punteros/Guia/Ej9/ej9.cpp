#include <iostream>
using namespace std;

int main() {
    float num1 = 3.14;
    float num2 = 2.718;

    float *p;

    p = &num1;
    *p = 4.56; 
    cout << "Contenido de num1 después de modificarlo: " << num1 << endl;

    p = &num2;
    *p = 7.89; 
    cout << "Contenido de num2 después de modificarlo: " << num2 << endl;

    return 0;
}
