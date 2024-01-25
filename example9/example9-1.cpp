#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char file_name[20];
  // Collect the data.
  cout << "Enter the name of the file: "; cin >> file_name;

  // Create an ofstream called People, open the stream for output.
  ifstream People(file_name, ios::in);
  // Write the output to the stream.
  while (true) {
    char first_name[30], last_name[30]; int age;
    if (!(People >> first_name >> last_name >> age)) {
      break;
    }
    cout << "Name: " << first_name << " " << last_name << ", Age: " << age << endl;
  }
  
  return 0;
} 
