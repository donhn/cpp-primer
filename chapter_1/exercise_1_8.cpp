/*
 * Section 1.3
 */

#include <iostream>

// clang-format off
int main() {
  std::cout << "/*";
  std::cout << "*/";
  std::cout << /* "*/ " */;
  // That's messed up.
  std::cout << /* "*/ " /* " /*" */;

  return 0;
}
