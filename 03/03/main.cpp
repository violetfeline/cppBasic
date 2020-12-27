#include <iostream>

int main() {
	const int size = 20;
	char S1[size+1] = {0};
	std::cin >> S1;
	int length = 0;
	for(; length < size; length++) {
		if(S1[length] == 0) break;
	}
	for(int i = 0; i < length / 2; i++) {
		if(S1[i] != S1[length-1-i]) {
			std::cout << "NO";
			return 0;
		}

	}
	std::cout << "YES";
	
	return 0;
}