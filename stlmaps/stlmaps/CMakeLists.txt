cmake_minimum_required(VERSION 3.8)
project(stlmaps)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Constitution.cpp TimedContainer.cpp TimedContainer.h Word.cpp Word.h WordMap.cpp WordMap.h WordVector.cpp WordVector.h)
add_executable(stlmaps ${SOURCE_FILES})