#include <climits>
#include <iostream>
#include <random>
int rand_num() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> rng(1, 100);
  return rng(gen);
}

int main() {
  int target = rand_num();

  int guess = 0;
  while (true) {
    std::cout << "Enter your guess: ";
    if (!(std::cin >> guess)) {
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      std::cout << "Please enter a number" << std::endl;
      continue;
    }
    if (guess == target) {
      break;
    } else if (guess < target) {
      std::cout << "WRONG: Too Low" << std::endl;
    } else {
      std::cout << "WRONG: Too High" << std::endl;
    }
  }
  std::cout << "You win!" << std::endl;
}
