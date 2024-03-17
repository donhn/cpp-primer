// clang-format off
// g++ -std=c++11 -Wall ../chapter_3/exercise_3_43.cpp -o  ./exercise_3_43
// clang-format on

/* Exercise 3.43
 * Write three different versions of a program to print the elements of ia. One
 * version should use a range for to manage the iteration, the other two should
 * use an ordinary for loop in one case using subscripts and in the other using
 * pointers. In all three programs write all the types directly. That is, do not
 * use a type alias, auto, or decltype to simplify the code.
 */

#include <array>
#include <iostream>

int main(int argc, char *argv[]) {
  int ia[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
  // 1. Range for loop.
  std::cout << "Range for loop: " << std::endl;
  for (const int(&row)[4] : ia) {
    for (const int col : row) {
      std::cout << col << " ";
    }
    std::cout << std::endl;
  }

  // 2. Subscript for loop.
  std::cout << "Subscript for loop: " << std::endl;
  for (size_t row = 0; row < 3; ++row) {
    for (size_t col = 0; col < 4; ++col) {
      std::cout << ia[row][col] << " ";
    }
    std::cout << std::endl;
  }

  // 3. Iterator for loop.
  std::cout << "Iterator for loop: " << std::endl;
  for (int(*row)[4] = std::begin(ia); row != std::end(ia); ++row) {
    for (int *col = std::begin(*row); col != std::end(*row); col++) {
      std::cout << *col << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
