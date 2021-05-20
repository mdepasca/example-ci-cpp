#define CATCH_CONFIG_MAIN
#include <string>

#include <catch.hpp>

#include "fizzbuzz.hpp"

TEST_CASE("FizzBuzz", "[fizzbuzz]") {
  auto expected = std::vector<std::string>{
    "1",        "2",    "Fizz", "4",    "Buzz", "Fizz", "7",
    "8",        "Fizz", "Buzz", "11",   "Fizz", "13",   "14",
    "FizzBuzz", "16",   "17",   "Fizz", "19",   "Buzz"
  };

  for (auto i = 0; i < expected.size(); ++i) {
    REQUIRE(fizzbuzz(i+1) == expected[i]);
  }
}
