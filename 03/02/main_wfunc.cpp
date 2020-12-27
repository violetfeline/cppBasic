#include <iostream>

void isort(char *array, const int &size) {
    for(int i = 1; i < size; i++) {
        char key = array[i];
        int j = i;
        while(j > 0 && array[j - 1] < key){
            array[j] = array[j - 1];
            j--;
        }
        array[j] = key;
    }
}

int main() {
	const int size = 20;
	char S1[size+1] = {0},
	     S2[size+1] = {0};
	std::cin >> S1;
	std::cin >> S2;
    isort(S1, size);
    isort(S2, size);
	for(int i = 0; i < size && S1[i] != 0; i++) {
		if(S1[i] != S2[i]) {
			std::cout << "NO";
			return 0;
		}
	}
	std::cout << "YES";
	return 0;
}
