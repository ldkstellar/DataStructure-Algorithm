#include <iostream>

class Matrix
{
    public:
        Matrix() =delete;
        Matrix(int size);
        void display();
        void set(int i, int j, int x);
        ~Matrix();
        
    private:
        int* A;
        int n;
};

void Matrix::display() {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == j) {
        printf("%d ",A[i]);
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
Matrix::Matrix(int size):n(size)
{
    A =  new int[size];
}

Matrix::~Matrix()
{
    delete[] A;
}

int main(int argc, char const *argv[])
{
    Matrix m(4);
    m.set(1, 1, 5);
    m.set(2, 2, 8);
    m.set(3, 3, 9);
    m.set(4, 4, 12);
    m.display();
    return 0;
}
