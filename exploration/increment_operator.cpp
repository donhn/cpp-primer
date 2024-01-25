/*
 * What's the difference between ++i and i++?
 */

#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  int sum = 0;

  // For loops results in the same value whether using pre or post increment.
  // The increment happens after execution of the block so does not affect
  // the output.
  for (int i = 0; i < 10; i++) {
    std::cout << "Post-increment operator: " << i << std::endl;
    sum += i;
  }
  std::cout << "Post-increment sum: " << sum << std::endl;

  sum = 0;
  for (int i = 0; i < 10; ++i) {
    std::cout << "Pre-increment operator: " << i << std::endl;
    sum += i;
  }
  std::cout << "Pre-increment sum: " << sum << std::endl;

  // These result in different outputs but intuitively make sense.
  // Using the post-increment operator, the statement executes using the
  // original value of i before incrementing it.
  // Using the pre-increment operator, the value of i is incremented first
  // and then used in the statement.
  //
  // Clang warns you that i is changing in the middle of the statement.
  // Could be dangerous in situations like:
  // data[i] = i++;
  //
  // Does data[i] evaluate first or i++? This is undefined behavior.
  //
  // Example output:
  // Post-increment operator: Before: 8 During: 8 After: 9
  // Pre-increment operator: Before: 8 During: 9 After: 9
  int i = 0;
  while (i < 10) {
    std::cout << "Post-increment operator: Before: " << i << " During: " << i++
              << " After: " << i << std::endl;
  }

  i = 0;
  while (i < 10) {
    std::cout << "Pre-increment operator: Before: " << i << " During: " << ++i
              << " After: " << i << std::endl;
  }

  // Right hand side evaluates first such that rhs = 0, then i = 1
  // then data[i] is evaluated, but now i is 1, so data[1] = 0
  // Before:
  // data[0] = 0
  // data[1] = 1
  // After:
  // data[0] = 0
  // data[1] = 0
  std::vector<int> data{0, 1};
  i = 0;
  for (i = 0; i < data.size(); i++) {
    std::cout << "data[" << i << "] = " << data[i] << std::endl;
  }

  i = 0;
  data[i] = i++;

  for (i = 0; i < data.size(); i++) {
    std::cout << "data[" << i << "] = " << data[i] << std::endl;
  }

  return 0;
}
