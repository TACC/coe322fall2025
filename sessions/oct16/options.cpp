#include <iostream>
using std::cout;
#include "cxxopts.hpp"

int main( int argc,char** argv ) {
  cxxopts::Options options
    ("cxxopts","Commandline options demo");
  options.add_options()("h,help","Usage information");
  options.add_options()
    ("n,ntimes","number of times",cxxopts::value<int>()->default_value("37"));

  auto result = options.parse(argc,argv);
  if ( result.count("h") ) {
    cout << options.help() << '\n';
  }
  int ntimes = 0;
  if ( result.count("n") )
    ntimes = result["ntimes"].as<int>();
  cout << ntimes << '\n';

  return 0;
}

