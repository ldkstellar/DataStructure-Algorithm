#include <iostream>

class Array {
 public:
  void display();
  void append(int x);
  void insert(int index, int x);
  void set(int index, int value);
  int remove(int index);
  int sum();
  float avg();
  int max();
  int reverse();
  void reverse2();
  ~Array();
  int *A;
  int size;
  int length;
};

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

float Array::avg() {
  int total = 0;
  for (size_t i = 0; i < length; i++) {
    total = total + A[i];
  }

  return (float)total / length;
}

int Array::sum() {
  int total = 0;
  for (size_t i = 0; i < length; i++) {
    total = total + A[i];
  }
  return total;
}

int Array::max() {
  int max = A[0];
  for (size_t i = 0; i < length; i++) {
    if (A[i] > max) {
      max = A[i];
    }
  }
  return max;
}

void Array::set(int index, int value) {
  if (index >= 0 && index <= length) {
    A[index] = value;
  }
}

int Array::reverse() {
  int *temp;
  temp = new int[size];

  for (int i = length - 1, j = 0; i >= 0; i--, j++) {
    temp[i] = A[j];
  }
  delete[] A;
  A = nullptr;  // delete 후 nullptr로 초기화.

  if (!A) {
    A = temp;
    return 1;
  }
  return -1;
}
void Array::reverse2() {
  int i, j;
  for (i = 0, j = length - 1; i < j; i++, j--) {
    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
  }
}
Array::~Array() { delete[] A; }

int main(int argc, char const *argv[]) {
  int n;
  Array *arr = new Array;
  std::cout << "Enter number of numbers" << std::endl;
  std::cin >> arr->size;
  arr->A = new int[arr->size];

  std::cout << "Enter all Elements" << std::endl;
  std::cin.ignore();
  std::cin >> n;
  arr->length = n;
  for (size_t i = 0; i < n; i++) {
    std::cin >> arr->A[i];
  }
  arr->append(45);
  arr->reverse();
  arr->display();
  std::cout << arr->avg();

  delete arr;

  return 0;
}
