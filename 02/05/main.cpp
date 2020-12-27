#include <iostream>

int main()
{
    int B, sum = 0;
    while (true) {
        std::cin>> B;
        if(B == 0){
            break;
        }
        sum+=B;
   }
   std::cout << sum;
    return 0;
}
