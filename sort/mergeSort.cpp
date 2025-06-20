#include <iostream>
#define MAX_SIZE 8
int sorted[MAX_SIZE];

void merge(int* list, int left, int mid, int right) {
  int i, j, k, l;
  i = left;
  j = mid + 1;
  k = left;

  while (i <= mid && j <= right) {
    if (list[i] <= list[j])
      sorted[k++] = list[i++];
    else
      sorted[k++] = list[j++];
  }
  // 무조건 남는게 있다.
  if (i > mid)
    for (l = j; l <= right; l++) sorted[k++] = list[l];

  else
    for (l = i; l <= mid; l++) sorted[k++] = list[l];

  for (l = left; l <= right; l++) list[l] = sorted[l];
}

void merge_sort(int* list, int left, int right) {
  int mid;
  if (left < right) {
    mid = (left + right) / 2;
    merge_sort(list, left, mid);
    merge_sort(list, mid + 1, right);
    merge(list, left, mid, right);
  }
}
int main(int argc, char const* argv[]) {
  int n = MAX_SIZE;
  int list[8] = {21, 10, 12, 20, 25, 13, 15, 22};
  merge_sort(list, 0, n - 1);

  for (size_t i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }

  return 0;
}
