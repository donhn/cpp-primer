// clang-format off
// g++ -std=c++17 -I ../chapter_1/exercise_1_25/ -Wall ../chapter_1/exercise_1_25/excercise_1_25.cpp -o  ./exercise_1_25
// clang-format on

#include "Sales_item.h"
#include <iostream>
#include <string>

int main() {
  Sales_item total;
  std::cout << "Enter sales item: " << std::endl;
  if (std::cin >> total) {
    Sales_item trans;
    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total += trans;
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }

  } else {
    std::cout << "No data." << std::endl;
    return -1;
  }

  return 0;
}
