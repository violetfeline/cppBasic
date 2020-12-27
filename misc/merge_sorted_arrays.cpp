#include <iostream>

int main() {
	const int size = 1000;
	int a[2 * size] = {0};
	int N, M;

	std::cin >> N;
	for (int i = 0; i < N; i++) std::cin >> a[i];
	std::cin >> M;
	for (int i = 0; i < M; i++) {
		int key;
		std::cin >> key;
		int j = N + i;
		while(j > 0 && a[j - 1] > key) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = key;
	}

	for (int i = 0; i < N + M; i++) {
		std::cout << a[i] << ' ';
	}
}
