#include <iostream>

int main() {
	const int size = 1000;
	int a[size] = {0};
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> a[i];
	}
	bool changed;
	do {
		changed = false;
		int shift = 1;
		for(int i = 0; i < N - shift; i++) {
			if(a[i] < a[i+1]) {
				changed = true;
				int k = a[i];
				a[i] = a[i+1];
				a[i+1] = k;
			}
		}
		shift++;
	} while(changed);
	for (int i = 0; i < N; i++) {
		std::cout << a[i] << ' ';
	}
}