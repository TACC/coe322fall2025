#include <iostream>
using std::cout,std::cin;
#include <iomanip>
using std::boolalpha;

bool isprime( int );

int main() {
  int number;
  cin >> number;
  bool number_is_prime = isprime(number);
  cout << boolalpha << number_is_prime << '\n';
  return 0;
}

bool isprime( int number ) {
  for ( int factor=2; factor<number; ++factor ) {
    if ( number%factor==0 ) return false;
  }
  return true;
}

bool isprime2( int number ) {
  bool test_result=true;
  for ( int factor=2; factor<number; ++factor ) { // actually, up to sqrt(number)
    if ( number%factor==0 ) {
      test_result = false;
      break;
    }
  }
  return test_result;
}
