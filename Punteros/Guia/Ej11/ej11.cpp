#include <iostream>
using namespace std;

void encontrarElementoMenor(int matriz[][100], int filas, int columnas, int &filaMenor, int &columnaMenor) {
    int menor = matriz[0][0]; 
    filaMenor = 0;
    columnaMenor = 0;


    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                filaMenor = i;
                columnaMenor = j;
            }
        }
    }
}

int main() {
    int n, m;

    cout << "Ingrese el número de filas de la matriz: ";
    cin >> n;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> m;

    int matriz[100][100];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int filaMenor, columnaMenor;

    encontrarElementoMenor(matriz, n, m, filaMenor, columnaMenor);

    cout << "El elemento menor de la matriz se encuentra en la fila " << filaMenor << " y columna " << columnaMenor << "." << endl;

    return 0;
}
