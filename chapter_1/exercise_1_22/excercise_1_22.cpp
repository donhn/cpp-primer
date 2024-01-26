// clang-format off
// g++ -std=c++17 -I ../chapter_1/exercise_1_22/ -Wall ../chapter_1/exercise_1_22/excercise_1_22.cpp -o  ./exercise_1_22
// clang-format on

#include "Sales_item.h"
#include <iostream>
#include <string>

int main() {
  std::cout << "Input ISBN: " << std::endl;
  std::string isbn = "";
  std::cin >> isbn;
  Sales_item item1{isbn};

  Sales_item tmp;
  std::cout << "Input transaction for " << item1.isbn() << std::endl;
  while (std::cin >> tmp) {
    item1 += tmp;
  }
  std::cout << "Sum of transactions: " << item1 << std::endl;

  return 0;
}
