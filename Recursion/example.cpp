#include <iostream>

void func1(int n) {
  if (n > 0) {
    printf("%d\n", n);
    func1(n - 1);
  }
}
// 3 2 1

void func2(int n) {
  if (n > 0) {
    func2(n - 1);  // 모든 func가 다 호출된 후에 printf함수가 실행이 된다.
    printf("%d\n", n);
  }
}
// 1 2 3

int main(int argc, char const *argv[]) {
  func1(3);  // 호출 횟수는 n+1 공간 복잡도 O(n)
  printf("\n");
  func2(3);

  return 0;
}
