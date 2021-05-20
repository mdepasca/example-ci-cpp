#include <iostream>
#include <cstdlib>
#include "fizzbuzz.hpp"

int main() {
  for (auto i = 0; i < 100; ++i) {
    std::cout << fizzbuzz(i) << std::endl;
  }
}
