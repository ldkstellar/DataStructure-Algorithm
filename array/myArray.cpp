#pragma once
#include <iostream>

#include "myArray.h"
void Array::display() {
  for (size_t i = 0; i < length; i++) {
    std::cout << A[i] << " ";
  }
  std::cout << "\n";
}

void Array::append(int x) {
  if (length < size) {
    A[length++] = x;
  }
}

void Array::insert(int index, int x) {
  if (index >= 0 && index <= length) {
    for (size_t i = length; i > index; i--) A[i] = A[i - 1];
    A[index] = x;
    length++;
  }
}

int Array::remove(int index) {
  int x = 0;
  if (index >= 0 && index < length) {
    x = A[index];
    for (size_t i = index; i < length - 1; i++) {
      A[i] = A[i + 1];
      length--;
      return x;
    }
  }
  return 0;
}

Array::~Array() { delete[] A; }