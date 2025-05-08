#include <iostream>

int factorial(int n) {
  int sum = 1;
  for (size_t i = 2; i <= n; i++) {
    sum *= i;
  }
  return sum;
}

int factorial_recursion(int n) {
  if (n == 0) {
    return 1;
  } else {
    return factorial_recursion(n - 1) + n;
  }
}
int main(int argc, char const *argv[]) { return 0; }
