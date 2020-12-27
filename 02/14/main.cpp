#include <iostream>

int main() {
    const unsigned n = 10;
    int array1[n] = {0};
    int array2[n] = {0};
    for(int i = 0; i < n; i++) {
        std::cin >> array1[i];
    }
    for(int i = 0; i < n; i++) {
        std::cin >> array2[i];
    }
    for(int i = 0; i < n; i++) {
        bool not_found = true;
        for(int j = 0; j < n; j++) {
            if(array1[i] == array2[j]) {
                not_found = false;
                break;
            }
        }
        if(not_found) {
            std::cout << array1[i] << ' ';
        }
    }
    return 0;
}
