// clang-format off
// g++ -std=c++11 -Wall ../chapter_2/exercise_2_8.cpp -o  ./exercise_2_8
// clang-format on

/*
 * Exercise 2.8
 * Using escape sequences, write a program to print 2M followed by a newline.
 * Modify the program to print 2, then a tab, then an M, followed by a new line.
 *
 */

#include <iostream>

int main(int argc, char *argv[]) {

  std::cout << "\x32\x4D\x0A";
  std::cout << "\x32\x09\x4D\x0A";

  return 0;
}
