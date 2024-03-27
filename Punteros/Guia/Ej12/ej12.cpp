#include <iostream>
using namespace std;

int main() {
    const int largo = 100;
    char cadena[largo];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena, largo);

    cout << "Recorrido hacia adelante:" << endl;
    char *p = cadena; 
    while (*p != '\0') {
        cout << *p;
        ++p; 
    }
    cout << endl;

    cout << "Recorrido hacia atrás:" << endl;
    p--; 
    while (p >= cadena) {
        cout << *p;
        --p; 
    }
    cout << endl;

    return 0;
}
