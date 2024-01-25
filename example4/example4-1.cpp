#include <cstdlib>
#include <iostream>
int gcd(int a, int b) {
  int large, small;
  if (a == b) {
    return std::abs(a);
  } else if (a > b) {
    large = std::abs(a);
    small = std::abs(b);
  } else {
    large = std::abs(b);
    small = std::abs(a);
  }
  
  int result;
  do {
    result = large % small; 
    large = small;
    small = result;
  } while (result != 0);
  return large;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b);
}
