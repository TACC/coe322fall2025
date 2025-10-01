// object/stream.cpp
#include <print>
using std::println;

class Stream {
private:
  int last_result{0};
public:
  int next() {
    auto old = last_result;
    last_result += 2;
    return old; };
};

int main() {
  Stream ints;
  println("Next: {}",
	  ints.next() );
  println("Next: {}",
	  ints.next() );
  println("Next: {}",
	  ints.next()
	  );
  return 0;
}

// C-x repl-st : replace string
// C-x repl-reg :
