#include <iostream>

#include "myArray.h"

int linearSearch(Array& arr, int key) {
  for (size_t i = 0; i < arr.length; i++) {
    if (key == arr.A[i]) {
      return i;
    }
  }
  return -1;
}

int main(int argc, char const* argv[]) {
  Array arr;
  arr.size = 10;
  arr.length = 5;
  arr.A = new int[5]{2, 3, 4, 5, 6};

  printf("%d\n", linearSearch(arr, 6));
  arr.display();
  return 0;
}
