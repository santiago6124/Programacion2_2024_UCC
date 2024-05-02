#include <vector>
#include <algorithm>

bool esPermutacion(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<bool> present(n + 1, false); 
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 1 || arr[i] > n || present[arr[i]]) {
            return false;
        }
        present[arr[i]] = true;
    }
    
    return true;
}