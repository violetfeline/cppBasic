#include <iostream>

int main() {
	int N;
	std::cin >> N;
	int* array = new int[N];
	int count = 0;
	for(int i = 0; i < N; i++) {
		std::cin >> array[i];
	}
	for(int i = 0; i < N; i++) {
		if(array[i] % 2 == 0) {
			count += 1;
		}
	}
	std::cout << count;
	
	return 0;
}