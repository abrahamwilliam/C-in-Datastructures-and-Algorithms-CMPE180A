cmake_minimum_required(VERSION 3.8)
project(arraysvector)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TestSuite.h TestSuite.cpp SortedVector.h SortedVector.cpp Node.cpp Node.h SortedList.cpp SortedList.h)
add_executable(arraysvector ${SOURCE_FILES})