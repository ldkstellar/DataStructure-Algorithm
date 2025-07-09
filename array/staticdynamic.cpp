#include <iostream>
int main(int argc, char const *argv[]) {
  int A[5];
  int *p;
  // cpp style
  p = new int[5];

  int *q;

  // c style
  //  그냥 캐스팅 은 중괄호이다.
  q = (int *)malloc(5 * sizeof(int));

  delete[] p;
  free(q);
  return 0;
}
