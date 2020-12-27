#include <iostream>

int main() {
	const int size = 20;
	char S1[size+1] = {0},
	     S2[size+1] = {0};
	std::cin >> S1;
	std::cin >> S2;
	for(int i = 1; i < size; i++) {
        char key = S1[i];
        int j = i;
        while(j > 0 && S1[j - 1] < key) {
            S1[j] = S1[j - 1];
            j--;
        }
        S1[j] = key;
    }
	for(int i = 1; i < size; i++) {
        char key = S2[i];
        int j = i;
        while(j > 0 && S2[j - 1] < key) {
            S2[j] = S2[j - 1];
            j--;
        }
        S2[j] = key;
    }
	for(int i = 0; i < size && S1[i] != 0; i++) {
		if(S1[i] != S2[i]) {
			std::cout << "NO";
			return 0;
		}
	}
	std::cout << "YES";
	return 0;
}
