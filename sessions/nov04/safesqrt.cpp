#include <cmath>

#define CATCH_CONFIG_MAIN
#include "catch2/catch_all.hpp"

double safe_root(double x) {
  return std::sqrt(x);
};

TEST_CASE( "test sqrt function" ) {
  REQUIRE( safe_root(4.0)==2.0 );
  REQUIRE( safe_root(4.0)==3.0 );

}
