#include <iostream>
using namespace std;
void funB(int n);  // 컴파일시 코드섹션에서 함수를 알아야한다.

void funA(int n) {
  if (n > 0) {
    printf("%d ", n);
    funB(n - 1);
  }
}

void funB(int n) {
  if (n > 1) {
    printf("%d ", n);
    funA(n / 2);
    /* code */
  }
}
int main(int argc, char const *argv[]) {
  funA(20);
  return 0;
}
