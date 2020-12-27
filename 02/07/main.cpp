
#include <iostream>
#include <climits>
int main() {
    int min = INT_MAX;
    int max = INT_MIN;
    int x, b;
    std::cin >> b;
    for(int a = 0; a < b; a+=1) {
        std::cin >> x;
        if(x < min) {
            min = x;
        }
        if(x > max) {
            max = x;
        }
    }
    std::cout << max - min << "\n";
    return 0;
}
