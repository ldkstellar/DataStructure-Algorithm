#include <iostream>
struct Sample {
  int id;
  int number;
  char name[6];
  /* data */
};

int main(int argc, char const* argv[]) {
  Sample* sample = new Sample{1, 2, "name"};

  delete sample;

  return 0;
}
