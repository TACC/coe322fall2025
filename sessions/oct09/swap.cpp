#include <iostream>
using namespace std;

// Note wrong name!
void swop ( int &i , int& j ) { /* swap code */ };

int main() {
  int i,j;
  // Note right name!
  swap(i,j);
}
