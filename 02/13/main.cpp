#include <iostream>

int main() {
    const unsigned n = 1000;
    int array[n] = {0};
    int a;
    std::cin >> a;
    for(int i = 0; i < a; i++) {
      std::cin >> array[i];
    }
    for(int i = 0; i < a; i++) {
        if(0 > array[i]) {
            std::cout << array[i] <<' ';
        }
    }
    for(int i = 0; i < a; i++) {
        if(0 <= array[i]) {
            std::cout << array[i] <<' ';
        }
    }
    return 0;
}
