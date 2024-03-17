#include <iostream>

int main(int argc, char *argv[]) {
  int i = 0;

  if (i == 5) {
    std::cout << "x is 5" << std::endl;
  } else {
    std::cout << "x is not 5" << std::endl;
  }

  int x = 0;
  for (i = 0; i < 10; i++) {
    x += i;
  }
  return 0;
}
