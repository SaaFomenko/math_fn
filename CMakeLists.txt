cmake_minimum_required(VERSION 3.10)

project(math_fn
				VERSION 1.0.0
				DESCRIPTION "C++ library with math functions"
				LANGUAGES CXX)

file(GLOB
	source "*.cpp")

add_library(${PROJECT_NAME}_lib ${source})
