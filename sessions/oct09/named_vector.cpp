/*
 * Implementation file for named vectors
 */

#include <format>
using std::format;

#include "named_vector.h"

named_vector::named_vector( string name,int size )
  : name(name),data( vector<float>(size) ) {};
float& named_vector::operator[]( int index ) {
  if ( index<0 )
    throw format("ERROR index {} out of bounds",index);
  if ( index>=data.size() )
    data.push_back(0.f); // not quite correct: only extends by one
  return data[index];
};
