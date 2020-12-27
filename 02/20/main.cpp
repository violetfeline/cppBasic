#include <iostream>
 
int main() {
    const int size = 1000;
    int a[size] = {0};
	int N;
	std::cin >> N;
    for(int i = 0; i < N; i++){
        std::cin >> a[i];
    }
    for(int i = 1; i < N; i++) {
        int key = a[i];
        int j = i;
        while(j > 0 && a[j - 1] < key){
            a[j] = a[j - 1];
            j--;
        }
        a[j] = key;
    }
 
    for(int i = 0; i < N; i++){
        std::cout << a[i] << ' ';
    }
    return 0;
}
