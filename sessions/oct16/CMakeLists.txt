cmake_minimum_required( VERSION 3.12 )
project( optioncode
  DESCRIPTION "C++ programs for Cxxopts testing"
  VERSION 1.0 )

add_executable( optioncode options.cpp )
target_compile_features( optioncode PRIVATE cxx_std_23 )

find_package( PkgConfig REQUIRED )
pkg_check_modules( OPTS REQUIRED cxxopts )
message( STATUS "Cxxopts includes: ${OPTS_INCLUDE_DIRS}" )

target_include_directories(
        optioncode PUBLIC
        ${OPTS_INCLUDE_DIRS}
	)

install( TARGETS optioncode DESTINATION . )
