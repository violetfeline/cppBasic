#include <iostream>

// Euclid's algorithm
int gcd(int a, int b) {
	int mod = a % b;
	if(mod == 0) {
		return b;
	}
	return gcd(b, mod);
}

int main() {
	int a, b;
	std::cin >> a >> b;
	if(a > b)
		std::cout << gcd(a, b);
	else
		std::cout << gcd(b, a);
	return 0;
}