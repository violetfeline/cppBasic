#include <iostream>

int main() {
    const int n = 1000;
    char mixed[n] = {0};
    char sorted[n] = {0};
    int N;
    std::cin >> N;
    for(int i = 0; i < N; i++) {
        std::cin >> mixed[i];
    }
    int j = 0;
    for(int i = 0; i < N; i++) {
        if('0' <= mixed[i] && mixed[i] <= '9') {
            sorted[j++] = mixed[i];
        }
    }
    for(int i = 0; i < N; i++) {
        if(mixed[i] < '0' || mixed[i] > '9') {
            sorted[j++] = mixed[i];
        }
    }
    for(int i = 0; i < j; i++) {
        std::cout << sorted[i] << ' ';
    }
    return 0;
}
