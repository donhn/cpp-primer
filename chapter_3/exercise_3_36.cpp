// clang-format off
// g++ -std=c++11 -Wall ../chapter_3/exercise_3_36.cpp -o  ./exercise_3_36
// clang-format on

/* Exercise 3.36
 * Write a program to compare two arrays for equality. Write a similar program
 * to compare two vectors.
 */

#include <array>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  int ia[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int ia2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 10};

  int *ptr_ia = std::begin(ia);
  int *ia_end = std::end(ia);
  int *ptr_ia2 = std::begin(ia2);
  int *ia2_end = std::end(ia2);

  std::ptrdiff_t size_ia = ia_end - ptr_ia;
  std::ptrdiff_t size_ia2 = ia2_end - ptr_ia2;

  // Compare size.
  if (size_ia != size_ia2) {
    std::cout << "Arrays are not of equal length: " << size_ia
              << " != " << size_ia2 << std::endl;
  } else {
    std::cout << "Array sizes match: " << size_ia << " == " << size_ia2
              << std::endl;
    std::cout << "Checking elements..." << std::endl;
    while (ptr_ia < ia_end && ptr_ia2 < ia2_end) {
      if (*ptr_ia == *ptr_ia2) {
        std::cout << "Elements match: " << *ptr_ia << " == " << *ptr_ia2
                  << std::endl;
        ++ptr_ia;
        ++ptr_ia2;
      } else {
        std::cout << "Array elements do not match: " << *ptr_ia
                  << " != " << *ptr_ia2 << std::endl;
        break;
      }
    }
  }

  std::vector<int> iv{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> iv2{0, 1, 2, 3, 4, 5, 6, 7, 8, 10};

  if (iv == iv2) {
    std::cout << "Vectors are the same." << std::endl;
  } else {
    std::cout << "Vectors are different." << std::endl;
  }

  return 0;
}
