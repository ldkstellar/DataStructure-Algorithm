#include <iostream>
class Diagonal {
 public:
  Diagonal() : n(2), A(new int[2]) {}

  Diagonal(int n) : n(n), A(new int[n]) {}

  ~Diagonal() { delete[] A; }

  void Set(int i, int j, int x);

  int Get(int i, int j);

  void Display();

 private:
  int* A;
  int n;
};

void Diagonal::Set(int i, int j, int x) {  // i,j는 좌표
  if (i == j) A[i - 1] = x;                // 가로질러 x 값을 넣는다.
}
int Diagonal::Get(int i, int j) {  // i,j도 좌표
  if (i == j) return A[i - 1];     // 같으면 좌표 출력
  return 0;
}

void Diagonal::Display() {
  for (int i = 1; i <= n; i++) {
    for (size_t j = 1; j <= n; j++) {
      if (i == j)
        std::cout << A[i - 1] << " ";
      else
        std::cout << "0 ";
    }
    std::cout << std::endl;
  }
}

int main(int argc, char const* argv[]) {
  Diagonal d(4);
  d.Set(1, 1, 5);
  d.Set(2, 2, 8);
  d.Set(3, 3, 9);
  d.Set(4, 4, 12);
  d.Display();
  return 0;
}
