#include <iostream>

double func(int& n) {
	double fact = 1;
	for (int i = n; i > 0; i--) {
		fact *= i;
	}
	return fact / (n + 1);
}

int main() {
	double sum = 0;
	for (int i = 1; i < 11; i++)
		sum += func(i);
	std::cout.precision(5);
	std::cout << std::fixed << sum;
	return 0;
}