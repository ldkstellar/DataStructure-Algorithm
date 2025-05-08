#include <iostream>
using namespace std;

/* 나눠 지면 밑으로 내려간다.*/
int Spow_recursion(int m, int n) {
  if (n == 0) return 1;

  return Spow_recursion(m, n - 1) * m;
  // 한번 리턴한 함수는 다시 리턴 하지 않는다.
}
int Fpow_recursion(int m, int n) {
  if (n == 0) {
    return 1;
  }
  if (n % 2 == 0) {
    return Fpow_recursion(m * m, n / 2);
  }

  return m * Fpow_recursion(m * m, (n - 1) / 2);
}

int main(int argc, char const *argv[]) {
  int r = Spow_recursion(2, 9);
  printf("%d\n", r);
  int q = Fpow_recursion(2, 9);
  printf("%d\n", r);
  return 0;
}
