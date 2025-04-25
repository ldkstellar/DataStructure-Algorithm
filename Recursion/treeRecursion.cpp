#include <iostream>
using namespace std;

// timecomplex is 2^n ~= 2^n+1

void fun(int n) {
  if (n > 0) {
    printf("%d", n);
    fun(n - 1);
    printf("\n");
    fun(n - 1);

    /* code */
  }
}

int main(int argc, char const *argv[]) {
  fun(5);
  return 0;
}
