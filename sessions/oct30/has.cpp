#include <print>
using std::println;
#include <memory>
using std::make_shared,std::shared_ptr;

class HasX {
private:
  double x;
public:
  HasX( double x) : x(x) {};
  auto value() { return x; };
  void set(double xx) {
    x = xx; };
};
int main() {
  auto xptr = make_shared<HasX>(5);
  auto yptr = xptr;
  println("y has {}",yptr->value());
  xptr->set(6);
  println("y has {}",yptr->value());
  xptr = nullptr;
  println("y has {}",yptr->value());
  yptr = nullptr;
  println("y has {}",yptr->value());
  return 0;
}
