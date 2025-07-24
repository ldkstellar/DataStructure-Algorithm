#include <cmath>
#include <iostream>
void TOH(int n, int A, int B, int C) {
  if (n > 0) {
    TOH(n - 1, A, C, B);
    printf("%d %d\n", A, C);

    TOH(n - 1, B, A, C);
  }
  // printf("%d", num);
}

int main(int argc, char const *argv[]) {
  int n = 0;
  std::cin >> n;
  int result = pow(2, n);
  printf("%d\n", result - 1);
  TOH(n, 1, 2, 3);
  return 0;
}
