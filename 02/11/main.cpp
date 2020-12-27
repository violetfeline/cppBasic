#include <iostream>

int main() {
    const unsigned n = 1000;
    int array[n] = {0};
    int a;
    std::cin >> a;
    int count = 0;
    for (int i = 0; i < a; i++) {
        std::cin >> array[i];
    }
    for (int i = 0; i < a - 1; i++) {
        if(array[a-1] != array[i]) {
            count++;
        }
    }
    std::cout << count ;
        

    return 0;
}
