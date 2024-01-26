// clang-format off
// g++ -std=c++17 -I ../chapter_1/exercise_1_21/ -Wall ../chapter_1/exercise_1_21/excercise_1_21.cpp -o  ./exercise_1_21
// clang-format on

#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item1, item2;
  std::cout << "Input two sales with the same ISBN: " << std::endl;
  std::cin >> item1 >> item2;
  if (item1.isbn() != item2.isbn()) {
    std::cout << "ISBN do not match." << std::endl;
    return -1;
  }

  std::cout << "Sum of transactions: " << item1 + item2 << std::endl;

  return 0;
}
