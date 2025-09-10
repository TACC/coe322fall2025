/*
  Include cmath to get `pow' and `abs' functions
*/
#include <cmath>

float f( float x ) {
  // using pow even through x*x is probably just as good, maybe better
  return pow(x,2)-2;
}

float deriv( float x ) {
  return 2*x;
}

int main() {
  float x=10.;
  /*
   * abs used by itself gives a strange error
   * about it being an integer function
   * so use `std::abs'
   */
  while ( std::abs(fx)>1.e-5 ) {
    x = x - 0; // I'm not spelling out the update here
  }
  return 0;
}
