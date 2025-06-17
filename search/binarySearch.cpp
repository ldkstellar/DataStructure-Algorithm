#include <iostream>

int binarySearch(const int* arr, int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid =
        left +
        (right - left) /
            2;  // 여기서 left를 더하는 이유는 영점에서 중앙을 맞춰 주기 위해서
    if (arr[mid] == target) {
      return mid;
      /* code */
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid + 1;
    }
  }
  return -1;
}

int main(int argc, char const* argv[]) {
  int arr[10] = {1, 2, 4, 5, 7, 13, 24, 41, 51, 71};
  std::cout << binarySearch(arr, 10, 24);

  return 0;
}
