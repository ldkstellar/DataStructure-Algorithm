#include <iostream>

int sum(int n) {
  if (n == 0) {
    return 0;
    /* code */
  } else {
    return sum(n - 1) + n;
  }
}

int fomulaSum(int n) { return n * (2 + n - 1) / 2; }  // Sn 구하는 공식

// for문을 활용한 sn 구하는 공식
int iSum(int n) {
  int s = 0;
  int i;
  for (i = 0; i <= n; i++) {
    s = s + i;
  }
  return s;
}
int main(int argc, char const *argv[]) {
  std::cout << sum(5) << std::endl;
  std::cout << fomulaSum(5) << std::endl;
  std::cout << iSum(5) << std::endl;
  return 0;
}
// 두가지로 보아야 한다.
