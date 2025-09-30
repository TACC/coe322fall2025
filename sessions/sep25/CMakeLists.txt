cmake_minimum_required( VERSION 3.20 )
project( pointclass VERSION 1.0 )

message( "Using sources: pointclass.cpp" )
add_executable( pointclass )
target_sources( pointclass PRIVATE pointclass.cpp )

target_compile_features( pointclass PRIVATE cxx_std_23 )
install( TARGETS pointclass DESTINATION . )
