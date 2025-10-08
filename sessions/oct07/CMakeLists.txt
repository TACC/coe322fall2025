cmake_minimum_required( VERSION 3.20 )
project( pointclass VERSION 1.0 )

message( "Using sources: vector.cpp" )
add_executable( vector )
target_sources( vector PRIVATE vector.cpp )

target_compile_features( vector PRIVATE cxx_std_23 )
install( TARGETS vector DESTINATION . )
