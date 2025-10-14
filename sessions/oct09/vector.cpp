#include <print>
using std::println;

#include "named_vector.h"

int main() {
  named_vector things
    = named_vector("thing vector",50);
  try {
    things[51] = 5.f;
  } catch ( string s) { println("assignment went wrong: {}",s); }
  println("{}",things[0]);
  return 0;
}
