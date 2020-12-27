#include <iostream>
#include <climits>

int main() {

	const int size = 1000;
	int a[size] = {0};
	int n;
	int MAX = INT_MIN;
	std::cin >> n;
	int MAX_INDEX = -1;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if(a[i] > MAX && a[i] < 0) {
			MAX = a[i];
			MAX_INDEX = i;
		}
	}
	if(MAX == INT_MIN) {
		MAX = 0;
	} 
	std::cout << MAX << ' ' << MAX_INDEX;
	return 0;
}