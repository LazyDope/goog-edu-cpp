#include <iostream>
int main() {
  int result = 1;
  for (int i = 6; i>=1; i--) {
    result *= i;
  }
  std::cout << result; 
}
