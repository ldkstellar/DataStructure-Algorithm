#include <iostream>
int main(int argc, char const *argv[]) {
  int *p, *q;
  p = new int[5]{0};
  p[0] = 3;
  p[1] = 5;
  p[2] = 7;
  p[3] = 9;
  p[4] = 11;

  q = new int[10]{0};
  for (size_t i = 0; i < 5; i++) {
    q[i] = p[i];
  }
  delete[] p;
  p = q;
  q = nullptr;

  for (size_t i = 0; i < 10; i++) {
    printf("%d\n", p[i]);
  }

  delete[] q;

  return 0;
}
