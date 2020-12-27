#include <iostream>

int main() {
	const int size = 5;
	int a[size][size] = {
		{1,  2, 3, 4, 5},
		{6,  7, 8, 9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	} ;
	for(int i = 0; i < size; i++) {
		for(int j = i; j < size; j++) {
			int tmp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = tmp;
		}
	}

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			std::cout << a[i][j] << '\t';
		}
		std::cout << std::endl;
	}
    return 0;
}
