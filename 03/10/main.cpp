#include <iostream>
#include <climits>

int main() {
	int N, a1, a2;
	std::cin >> N;
	int* a = new int[N];
	for(int i = 0; i < N; i++)
		std::cin >> a[i];

	int min = INT_MAX;
	for(int i = 0; i < N; i++) {
		for(int j = i + 1; j < N; j++) {
			if(std::abs(a[i] + a[j]) < min) {
				a1 = a[i];
				a2 = a[j];
				min = std::abs(a[i] + a[j]);
			}
		}
	}
	std::cout << a1 << ' ' << a2;
	return 0;
}