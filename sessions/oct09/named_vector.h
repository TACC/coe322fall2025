/*
 * Header file for named vectors
 */

#include <string>
using std::string;
#include <vector>
using std::vector;

class named_vector {
private:
  string name;
  vector<float> data;
  bool check{false};
 public:
  named_vector( string ,int  );
  float& operator[]( int index );
};
