#include <iostream>
using std::cout;
/*
  Include cmath to get `pow' and `abs' functions
*/
#include <cmath>

int main() {
  auto x=10.f;
  float fx = 10.f, fprimex = 10.f;

  auto f = [] ( float x ) -> float { // return type spelled out
    return x*x-2; };

  auto deriv = [] ( float x ) { // return type implicitly determined
    return 2*x; };

  while ( std::abs(fx)>1.e-5 ) {
    fx = f(x);
    fprimex = deriv(x);
    x = x - fx/fprimex; // I'm not spelling out the update here
    cout << x << " : " << fx << '\n';
  }
  return 0;
}

// C-x C-w : write under different name
// move text:
// C-k : kill text; twice to kill line & line end; you could even do multiple lines
// C-y : yank back the kill buffer.
