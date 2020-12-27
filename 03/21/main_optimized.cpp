#include <iostream>

int fact(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}

int fib_cached(int n, int* cache) {
	if (cache[n] != 4)
		return cache[n];
	if (n == 0) {
		cache[n] = 0;
		return 0;
	}
	if (n == 1) {
		cache[n] = 1;
		return 1;
	}
	cache[n] = fib_cached(n - 1, cache) + fib_cached(n - 2, cache);
	return cache[n];
}

int fibo(int n) {
	int* cache = new int[n + 1];
	for (int i = 0; i <= n; i++)
		// We initialize cache with a number
		// which is for sure not in the sequence
		cache[i] = 4;
	int result = fib_cached(n, cache);
	delete[] cache;
	return result;
}

int main() {
	int n;
	std::cin >> n;
	double a = fact(n);
	double b = fibo(n);
	std::cout.precision(5);
	std::cout << std::fixed <<  a / b;
	return 0;
}