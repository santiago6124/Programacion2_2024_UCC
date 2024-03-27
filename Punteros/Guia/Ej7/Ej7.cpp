#include<iostream>
using namespace std;
int main()
{
int x1 = 50;
int x2 = 100;
int *p1, *p2;
p1 = &x1;//p1 apunta a la direccion de la variable x1
p2 = p1;// p2 apunta a la misma direccion de la variable x1
*p1 = 2000;//se le asigna a la direccion de la variable (x1) el valor de 2000
p2 = &x2;//p2 ahora apunta a la variable x2
x1 = 1;//se le asigna a la variable x1 el valor de 1
x2 = 2;//se le asigna a la variable x2 el valor de 2
*p1 = 500;//se le asigna a la direccion de la variable (x1) el valor de 500
*p2 = 600;//se le asigna a la direccion de la variable (x2) el valor de 600
return 0;
}