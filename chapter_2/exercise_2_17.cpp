// clang-format off
// g++ -std=c++11 -Wall ../chapter_2/exercise_2_17.cpp -o  ./exercise_2_17
// clang-format on

#include <iostream>

int main(int argc, char *argv[]) {
  int i, &ri = i;
  i = 5;
  ri = 10;
  std::cout << i << " " << ri << std::endl;
  return 0;
}
