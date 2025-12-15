#include <iostream>

int main(int argc, char const* argv[]) {
    //포인터 써도되는데 11부터 경고뿜는다 포인터로 string으로 쓰면 안된다.
  char university[] = "고려대학교";

  for (size_t i = 0; university[i] != '\0'; i++) {
    printf("%c", university[i]);
  }

  return 0;
} 
