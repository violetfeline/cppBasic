#include <iostream>

int main() {
	const int rows = 6,
              cols = 5;
	int K;
	int m1[rows][cols];
	std::cin >> K;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			std::cin >> m1[i][j];

	for (int i = 0; i < rows; i++) {
		if (i + 1 == K) continue;
		for (int j = 0; j < cols; j++)
			std::cout << m1[i][j] << " ";
		std::cout << std::endl;
	}
	return 0;
}
