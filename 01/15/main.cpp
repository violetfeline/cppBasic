#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
	if (b>=a && a>=c || c>=a && a>=b ) {
		std::cout << a;
		return 0;
	}

	if( a>=b && b>=c || c>=b && b>=a ) {
		std::cout << b;
		return 0;
	}

	if( a>=c && c>=b || b>=c && c>=a ) {
		std::cout << c;
		return 0;
	}
}
