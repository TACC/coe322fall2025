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
  float yvalue() { return y; }; // accessor; usually not needed
  float dx( Point q ) { return x-q.x; };
  float dy( Point q ) { return y-q.y; };
  float distance( Point q ) {
    auto xdist = dx(q); // x-q.x
    auto ydist = y - q.yvalue(); // or ydist = dy(q);
    auto sum_of_squares = xdist*xdist + ydist*ydist; // pow(dx,2) fine with me
    return std::sqrt( sum_of_squares );
  };
};

class Rectangle {
private:
  Point botleft,topright;
public:
  Rectangle( Point bl,Point tr )
    : botleft(bl),topright(tr) {};
  float area() {
    auto w = topright.dx(botleft),
      h = topright.dy(botleft);
    return w*h; };
};

int main() {
  Point p1(1.0,1.0), p2(2.0, 5.0);
  Rectangle r(p1,p2);

  println( "rect area: {}",r.area());

  return 0;
}
// C-k : delete to end of line / delete EOL

// C-x C-w : write file under new name (even new path)
