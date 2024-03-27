#include <iostream>
#include "libreria.h"
#include "cmath"

float PolynomialFunction(int arr[], int arr_size, float num) {
  int var = 0;
  for (int a = arr_size; a > 0; a--) {
    var += arr[a - 1] * (pow(num, a - 1));
  }

  return var;
}