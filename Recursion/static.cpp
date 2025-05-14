#include <iostream>
using namespace std;

// int x = 0; 전역변수는 데이터 섹션
int constSum(int n) {
  if (n > 0) {
    static int x = 0;  // 1 2 3 4 5 함수당 한개의 변수이다.
    ++x;
    return constSum(n - 1) + x;
  }
  return 0;  // 여기가 마지막 값이다.
}

int decendantSum(int n) {
  if (n > 0) {
    return decendantSum(n - 1) + n;
    /* code */
  }
  return 0;
}

// conclusion: 5 5 5 5 5 0
// conclusion: 5 4 3 2 1 0

int main(int argc, char const *argv[]) {
  int a = 5;
  printf("static Value:%d\n", constSum(a));
  printf("static Vakue:%d\n", constSum(a));

  printf("%d\n", decendantSum(a));
  return 0;
}
