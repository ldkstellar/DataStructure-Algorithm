#include <iostream>
int fun(int a, int result) {
  if (a > 0)

  {
    return fun(a - 1, a * result);  // 리턴값 전 호출시간에 연산을 한다.
  }
  // 스택이 메번 쌓이지 않는다. 즉 한번 호출 하고 pop하는 것이다.

  return result;
}

int main(int argc, char const *argv[]) {
  printf("%d", fun(5, 1));
  return 0;
}

// 리턴값이 없으면 0 0 0 0 0 0 0 스택포인터가
// 마지막으로 이동하고 그값을 리턴