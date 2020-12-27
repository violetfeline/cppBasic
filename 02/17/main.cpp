#include <iostream>

int main() {
    const int size = 100;
    int array[size] = {0};
    int N;
    std::cin >> N;
    for(int i = 0; i < N; i++) {
        std::cin >> array[i];
    }
    for(int i = 0; i < N; i++) {
        bool is_unique = true;
        for(int j = 0; j < N; j++) {
            if(array[i] == array[j] && j != i) {
                is_unique = false;
                break;
            }
        }
        if(is_unique) {
            std::cout << array[i] << ' ' << i;
        }
    }
    return 0;
}
