#include <iostream>
using std::cout;
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
  auto x=10.f;
  float fx = 10.f, fprimex = 10.f;
  /*
   * abs used by itself gives a strange error
   * about it being an integer function
   * so use `std::abs'
   */
  while ( std::abs(fx)>1.e-5 ) {
    fx = f(x);
    fprimex = deriv(x);
    x = x - fx/fprimex; // I'm not spelling out the update here
    cout << x << " : " << fx << '\n';
  }
  return 0;
}
