#include <iostream>

class Array {
 public:
  template <typename... Args>
  Array(int size, int length, Args... args);
  int Search(int target);
  ~Array();

 private:
  int* A;
  int size;
  int length;
};
template <typename... Args>
Array::Array(int length, int size, Args... args) : length(length), size(size) {
  A = new int[length]{args...};
}

Array::~Array() { delete[] A; }

int Array::Search(int target) {
  int left = 0;
  int right = length - 1;

  while (left <= right) {
    int mid =
        left +
        (right - left) /
            2;  // 여기서 left를 더하는 이유는 영점에서 중앙을 맞춰 주기 위해서
    if (A[mid] == target) {
      return mid;

    } else if (A[mid] < target) {
      left = mid + 1;
    } else {
      right = mid + 1;
    }
  }
  return -1;
}

int main(int argc, char const* argv[]) {
  Array arr(5, 10, 1, 2, 3, 4, 5);

  int result = arr.Search(5);
  std::cout << result << std::endl;

  return 0;
}
