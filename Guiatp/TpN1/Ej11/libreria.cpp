#include <iostream>
#include <vector>
#include <set>

int cantidadValoresDistintos(const std::vector<int>& arreglo) {
    std::set<int> valoresDistintos;
    for (int num : arreglo) {
        valoresDistintos.insert(num);
    }
    return valoresDistintos.size();
}