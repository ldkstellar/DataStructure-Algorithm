#include <iostream>
int main(int argc, char const *argv[]) {
  int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};
  int *p[3];
  for (size_t i = 0; i < 3; i++) {
    p[i] = new int[4]{0};
  }

  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 4; j++) {
      printf("%d", p[i][j]);
    }
    printf("\n");
  }

  for (size_t i = 0; i < 3; i++) {
    delete[] p[i];
  }

  printf("\n");

  // using double pointer
  int **q = new int *[3];
  for (size_t i = 0; i < 3; i++) {
    q[i] = new int[4]{0};
  }

  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 4; j++) {
      printf("%d", q[i][j]);
    }
    printf("\n");
  }

  for (size_t i = 0; i < 3; i++) {
    delete[] q[i];
    /* code */
  }
  delete[] q;

  return 0;
}
