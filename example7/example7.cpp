#include <ios>
#include <iostream>
#include <limits>
#include <ostream>

constexpr auto max_size = std::numeric_limits<std::streamsize>::max();

template <typename T>
void get_input(T* ref) {
  while (!(std::cin >> *ref)) {
    std::cin.clear();
    std::cin.ignore(max_size, '\n');
    std::cout << "Bad input, try again";
  }
}

float comp1() {
  return 600;
}

float comp2(int weekly_sales) {
  return 7 * 40 + weekly_sales * 225 * 0.1;
}

float comp3(int weekly_sales) {
  return weekly_sales * (225 * 0.2 + 20);
}

int main() {
  int weekly_sales;

  std::cout << "Enter weekly sales: " << std::endl;
  get_input(&weekly_sales);
  std::cout << "Compensation method 1: " << comp1() << std::endl;
  std::cout << "Compensation method 2: " << comp2(weekly_sales) << std::endl;
  std::cout << "Compensation method 3: " << comp3(weekly_sales) << std::endl;
}
