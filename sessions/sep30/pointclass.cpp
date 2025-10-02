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
  // // alternatively
  // Point(float in_x,float in_y)
  //   : x(in_x),y(in_y) {};
  // // alternatively
  // Point(float x,float y)
  //   : x(x),y(y) {};
  Point operator*( float scalar ) {
    return Point( x*scalar, y*scalar );
  };
  float distance_to_origin() { return std::sqrt(x*x+y*y); }; 
};

// C-x u : undo

int main() {
  Point p1(1.0,1.0);
  println( "Distance to origin: {:6.4}",
           p1.distance_to_origin() );
  Point p2 = p1*2;
  println( "Distance to origin: {:6.4}",
           p2.distance_to_origin() );
  return 0;
}
