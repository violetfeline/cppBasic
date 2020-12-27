#include <iostream>

int main()
{
    int A, B, C, D;
    std::cin >> A >> B >> C >> D ;
	if ( A > C ) {
		std::cout << A*D - B - C;
	}
	else if ( C > A){
	    std::cout << A*(B + D) ;
	} else {
	    std::cout << A + B + C + D ;
	}
	    
}
