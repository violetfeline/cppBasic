#include <iostream>

int main()  {
    unsigned N, K;
    int C;
    std::cin >> N >> K;
    while (N) {
        std::cin >> C;
        N -= 1;
        if(123 <= C) {
            K -= 1;
        }
    } 
    if (K == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}
