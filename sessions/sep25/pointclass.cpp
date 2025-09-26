/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017-2025 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** poitnclass.cxx : Point class skeleton
 ****
 ****************************************************************/

#include <print>
using std::print,std::println;

#include <cmath>
using std::sqrt;

class Point {
private:
  float x,y;
public:
  Point(float in_x,float in_y) {
    x = in_x; y = in_y; };
  float distance_to_origin() {
    return sqrt( x*x + y*y );
  };
  float yvalue() { return y; }; // accessor
  float dx( Point q ) { x-q.x; };
  float dy( Point q ) { y-q.y; };
  float distance( Point q ) {
    auto xdist = dx(q); // x-q.x
    auto ydist = y - q.yvalue(); // or ydist = dy(q);
    auto sum_of_squares = dx*dx + dy*dy; // pow(dx,2) fine with me
    return std::sqrt( sum_of_squares );
  };
};

// x^4 = x*x * (same)
// x^n takes log_2(n) multiplication

int main() {
  Point p1(1.0,1.0);
  Point p2(1.f,2.f);
  float d = p1.distance(p2);
  println( "Distance between: {:6.4}",
           d );

  return 0;
}
// C-k : delete to end of line / delete EOL
