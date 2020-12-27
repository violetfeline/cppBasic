#include <iostream>

int main() {
	const int size = 6;
	int m1[size][size];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			std::cin >> m1[i][j];
	
	for (int i = 0; i < size / 2; i++) {
		int border = size - 1 - i;
		for(int j = i; j < border; j++) {
			std::cout << m1[i][j] << ' ';
		}
		for(int j = i; j < border; j++) {
			std::cout << m1[j][border] << ' ';
		}
		for(int j = border; j > i; j--) {
			std::cout << m1[border][j] << ' ';
		}
		for(int j = border; j > i; j--) {
			std::cout << m1[j][i] << ' ';
		}
	}
	return 0;
}