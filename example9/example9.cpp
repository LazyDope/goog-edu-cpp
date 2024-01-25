#include <fstream>
#include <iostream>

int main() {
  std::string file_name;
  // Collect the data.
  std::cout << "Enter the name of the file: ";
  std::getline(std::cin, file_name);

  // Create an ofstream called People, open the stream for output.
  std::ofstream People(file_name, std::ios::out);

  while (true) {
    std::string first_name, last_name; int age;
    std::cout << "Enter First Name: ";
    std::getline(std::cin, first_name);
    if (first_name.empty()) {
      break;
    }
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, last_name);
    if (last_name.empty()) {
      break;
    }
    std::cout << "Enter Age: ";
    std::string age_str;
    std::getline(std::cin, age_str);
    if (age_str.empty()) {
      break;
    }

    try {
      age = std::atoi(age_str.c_str());
    } catch (...) {
      break;
    }

    // Write the output to the stream.
    People << first_name << std::endl << last_name << std::endl << age << std::endl;
  }
  return 0;
} 
