#include <iostream>
int fun(int a) {
  if (a > 0)

  {
    return fun(a - 1) + a;  // 리턴값 후에 연산을 한다
  }

  return 0;
}

int main(int argc, char const *argv[]) {
  int a = 5;
  fun(5);
  return 0;
}
