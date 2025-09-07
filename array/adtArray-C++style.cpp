#include <iostream>

class Array {
 public:
  void display();
  void append(int x);
  void insert(int index, int x);
  void set(int index, int value);
  int remove(int index);
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

void Array::set(int index, int value) {
  if (index >= 0 && index <= length) {
    A[index] = value;
  }
}

Array::~Array() { delete[] A; }

int main(int argc, char const *argv[]) {
  int n;
  Array *arr = new Array;
  std::cout << "Enter number of numbers";
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

  arr->display();

  delete arr;

  return 0;
}
