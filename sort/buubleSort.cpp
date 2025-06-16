#include <iostream>
void buubleSort(int* arr, size_t size) {
  bool swapped;
  for (size_t i = 0; i < size - 1; i++) {
    swapped = false;
    for (size_t j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped) break;
  }
}

int main(int argc, char const* argv[]) {
  int arr[5] = {5, 1, 4, 2, 8};
  buubleSort(arr, 5);
  for (size_t i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";
    /* code */
  }

  return 0;
}
