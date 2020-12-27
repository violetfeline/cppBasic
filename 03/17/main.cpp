#include <iostream>

long long johnson(unsigned oh) {
	long long bin = 0;
	for (long i = 1; oh > 0; i *= 10) {
		bin += (oh % 2) * i;
		oh /= 2;
	}
	return bin;
}

int main() {
	unsigned dec;
	std::cin >> dec;
	std::cout << johnson(dec);
	return 0;
}
