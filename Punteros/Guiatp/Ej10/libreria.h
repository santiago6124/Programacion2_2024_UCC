#ifndef LIBRERIA_H
#define LIBRERIA_H

void reservarMemoria(int*& arreglo, int tamano);
void generarValoresAleatorios(int* arreglo, int tamano);
void ordenarDeMayorAMenor(int* arreglo, int tamano);
void mostrarArreglo(int* arreglo, int tamano);
void liberarMemoria(int*& arreglo);

#endif