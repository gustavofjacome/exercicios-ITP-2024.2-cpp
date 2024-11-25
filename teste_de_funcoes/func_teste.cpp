#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "func.cpp"

TEST_CASE("calculando potencia") {
  CHECK(power(3, 3) == 9);
  CHECK(power(5, 5) == 3125);
  CHECK(power(2, 2) == 4);
  CHECK(power(9, 2) == 81);
  CHECK(power(0, 0) == 0);
}