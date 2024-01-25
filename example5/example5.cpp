#include <iostream>
int main() {
  for (int horses = 0; horses < 10; horses++) {
    int bal = 1000 - horses*100;
    for (int pigs = 0; (pigs * 30) <= bal; pigs++) {
      int new_bal = bal - pigs * 30;
      for (int rabbits = 0; (rabbits * 5) <= new_bal; rabbits++) {
        if ((new_bal - rabbits * 5) == 0 && (horses + pigs + rabbits) == 100) {
          std::cout << "Horses: " << horses << ", Pigs: " << pigs << ", Rabbits: " << rabbits << std::endl;
          return 0;
        }
      }
    }
  }
  std::cout << "No solution";
  return 1;
}
