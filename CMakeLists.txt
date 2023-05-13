cmake_minimum_required(VERSION 3.5)

project(math_fn
				VERSION 1.0.0
				DESCRIPTION "C++ library with math functions"
				LANGUAGES CXX)

# set the C++ standard
set(CMAKE_CXX_STANDARD 11)

file(GLOB
	public_header "*.h")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(${PROJECT_NAME}_lib STATIC 
	${public_header})
