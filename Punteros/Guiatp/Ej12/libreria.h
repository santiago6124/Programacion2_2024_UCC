#ifndef LIBRERIA_H
#define LIBRERIA_H

void reservarMemoria(double**& arreglo, int filas, int columnas);
void ingresarDatos(double** arreglo, int filas, int columnas);
void mostrarContenido(double** arreglo, int filas, int columnas);
void liberarMemoria(double**& arreglo, int filas);

#endif