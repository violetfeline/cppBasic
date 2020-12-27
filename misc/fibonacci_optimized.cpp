#include <iostream>
int uopt_count = 0;
int opt_count = 0;
int fib_unoptimized(int n) {
	uopt_count++;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fib_unoptimized(n - 1) + fib_unoptimized(n - 2);
}

int fib_cached(int n, int* cache) {
	opt_count++;
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

int fib_optimized(int n) {
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
	std::cout << fib_optimized(n) << " optimized steps: " << opt_count << std::endl;
	std::cout << fib_unoptimized(n) << " unoptimized steps: " << uopt_count << std::endl;
}