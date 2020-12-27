#include <iostream>

int arr_max(int* target, int* last, int max) {
  if (target > last)
    return max;
  if (*target > max)
    max = *target;
  return arr_max(target + 1, last, max);
}

int arr_max2(int* arr, int size) {
  if (size == 1)
    return arr[0];
  int tmp = arr_max2(arr, size - 1);
  return std::max(arr[size - 1], tmp);
}

int main() {
  int a[10] = {1,15,368,44,5,66,7,8,9,10};
  std::cout << arr_max(a, a + 9, a[0]);
}
