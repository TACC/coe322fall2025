cmake_minimum_required( VERSION 3.12 )
project( ${PROJECTNAME}
  DESCRIPTION "C++ programs for Catch2 testing"
  VERSION 1.0 )

add_executable( ${PROJECTNAME} ${PROJECTNAME}.cxx )
target_compile_features( ${PROJECTNAME} PRIVATE cxx_std_17 )

find_package( PkgConfig REQUIRED )
pkg_check_modules( CATCH2 REQUIRED catch2-with-main )
target_include_directories(
	${PROJECTNAME} PUBLIC
	${CATCH2_INCLUDE_DIRS}
	)
target_link_directories(
	${PROJECTNAME} PUBLIC
	${CATCH2_LIBRARY_DIRS}
	)
target_link_libraries(
	${PROJECTNAME} PUBLIC
	${CATCH2_LIBRARIES}
	)

set_target_properties(
	${PROJECTNAME} PROPERTIES
	BUILD_RPATH   "${CATCH2_LIBRARY_DIRS}"
	INSTALL_RPATH "${CATCH2_LIBRARY_DIRS}"
    )

install( TARGETS ${PROJECTNAME} DESTINATION . )
