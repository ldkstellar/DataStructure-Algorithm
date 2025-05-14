#include <chrono>
#include <iostream>
using namespace std;
using namespace chrono;
/* 나눠 지면 밑으로 내려간다.*/
long long int Spow_recursion(int m, int n) {
  if (n == 0) return 1;

  return Spow_recursion(m, n - 1) * m;
  // 한번 리턴한 함수는 다시 리턴 하지 않는다.
}

long long int Fpow_recursion(long long int m, int n) {
  if (n == 0) {
    return 1;
  }
  if (n % 2 == 0) {
    return Fpow_recursion(m * m, n / 2);
  }

  return m * Fpow_recursion(m * m, (n - 1) / 2);
}

int main(int argc, char const *argv[]) {
  auto slowStart = high_resolution_clock::now();
  long long int r = Spow_recursion(2, 50);
  auto slowEnd = high_resolution_clock::now();
  auto slowDuration = duration_cast<microseconds>(slowEnd - slowStart);
  cout << "느린 알고리즘 시간:" << slowDuration.count() << "ms" << endl;
  auto fastStart = high_resolution_clock::now();
  long long int q = Fpow_recursion(2, 50);
  auto fastEnd = high_resolution_clock::now();
  auto fastDuration = duration_cast<microseconds>(fastEnd - fastStart);
  cout << "빠른 알고리즘 시간:" << fastDuration.count() << "ms" << endl;
  printf("%lld\n", r);
  printf("%lld\n", q);
  return 0;
}
