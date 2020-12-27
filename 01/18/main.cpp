#include <iostream>

int main()
{
    int A, B, C, D;
    std::cin >> A >> B >> C >> D ;
	if ( A >= B && B >= C && C >= D) {
		std::cout << "YES";
	}
	else {
	    std::cout << "NO" ;
	} 
}
