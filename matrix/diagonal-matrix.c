#include <stdio.h>

struct Matrix {
  int n;
  int A[10];
};

void display(struct Matrix* m) {
  int i, j;
  for (i = 0; i < m->n; i++) {
    for (j = 0; j < m->n; j++) {
      if (i == j) {
        printf("%d ", m->A[i]);
      } else {
        printf("0 ");
      }
    }
    printf("\n");
  }
}

void set(struct Matrix*m,int i, int j, int x) {
  if (i == j) {
    m->A[i - 1] = x;
  }
}

int main(int argc, char const *argv[]) {
  struct Matrix m={4};
  
  set(&m,1, 1, 5);
  set(&m,2, 2, 8);
  set(&m,3, 3, 9);
  set(&m,4, 4, 12);
  display(&m);

  return 0;
}
