#include <iostream>

int main() {
	int N;
	std::cin >> N;
	int* array = new int[N];
	int* dupls = new int[N/2];
	for(int i = 0; i < N; i++) {
		std::cin >> array[i];
	}
	int d = 0;
	for(int i = 0; i < N; i++) {
		for(int j = i + 1; j < N; j++) {
			if(array[i] == array[j]) {
				bool not_found = true;
				for(int k = 0; k <= d; k++) {
					if(array[i] == dupls[k]) {
						not_found = false;
						break;
					}
				}
				if(not_found) {
					dupls[d++] = array[i];
				}
			}
		}
	}
	for(int i = 0; i < d; i++)
		std::cout << dupls[i] << ' ';

	return 0;
}