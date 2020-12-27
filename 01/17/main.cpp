#include <iostream>

int main()
{
    double A, B, C;
    std::cin >> A >> B >> C ;
	if ( A >= B && A < C) {
		std::cout << "YES";
	}
	else {
	    std::cout << "NO" ;
	} 
}
