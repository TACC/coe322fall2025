// object/stream.cpp
class Stream {
private:
  int last_result{0};
public:
  int next() {
    return last_result++; };
};

int main() {
  Stream ints;
  println("Next: {}"
	  ,
	  ints.next() );
  println("Next: {}"
	  ints.next() );
  println("Next: {}"
	  ,
	  ,
	  ints.next()
	  );
  return 0;
}

// C-x repl-st : replace string
// C-x repl-reg :
