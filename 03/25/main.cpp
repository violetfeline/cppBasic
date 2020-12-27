#include <iostream>

int main() {
	const int size = 10;
	const int merged = size * 2;
	int a[size];
	int b[size];
	int c[merged];
	for(int i = 0; i < size; i++) std::cin >> a[i];
	for(int i = 0; i < size; i++) std::cin >> b[i];
	int i = 0;
	int j = 0;
	int k = 0;
	while(i < size && j < size) {
		if(a[i] <= b[j]) {
			c[k] = a[i];
			i++;
		} else {
			c[k] = b[j];
			j++;
		}
		k++;
	}
	while(i < size) c[k++] = a[i++];
	while(j < size) c[k++] = b[j++];
	i = 0;
	while(i < merged) {
		std::cout << c[i] << ' ';
		i++;
	}
	return 0;
}
