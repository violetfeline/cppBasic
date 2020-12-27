#include <iostream>

bool is_prime(int& a) {
	if (a == 1) return false;
	for (int i = 2; i < a / 2; i++)
		if (a % i == 0)
			return false;
	return true;
}

int main() {
	int n;
	std::cin >> n;
	if(is_prime(n)) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	return 0;
}