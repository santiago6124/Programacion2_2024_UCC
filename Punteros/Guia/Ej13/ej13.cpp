#include <iostream>
using namespace std;

int main() {
    const int cant_elementos = 5;
    int vector[cant_elementos];

    cout << "Ingrese " << cant_elementos << " elementos del vector:" << endl;
    for (int i = 0; i < cant_elementos; ++i) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector[i];
    }

   
    cout << "Recorrido del vector:" << endl;
    int *p = vector;
    for (int i = 0; i < cant_elementos; ++i) {
        cout << *p << ","; 
        ++p; 
    }
    cout << endl;

    return 0;
}
