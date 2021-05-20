#define CATCH_CONFIG_MAIN
#include <string>

#include <catch2/catch.hpp>

#include "fizzbuzz.hpp"

TEST_CASE("FizzBuzz", "[fizzbuzz]") {
  auto expected = std::vector<std::string>{
    "1",        "2",    "Fizz", "4",    "Buzz", "Fizz", "7",
    "8",        "Fizz", "Buzz", "11",   "Fizz", "13",   "14",
    "FizzBuzz", "16",   "17",   "Fizz", "19",   "Buzz"
  };

  for (auto i = 1; i <= 21; ++i) {
    REQUIRE(fizzbuzz(i) == expected[i]);
  }
}
