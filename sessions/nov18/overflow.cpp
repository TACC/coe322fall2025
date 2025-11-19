#include <iostream>
using std::cout;

void f() {
  short int n;
  for ( ; ; n++ ) {
    short int n2 = n*n;
    cout << n2 << '\n';
  }
}

int main () {
  
  f();

  return 0;
}
