#include <iostream>

double T(double n, double& x) {
	if (n == 0) return 1;
	if (n == 1)	return x;
	return 2 * x * T(n-1, x) - T(n-2, x);
}

int main() {
	double n, x;
	std::cin >> n >> x;
	std::cout.precision(5);
	std::cout << std::fixed << T(n, x);
	return 0;
}