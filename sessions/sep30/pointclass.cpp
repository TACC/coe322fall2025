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
  // naive
  Point(float in_x,float in_y) {
    x = in_x; y = in_y; };
  // alternatively
  Point(float in_x,float in_y)
    : x(in_x),y(in_y) {};
  // alternatively
  Point(float x,float y)
    : x(x),y(y) {};
};

// C-x u : undo

int main() {
  Point p1(1.0,1.0);
  float d = p1.distance_to_origin();
  println( "Distance to origin: {:6.4}",
           d );

  return 0;
}
