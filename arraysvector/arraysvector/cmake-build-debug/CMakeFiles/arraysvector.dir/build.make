# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/padma/CLionProjects/arraysvector

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/padma/CLionProjects/arraysvector/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/arraysvector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arraysvector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arraysvector.dir/flags.make

CMakeFiles/arraysvector.dir/main.cpp.o: CMakeFiles/arraysvector.dir/flags.make
CMakeFiles/arraysvector.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/padma/CLionProjects/arraysvector/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arraysvector.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arraysvector.dir/main.cpp.o -c /Users/padma/CLionProjects/arraysvector/main.cpp

CMakeFiles/arraysvector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arraysvector.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/padma/CLionProjects/arraysvector/main.cpp > CMakeFiles/arraysvector.dir/main.cpp.i

CMakeFiles/arraysvector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arraysvector.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/padma/CLionProjects/arraysvector/main.cpp -o CMakeFiles/arraysvector.dir/main.cpp.s

CMakeFiles/arraysvector.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/arraysvector.dir/main.cpp.o.requires

CMakeFiles/arraysvector.dir/main.cpp.o.provides: CMakeFiles/arraysvector.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/arraysvector.dir/build.make CMakeFiles/arraysvector.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/arraysvector.dir/main.cpp.o.provides

CMakeFiles/arraysvector.dir/main.cpp.o.provides.build: CMakeFiles/arraysvector.dir/main.cpp.o


CMakeFiles/arraysvector.dir/TestSuite.cpp.o: CMakeFiles/arraysvector.dir/flags.make
CMakeFiles/arraysvector.dir/TestSuite.cpp.o: ../TestSuite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/padma/CLionProjects/arraysvector/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/arraysvector.dir/TestSuite.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arraysvector.dir/TestSuite.cpp.o -c /Users/padma/CLionProjects/arraysvector/TestSuite.cpp

CMakeFiles/arraysvector.dir/TestSuite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arraysvector.dir/TestSuite.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/padma/CLionProjects/arraysvector/TestSuite.cpp > CMakeFiles/arraysvector.dir/TestSuite.cpp.i

CMakeFiles/arraysvector.dir/TestSuite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arraysvector.dir/TestSuite.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/padma/CLionProjects/arraysvector/TestSuite.cpp -o CMakeFiles/arraysvector.dir/TestSuite.cpp.s

CMakeFiles/arraysvector.dir/TestSuite.cpp.o.requires:

.PHONY : CMakeFiles/arraysvector.dir/TestSuite.cpp.o.requires

CMakeFiles/arraysvector.dir/TestSuite.cpp.o.provides: CMakeFiles/arraysvector.dir/TestSuite.cpp.o.requires
	$(MAKE) -f CMakeFiles/arraysvector.dir/build.make CMakeFiles/arraysvector.dir/TestSuite.cpp.o.provides.build
.PHONY : CMakeFiles/arraysvector.dir/TestSuite.cpp.o.provides

CMakeFiles/arraysvector.dir/TestSuite.cpp.o.provides.build: CMakeFiles/arraysvector.dir/TestSuite.cpp.o


CMakeFiles/arraysvector.dir/SortedVector.cpp.o: CMakeFiles/arraysvector.dir/flags.make
CMakeFiles/arraysvector.dir/SortedVector.cpp.o: ../SortedVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/padma/CLionProjects/arraysvector/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/arraysvector.dir/SortedVector.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arraysvector.dir/SortedVector.cpp.o -c /Users/padma/CLionProjects/arraysvector/SortedVector.cpp

CMakeFiles/arraysvector.dir/SortedVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arraysvector.dir/SortedVector.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/padma/CLionProjects/arraysvector/SortedVector.cpp > CMakeFiles/arraysvector.dir/SortedVector.cpp.i

CMakeFiles/arraysvector.dir/SortedVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arraysvector.dir/SortedVector.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/padma/CLionProjects/arraysvector/SortedVector.cpp -o CMakeFiles/arraysvector.dir/SortedVector.cpp.s

CMakeFiles/arraysvector.dir/SortedVector.cpp.o.requires:

.PHONY : CMakeFiles/arraysvector.dir/SortedVector.cpp.o.requires

CMakeFiles/arraysvector.dir/SortedVector.cpp.o.provides: CMakeFiles/arraysvector.dir/SortedVector.cpp.o.requires
	$(MAKE) -f CMakeFiles/arraysvector.dir/build.make CMakeFiles/arraysvector.dir/SortedVector.cpp.o.provides.build
.PHONY : CMakeFiles/arraysvector.dir/SortedVector.cpp.o.provides

CMakeFiles/arraysvector.dir/SortedVector.cpp.o.provides.build: CMakeFiles/arraysvector.dir/SortedVector.cpp.o


CMakeFiles/arraysvector.dir/Node.cpp.o: CMakeFiles/arraysvector.dir/flags.make
CMakeFiles/arraysvector.dir/Node.cpp.o: ../Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/padma/CLionProjects/arraysvector/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/arraysvector.dir/Node.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arraysvector.dir/Node.cpp.o -c /Users/padma/CLionProjects/arraysvector/Node.cpp

CMakeFiles/arraysvector.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arraysvector.dir/Node.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/padma/CLionProjects/arraysvector/Node.cpp > CMakeFiles/arraysvector.dir/Node.cpp.i

CMakeFiles/arraysvector.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arraysvector.dir/Node.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/padma/CLionProjects/arraysvector/Node.cpp -o CMakeFiles/arraysvector.dir/Node.cpp.s

CMakeFiles/arraysvector.dir/Node.cpp.o.requires:

.PHONY : CMakeFiles/arraysvector.dir/Node.cpp.o.requires

CMakeFiles/arraysvector.dir/Node.cpp.o.provides: CMakeFiles/arraysvector.dir/Node.cpp.o.requires
	$(MAKE) -f CMakeFiles/arraysvector.dir/build.make CMakeFiles/arraysvector.dir/Node.cpp.o.provides.build
.PHONY : CMakeFiles/arraysvector.dir/Node.cpp.o.provides

CMakeFiles/arraysvector.dir/Node.cpp.o.provides.build: CMakeFiles/arraysvector.dir/Node.cpp.o


CMakeFiles/arraysvector.dir/SortedList.cpp.o: CMakeFiles/arraysvector.dir/flags.make
CMakeFiles/arraysvector.dir/SortedList.cpp.o: ../SortedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/padma/CLionProjects/arraysvector/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/arraysvector.dir/SortedList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arraysvector.dir/SortedList.cpp.o -c /Users/padma/CLionProjects/arraysvector/SortedList.cpp

CMakeFiles/arraysvector.dir/SortedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arraysvector.dir/SortedList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/padma/CLionProjects/arraysvector/SortedList.cpp > CMakeFiles/arraysvector.dir/SortedList.cpp.i

CMakeFiles/arraysvector.dir/SortedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arraysvector.dir/SortedList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/padma/CLionProjects/arraysvector/SortedList.cpp -o CMakeFiles/arraysvector.dir/SortedList.cpp.s

CMakeFiles/arraysvector.dir/SortedList.cpp.o.requires:

.PHONY : CMakeFiles/arraysvector.dir/SortedList.cpp.o.requires

CMakeFiles/arraysvector.dir/SortedList.cpp.o.provides: CMakeFiles/arraysvector.dir/SortedList.cpp.o.requires
	$(MAKE) -f CMakeFiles/arraysvector.dir/build.make CMakeFiles/arraysvector.dir/SortedList.cpp.o.provides.build
.PHONY : CMakeFiles/arraysvector.dir/SortedList.cpp.o.provides

CMakeFiles/arraysvector.dir/SortedList.cpp.o.provides.build: CMakeFiles/arraysvector.dir/SortedList.cpp.o


# Object files for target arraysvector
arraysvector_OBJECTS = \
"CMakeFiles/arraysvector.dir/main.cpp.o" \
"CMakeFiles/arraysvector.dir/TestSuite.cpp.o" \
"CMakeFiles/arraysvector.dir/SortedVector.cpp.o" \
"CMakeFiles/arraysvector.dir/Node.cpp.o" \
"CMakeFiles/arraysvector.dir/SortedList.cpp.o"

# External object files for target arraysvector
arraysvector_EXTERNAL_OBJECTS =

arraysvector: CMakeFiles/arraysvector.dir/main.cpp.o
arraysvector: CMakeFiles/arraysvector.dir/TestSuite.cpp.o
arraysvector: CMakeFiles/arraysvector.dir/SortedVector.cpp.o
arraysvector: CMakeFiles/arraysvector.dir/Node.cpp.o
arraysvector: CMakeFiles/arraysvector.dir/SortedList.cpp.o
arraysvector: CMakeFiles/arraysvector.dir/build.make
arraysvector: CMakeFiles/arraysvector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/padma/CLionProjects/arraysvector/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable arraysvector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arraysvector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arraysvector.dir/build: arraysvector

.PHONY : CMakeFiles/arraysvector.dir/build

CMakeFiles/arraysvector.dir/requires: CMakeFiles/arraysvector.dir/main.cpp.o.requires
CMakeFiles/arraysvector.dir/requires: CMakeFiles/arraysvector.dir/TestSuite.cpp.o.requires
CMakeFiles/arraysvector.dir/requires: CMakeFiles/arraysvector.dir/SortedVector.cpp.o.requires
CMakeFiles/arraysvector.dir/requires: CMakeFiles/arraysvector.dir/Node.cpp.o.requires
CMakeFiles/arraysvector.dir/requires: CMakeFiles/arraysvector.dir/SortedList.cpp.o.requires

.PHONY : CMakeFiles/arraysvector.dir/requires

CMakeFiles/arraysvector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arraysvector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arraysvector.dir/clean

CMakeFiles/arraysvector.dir/depend:
	cd /Users/padma/CLionProjects/arraysvector/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/padma/CLionProjects/arraysvector /Users/padma/CLionProjects/arraysvector /Users/padma/CLionProjects/arraysvector/cmake-build-debug /Users/padma/CLionProjects/arraysvector/cmake-build-debug /Users/padma/CLionProjects/arraysvector/cmake-build-debug/CMakeFiles/arraysvector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arraysvector.dir/depend

