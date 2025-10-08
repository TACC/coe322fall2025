#include <print>
using std::println;
#include <string>
using std::string;
#include <vector>
using std::vector;

class named_vector {
private:
  string name;
  vector<float> data;
public:
  named_vector( string name,int size )
    : name(name),data( vector<float>(size) ) {};
  float& operator[]( int index ) {
    return data[index];
  };
};

int main() {
  named_vector things
    = named_vector("thing vector",50);
  things[0] = 5.f;
  println("{}",things[0]);
  return 0;
}
