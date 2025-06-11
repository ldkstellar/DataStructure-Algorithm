#include <iostream>
using namespace std;

int fibo(int n) {
  int t0 = 0, t1 = 1, s;
  if (n <= 1) return n;

  for (size_t i = 2; i <= n; i++) {
    s = t0 + t1;
    t0 = t1;
    t1 = s;
  }
  return s;
}

int main(int argc, char const *argv[]) {
  int result = fibo(7);
  cout << result;
  return 0;
}
