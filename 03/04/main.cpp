#include <iostream>

int main() {
	const int size = 20;
	char str[size+1] = {0};
	char c;
	std::cin >> str;
	std::cin >> c;
	bool found = false;
	for(int i = 0; i < size; i++) {
		if(found) {
			std::cout << str + i;
			break;
		}
		if(str[i] == c) found = true;
	}
	return 0;
}
