#include <iostream>
class Array {
 public:
  void display();
  void append(int x);
  void insert(int index, int x);
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

void ::Array::insert(int index, int x) {
  if (index >= 0 && index <= length) {
    for (size_t i = length; i > index; i--) A[i] = A[i - 1];
    A[index] = x;
    length++;
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
