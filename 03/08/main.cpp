#include <iostream>

int main() {
	int N;
	std::cin >> N;
	int* arr = new int[N];
	for(int i = 0; i < N; i++)
		std::cin >> arr[i];
	
	int seq = 1;
	int max = 1;
	for(int i = 0; i < N - 1; i++) {
		if(arr[i] < arr[i+1]) {
			seq++;
		} else {
			seq = 1;
		}
		if(seq > max) {
			max = seq;
		}
	}
	std::cout << max;
	return 0;
}