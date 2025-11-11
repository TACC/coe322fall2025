cmake_minimum_required( VERSION 3.12 )
project( linktests
  DESCRIPTION "C++ programs for Catch2 testing"
  VERSION 1.0 )

add_executable( linktests )
target_sources( linktests PRIVATE linktests.cpp linklib.cpp linklib.hpp )
target_compile_features( linktests PRIVATE cxx_std_23 )

find_package( PkgConfig REQUIRED )
pkg_check_modules( CATCH2 REQUIRED catch2-with-main )
target_include_directories(
	linktests PUBLIC
	${CATCH2_INCLUDE_DIRS}
	)
target_link_directories(
	linktests PUBLIC
	${CATCH2_LIBRARY_DIRS}
	)
target_link_libraries(
	linktests PUBLIC
	${CATCH2_LIBRARIES}
	)

install( TARGETS linktests DESTINATION . )
