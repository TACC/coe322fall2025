/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017-2025 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** linktests.cpp : Catch2 tests for linked lists
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;

#include <random>
#include <string>

#include "linklib.hpp"

#define CATCH_CONFIG_MAIN
#include "catch2/catch_all.hpp"

TEST_CASE( "length testing" ) {
  List mylist;
  INFO( "Length of empty list" );
  REQUIRE( mylist.length()==0 );
  /*
  INFO( "Empty list has no headnode" );
  REQUIRE_THROWS( mylist.headnode() );
  */
  
  /*
  INFO( "After inserting 3" );
  mylist.insert(3);
  REQUIRE( mylist.length()==1 );
  REQUIRE( mylist.contains_value(3) );
  REQUIRE( not mylist.contains_value(4) );
  */
}

#if 0
TEST_CASE( "multiplicity" ) {
  List mylist;
  mylist.insert(3);
  INFO( "insert the same element again" );
  REQUIRE_NOTHROW( mylist.insert(3) );
  REQUIRE( mylist.length()==1 );
  REQUIRE( mylist.contains_value(3) );
  Node headnode;
  REQUIRE_NOTHROW( headnode = mylist.headnode() );
  REQUIRE( headnode.value()==3 );
  REQUIRE( headnode.count()==2 );
}

TEST_CASE( "inserting at the head" ) {
  List mylist;
  mylist.insert(3);
  INFO( "Insert lower element should go at the head" );
  REQUIRE_NOTHROW( mylist.insert(2) );
  REQUIRE( mylist.length()==2 );
  REQUIRE( mylist.contains_value(2) );
  REQUIRE( mylist.contains_value(3) );
  
  Node headnode;
  INFO( "The head node should have 2, not 3" );
  REQUIRE_NOTHROW( headnode = mylist.headnode() );
  REQUIRE( headnode.value()==2 );
  REQUIRE( headnode.count()==1 );
}

TEST_CASE( "Appending at the tail" ) {
  List mylist;
  INFO( "Establish list from the previous test" );
  for ( auto n : {3,2,6} )
    mylist.insert(n); 

  INFO( "Now append a highest value" );
  REQUIRE_NOTHROW( mylist.insert(6) );
  REQUIRE( mylist.length()==3 );
  REQUIRE( mylist.contains_value(6) );
}

TEST_CASE( "Insert in the middle" ) {
  List mylist;
  INFO( "Establish list from the previous test" );
  for ( auto n : {3,2,6} )
    mylist.insert(n); 

  INFO( "Now insert an element in the middle" );
  REQUIRE_NOTHROW( mylist.insert(4) );
  REQUIRE( mylist.length()==4 );
  REQUIRE( mylist.contains_value(4) );
  REQUIRE( mylist.contains_value(3) );
}

TEST_CASE( "Inspection" ) {
  List mylist;
  INFO( "Establish list from the previous test" );
  for ( auto n : {3,2,6,4} )
    mylist.insert(n);

  REQUIRE_THROWS( mylist.nth_node(-1) );
  REQUIRE_THROWS( mylist.nth_node(4) );
  REQUIRE_NOTHROW( mylist.nth_node(1) );
  Node should_be_3 = mylist.nth_node(1);
  REQUIRE( should_be_3.value()==3 );
}

TEST_CASE( "Another check" ) {

  std::random_device r;
  std::default_random_engine generator{r()};
  std::uniform_real_distribution<float> distribution(-10,10);

  List mylist;
  for ( int i=0; i<50; ++i )
    REQUIRE_NOTHROW( mylist.insert( distribution(generator) ) );

  cout << mylist.as_string() << '\n';
  REQUIRE( mylist.is_sorted() );
}

#endif
