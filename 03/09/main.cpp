#include <iostream>

int main() {
	int N;
	std::cin >> N;
	int* arr = new int[N];
	for(int i = 0; i < N; i++)
		std::cin >> arr[i];

	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = 0; j < N; j++)
			if (arr[i] == arr[j]) count++;
		std::cout << count << ' ';
	}
	return 0;
}