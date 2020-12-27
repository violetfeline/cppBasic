#include <iostream>

int main()
{
    int A, B, count = 0;
    std::cin >> A >> B;
    while (A<=B) {
        if(A%7==0){
            count+=1;
        }
        A+=1;
    }
    std::cout << count;
    return 0;
}
