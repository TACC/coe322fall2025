/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-2025 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** queenlib.h : header file for the 8-queens problem
 ****
 ****************************************************************/

#include <optional>
#include <vector>

using myclock = std::chrono::high_resolution_clock;

class ChessBoard {
public:
  enum magic { invalid=-2,empty=-1 };
private:
  std::vector<int> columns;
public:
  ChessBoard(int n);

  ChessBoard( int n,std::vector<int> cols );
  ChessBoard( std::vector<int> cols );

  int size() const { return columns.size(); };

  int next_row_to_be_filled() 
    const;

  void place_next_queen_at_column(int i);

  std::optional<ChessBoard> place_queens()
     const;

  bool filled() const {
    return columns.back()!=ChessBoard::magic::empty; };

  bool feasible() 
    const;

  void print() const;
};

