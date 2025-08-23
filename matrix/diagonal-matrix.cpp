#include <iostream>
class Matrix {
 public:
  void set(int i, int j, int x);
  void display();
  int n;

 private:
  int A[10];
};

void Matrix::display() {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == j) {
        printf("%d ", A[i]);
      } else {
        printf("0 ");
      }
    }
    printf("\n");
  }
}
void Matrix::set(int i, int j, int x) {
  if (i == j) {
    A[i - 1] = x;
  }
}

int main(int argc, char const *argv[]) {
  Matrix m;
  m.n = 4;
  m.set(1, 1, 5);
  m.set(2, 2, 8);
  m.set(3, 3, 9);
  m.set(4, 4, 12);
  m.display();

  return 0;
}
