#include <iostream>

int main() {
    const int n = 1000;
    int array[n] = {0};
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        std::cin >> array[i];
    }
    for (int i = a-1; i >= 0; i--) {
        std::cout << array[i] <<' ';
    }
        

    return 0;
}
