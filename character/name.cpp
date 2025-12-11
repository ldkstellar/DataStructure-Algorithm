#include <iostream>

int length(char* name) {
  int length = 0;
  while (*name != '\0') {
    length++;
    name++;
  }
  return length;
}
int main(int argc, char const* argv[]) {
  char name[6] = "lee";  // lee000 null character가 포함'\0'
  printf("%d", length(name));
  return 0;
}
