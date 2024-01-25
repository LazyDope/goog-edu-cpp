#include <iostream>
int main() {
  int total_seconds, hours, minutes, seconds;
  std::cout << "Number of seconds: ";
  std::cin >> total_seconds;
  hours = total_seconds / 3600;
  minutes = (total_seconds % 3600) / 60;
  seconds = total_seconds % 60; 
  std::cout << "Hours: " << hours << std::endl << "Minutes: " << minutes << std::endl << "Seconds: " << seconds << std::endl;
}
