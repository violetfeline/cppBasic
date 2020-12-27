#include <iostream>

int main() {
    int x;
    bool is_prime;
    std::cin >> x;
    for(int i = 2; i <= x; i++){
        is_prime = true;
        for(int a = 2; a <= i/2; a++) {
            if(i % a == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            std::cout << i << ' ';
        }
    }
    return 0;
}
