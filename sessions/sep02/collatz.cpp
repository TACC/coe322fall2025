#include <iostream>
using std::cout,std::cin;

int main() {
  int starting_value;
  cin >> starting_value;
  int iteration_length=0;
  for ( int current_value=starting_value; current_value!=1; ++iteration_length ) {
    if (current_value%2==0)
      // it's even, divide by 2
      current_value /= 2;
    else
      // it's odd
      current_value = 3*current_value+1;
    // cout << current_value << '\n';
  }
  cout << "Starting at " << starting_value << " it took " << iteration_length << " iterations\n";

  return 0;
}

// C-p : previous line
// C-n : next line

// C-k : `kill' to end of line (next, kill end of line)
// C-y : `yank back' : paste
