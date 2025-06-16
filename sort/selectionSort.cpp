#include <iostream>

void selectionSort(int *arr, int size) {
  for (size_t i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (size_t j = i + 1; j < size; j++) {
      if (arr[minIndex] > arr[j]) {
        minIndex = j;
      }
    }
    if (minIndex != i) {
      int temp;
      temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}

int main(int argc, char const *argv[]) {
  int arr[5] = {5, 1, 4, 2, 8};
  selectionSort(arr, 5);
  for (size_t i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";
    /* code */
  }

  return 0;
}
