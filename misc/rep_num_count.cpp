#include <iostream>
 
int main() {
    const int n = 10;
    int a[n];
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i;
        while(a[j - 1] > key && j >= 0){
            a[j] = a[j - 1];
            j--;
        }
        a[j] = key;
    }
    
    int count = 1;
    int most_rep = a[0];
    int most_rep_count = 1;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] == a[i + 1]){
            count++;
        } else {
            count = 1;
        }
        if(count > most_rep_count){
            most_rep_count = count;
            most_rep = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl << "most_rep=" << most_rep << " count=" << most_rep_count << std::endl;
    return 0;
}
