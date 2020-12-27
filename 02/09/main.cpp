#include <iostream>
#include <climits>
int main()
{
    unsigned n;
    int b, max = INT_MIN, max_count = 0;
    std::cin >> n;
    for(; n; n--){
        std::cin >> b;
        if(b > max) {
            max = b;
            max_count = 1;
        }
        else if(b == max){
            max_count++;
        }
        
    }
    std::cout << max_count;
    
    
    return 0;
}
