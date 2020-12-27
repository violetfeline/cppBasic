#include <iostream>

int main() {
    const int size = 1000;
    int a[size] = {0};
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for(int i = 0; i < n/2; i++) {
        std::cout << a[i] + a[n-1-i] << ' ';
    }
    
    return 0;
}
