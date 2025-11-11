/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018-2025 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** quadlib.hpp : headers for quadratic equation roots
 ****
 ****************************************************************/

#include <tuple>
#include <variant>

using quadratic = std::tuple<double,double,double>;

double evaluate( quadratic coefficients, double x );
double discriminant( quadratic coefficients );
bool approx_zero( double x, quadratic coefficients );
bool discriminant_zero( quadratic coefficients );
double simple_root( quadratic coefficients );
std::pair<double,double> double_root( quadratic coefficients );
std::variant< std::monostate,double, std::pair<double,double> > 
    compute_roots( quadratic coefficients);
