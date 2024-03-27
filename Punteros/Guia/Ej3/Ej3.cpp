#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    
    cout << "Contenido de p: " << *p << endl; // Imprimirá el contenido de la variable apuntada por p, es decir, 10 en este caso
    
    return 0;
}
