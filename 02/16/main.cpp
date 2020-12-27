#include <iostream>

int main() {
    const int size = 1000;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        int primes = 0;
        std::cin >> a;
        for(int j = 2; j < a; j++) {
            bool is_prime = true;
            for(int k = 2; k <= j/2; k++) {
                if(j % k == 0) {
                    is_prime = false;
                    break;
                }
            }
            if(is_prime) {
                 primes++;
            }
        }
        std::cout << primes << ' ';
    }
    return 0;
}
