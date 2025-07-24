#include <stdio.h>
#include <stdlib.h>
struct Array {
  int *A;
  int size;
  int length;
  /* data */
};

void display(struct Array array) {
  for (size_t i = 0; i < array.length; i++) {
    printf("%d ", array.A[i]);
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  struct Array arr;
  int n;
  printf("Enter the size of array!\n");
  scanf("%d", &arr.size);
  arr.A = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0;
  printf("Enter all Elements\n");
  scanf("%d", &n);

  for (size_t i = 0; i < n; i++) {
    scanf("%d", &arr.A[i]);
  }
  arr.length = n;
  display(arr);
  free(arr.A);

  return 0;
}
