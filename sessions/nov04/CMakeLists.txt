cmake_minimum_required( VERSION 3.12 )
project( safesqrt
  DESCRIPTION "C++ programs for Catch2 testing"
  VERSION 1.0 )

add_executable( safesqrt safesqrt.cpp )
target_compile_features( safesqrt PRIVATE cxx_std_23 )

find_package( PkgConfig REQUIRED )
pkg_check_modules( CATCH2 REQUIRED catch2-with-main )
target_include_directories(
	safesqrt PUBLIC
	${CATCH2_INCLUDE_DIRS}
	)
target_link_directories(
	safesqrt PUBLIC
	${CATCH2_LIBRARY_DIRS}
	)
target_link_libraries(
	safesqrt PUBLIC
	${CATCH2_LIBRARIES}
	)

install( TARGETS safesqrt DESTINATION . )
