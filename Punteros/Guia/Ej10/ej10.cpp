#include <iostream>
using namespace std;

int f1(int x) {
    return x + 1;
}

void f2(int &x) {
    x++;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    cout << "Valor original de num1: " << num1 << endl;
    num1 = f1(num1);
    cout << "Valor de num1 después de usar f1: " << num1 << endl;

    cout << "Valor original de num2: " << num2 << endl;
    f2(num2);
    cout << "Valor de num2 después de usar f2: " << num2 << endl;

    return 0;
}
