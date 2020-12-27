#include <iostream>

int main() {
	int N;
	std::cin >> N;
	int** matrix = new int* [N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int [N]; // int*
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			matrix[i][j] = N * i + 2 * j;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
    return 0;
}
