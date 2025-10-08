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
  Point p;
  float h,w;
public:
  // does not work:
  // needs a default constructor for Point
  // Rectangle( Point pp,float ww,float hh ) {
  //   p = pp; w = ww; h = hh; };

  // Better: use member initializers
  Rectangle( Point pp,float ww,float hh )
    : p(pp),w(ww),h(hh) {};
  float area() { return w*h; };
};

class Square : public Rectangle {
public:
  Square( Point pp,float dimension )
    : Rectangle(pp,dimension,dimension) {};
};

// x^4 = x*x * (same)
// x^n takes log_2(n) multiplication

int main() {
  Point p1(1.0,1.0);
  Rectangle r(p1, 5,7 ); 

  Square s(p1,4);
  println( "square area: {}",s.area());

  return 0;
}
// C-k : delete to end of line / delete EOL
