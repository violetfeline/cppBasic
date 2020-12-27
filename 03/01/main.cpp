#include <iostream>

int main() {
	const int size = 21;
	char name[size] = {0};
	std::cin >> name;
    for(int i = 0; i < size; i++) {
		if(name[i] == 0) {
			std::cout << i;
			break;
		}
	}
	return 0;
}