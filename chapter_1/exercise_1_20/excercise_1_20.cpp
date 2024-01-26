// clang-format off
// g++ -std=c++17 -I ../chapter_1/exercise_1_20/ -Wall ../chapter_1/exercise_1_20/excercise_1_20.cpp -o  ./exercise_1_20
// clang-format on

#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  std::cout << item1 << "\n" << item2 << std::endl;
  return 0;
}
