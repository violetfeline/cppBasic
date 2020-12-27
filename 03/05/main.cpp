#include <iostream>

int main() {
	const int size = 20;
	char S1[size+1] = {0},
		 S2[size+1] = {0};
	std::cin >> S1;
	std::cin >> S2;
	for(int i = 0; S1[i] != 0; i++) {
		bool found = false;
		if(S1[i] == S2[0]) {
			found = true;
			for(int j = 1; S2[j] != 0; j++) {
				if(S1[i+j] != S2[j]) {
					found = false;
					i += j;
					break;
				}
			}
		}
		if(found) {
			std::cout << "YES";
			return 0;
		}
	}
	std::cout << "NO";
	return 0;
}