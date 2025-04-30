#include <iostream>
using namespace std;
int fun(int n) {
  if (n > 100) {
    return n - 10;
    /* code */
  } else {
    return fun(fun(n + 11));
  }
}

int main(int argc, char const *argv[]) {
  int r;
  r = fun(99);
  printf("%d\n", r);
  return 0;
}
