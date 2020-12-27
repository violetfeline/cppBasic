#include <iostream>

int K(int n) {
	if(n <= 3)
		return n;
	if(n % 2 == 0)
		return 3 + K(n / 2);
	return 2 * K(n + 3);
}

int main() {
	int n;
	std::cin >> n;
	std::cout << K(n);
	return 0;
}
