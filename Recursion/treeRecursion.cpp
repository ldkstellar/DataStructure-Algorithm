#include <iostream>
using namespace std;

// timecomplex is 2^n ~= 2^n+1

void fun(int n) {
  if (n > 0) {
    printf("%d", n);  // 3 2 ,1
    fun(n - 1);       //2 -> 1
                      // 2 1
                      //2 -> 1
    printf("\n");
    fun(n - 1);
  }
}

int main(int argc, char const *argv[]) {
  fun(3);
  return 0;
}
