#include <iostream>

int main() {
	const int size = 6;
	int m1[size][size];

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			std::cin >> m1[i][j];
		
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++) {
			int tmp;
			std::cin >> tmp;
			m1[i][j] -= tmp;
		}
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			std::cout << m1[i][j] << ' ';
		std::cout << std::endl;
	}
	return 0;
}