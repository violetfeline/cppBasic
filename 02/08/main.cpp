#include <iostream>
#include <climits>
int main()
{
    int N, B, max1=INT_MIN, max2=INT_MIN, max3=INT_MIN;
    std::cin >> N;
    while(N) {
        std::cin >> B;
        if (B > max1) {
            max1 = B;
        }
        if (max1 > max2) {
            B = max2;
            max2 = max1;
            max1 = B;
        }
        if (max2 > max3) {
            B = max3;
            max3 = max2;
            max2 = B;
        }
        N--;
    }
    std::cout << max1 << ' ' << max2 << ' ' << max3 << std::endl;
    return 0;
}
