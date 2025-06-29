#include <iostream>
static int *f = new int[10];
int fib(int n) {
  for (size_t i = 0; i < n; i++) f[i] = -1;
  if (n <= 1) {
    f[n] = n;
    return n;
    /* code */
  } else {
    if (f[n - 2] == -1) f[n - 2] = fib(n - 2);
    if (f[n - 1] == -1) f[n - 1] = fib(n - 1);
    return f[n - 2] + f[n - 1];
  }
}

int main(int argc, char const *argv[]) {
  int result = fib(2);
  std::cout << result;
  delete[] f;
  return 0;
}
