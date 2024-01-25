#include <iostream>
#include <string>

#define kChirpOffset 40.0
#define kChirpDivisor 4.0

int main(int argc, char *argv[]){
  int chirps;
  if (argc > 1) {
    chirps = std::stoi(argv[1]);
  } else {
    return 1;
  }
  std::cout << "Temperature: " << (chirps + kChirpOffset) / kChirpDivisor << std::endl;
}
