#include <iostream>

int main() {
	const int rows = 5,
              cols = 10;
	int m1[rows][cols];

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			std::cin >> m1[i][j];

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++)
			std::cout << m1[j][i] << "\t";
		std::cout << std::endl;
	}
	return 0;
}