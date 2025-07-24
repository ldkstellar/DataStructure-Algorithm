#include <iostream>
class Array {
 public:
  int *A;
  int size;
  int length;
  void display();
  ~Array();
};

void Array::display() {
  for (size_t i = 0; i < length; i++) {
    std::cout << A[i] << " ";
  }
  std::cout << "\n";
}

Array::~Array() { delete[] A; }

int main(int argc, char const *argv[]) {
  int n;
  Array *arr = new Array;
  std::cout << "Enter number of numbers";
  std::cin >> arr->size;
  arr->A = new int[arr->size];

  std::cout << "Enter all Elements" << std::endl;
  std::cin.clear();
  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    std::cin >> arr->A[i];
  }
  arr->length = n;
  arr->display();

  delete arr;

  return 0;
}
