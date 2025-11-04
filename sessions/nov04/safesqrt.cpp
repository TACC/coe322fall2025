#include <cmath>

#define CATCH_CONFIG_MAIN
#include "catch2/catch_all.hpp"

double safe_root(double x) {
  return std::sqrt(x);
};

TEST_CASE( "test sqrt function" ) {
}
