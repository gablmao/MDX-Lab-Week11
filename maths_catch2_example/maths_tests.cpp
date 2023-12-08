#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "maths.h"

TEST_CASE("test primes", "[is_prime]")
{
  REQUIRE(is_prime(2) == true);
  REQUIRE(is_prime(3) == true);
  REQUIRE(is_prime(4) == false);
  REQUIRE(is_prime(5) == true);
  REQUIRE(is_prime(6) == false);
  REQUIRE(is_prime(7) == true);
  REQUIRE(is_prime(8) == false);
  REQUIRE(is_prime(9) == false);
}

TEST_CASE("test absolute", "[absolute]")
{
  /*number <= -1  -->  positive number
  if positive, return positive
  */
  REQUIRE(absolute(2) == 2);
  REQUIRE(absolute(-2) == 2);
  REQUIRE(absolute(4) == 4);
  REQUIRE(absolute(-4) == 4);
}

TEST_CASE("test power", "[power]")
{
  //power(number, exponent)
  CHECK(power(2, 2) == 4);
  CHECK(power(2, 3) == 6);  //this is to purposely get a fail
  CHECK(power(2, 4) == 16);
  CHECK(power(2, 5) == 32);
}
