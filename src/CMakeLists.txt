cmake_minimum_required (VERSION 3.10)

# define the project
project (PuLang)

# set variables
set (CMAKE_BUILD_TYPE Debug)
set (CMAKE_CXX_COMPILER "clang++")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")
set (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)

# add include directories
include_directories (
../include/
../include/antlr4/src/
./grammar/
)

# add link directories
link_directories (../lib/)

# add executables
add_executable (pulang pulang.cpp
	       	       ./grammar/PuLangLexer.cpp
		       ./grammar/PuLangParser.cpp)

# add link libraries
target_link_libraries (pulang antlr4-runtime)
