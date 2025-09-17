#include <iostream>
using std::cin;
#include <print>
using std::print,std::println;

int main() {
  int upper{0};
  cin >> upper;
  for (int i=0; i<upper; ++i) {
    for (int j=0; j<upper; ++j)
      print("{} ",i*upper+j);
    println();
  }
  return 0;
}

// ESC x repl-st : replace something by something else
// ESC % : query replace
