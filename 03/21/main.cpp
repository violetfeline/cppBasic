#include <iostream>

int fact(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}

int fibo(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n;
	std::cin >> n;
	double a = fact(n);
	double b = fibo(n);
	std::cout.precision(5);
	std::cout << std::fixed << a / b;
	return 0;
}