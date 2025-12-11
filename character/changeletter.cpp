#include <iostream>

inline char* changeLetter(char copy[]) {
  if (copy[0] >= 97) {
    copy[0] -= 32;
  }
  return copy;
}

int main(int argc, char const* argv[]) {
  char* copy = new char[strlen(argv[1]) + 1];
  strcpy(copy, argv[1]);
  std::cout << changeLetter(copy);
  delete[] copy;
  return 0;
}
