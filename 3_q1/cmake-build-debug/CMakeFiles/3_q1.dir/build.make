# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/3_q1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3_q1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_q1.dir/flags.make

CMakeFiles/3_q1.dir/q1demo.cpp.o: CMakeFiles/3_q1.dir/flags.make
CMakeFiles/3_q1.dir/q1demo.cpp.o: ../q1demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_q1.dir/q1demo.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3_q1.dir/q1demo.cpp.o -c /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/q1demo.cpp

CMakeFiles/3_q1.dir/q1demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_q1.dir/q1demo.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/q1demo.cpp > CMakeFiles/3_q1.dir/q1demo.cpp.i

CMakeFiles/3_q1.dir/q1demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_q1.dir/q1demo.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/q1demo.cpp -o CMakeFiles/3_q1.dir/q1demo.cpp.s

CMakeFiles/3_q1.dir/q1demo.cpp.o.requires:

.PHONY : CMakeFiles/3_q1.dir/q1demo.cpp.o.requires

CMakeFiles/3_q1.dir/q1demo.cpp.o.provides: CMakeFiles/3_q1.dir/q1demo.cpp.o.requires
	$(MAKE) -f CMakeFiles/3_q1.dir/build.make CMakeFiles/3_q1.dir/q1demo.cpp.o.provides.build
.PHONY : CMakeFiles/3_q1.dir/q1demo.cpp.o.provides

CMakeFiles/3_q1.dir/q1demo.cpp.o.provides.build: CMakeFiles/3_q1.dir/q1demo.cpp.o


CMakeFiles/3_q1.dir/Vehicle.cpp.o: CMakeFiles/3_q1.dir/flags.make
CMakeFiles/3_q1.dir/Vehicle.cpp.o: ../Vehicle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/3_q1.dir/Vehicle.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3_q1.dir/Vehicle.cpp.o -c /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/Vehicle.cpp

CMakeFiles/3_q1.dir/Vehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_q1.dir/Vehicle.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/Vehicle.cpp > CMakeFiles/3_q1.dir/Vehicle.cpp.i

CMakeFiles/3_q1.dir/Vehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_q1.dir/Vehicle.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/Vehicle.cpp -o CMakeFiles/3_q1.dir/Vehicle.cpp.s

CMakeFiles/3_q1.dir/Vehicle.cpp.o.requires:

.PHONY : CMakeFiles/3_q1.dir/Vehicle.cpp.o.requires

CMakeFiles/3_q1.dir/Vehicle.cpp.o.provides: CMakeFiles/3_q1.dir/Vehicle.cpp.o.requires
	$(MAKE) -f CMakeFiles/3_q1.dir/build.make CMakeFiles/3_q1.dir/Vehicle.cpp.o.provides.build
.PHONY : CMakeFiles/3_q1.dir/Vehicle.cpp.o.provides

CMakeFiles/3_q1.dir/Vehicle.cpp.o.provides.build: CMakeFiles/3_q1.dir/Vehicle.cpp.o


CMakeFiles/3_q1.dir/Person.cpp.o: CMakeFiles/3_q1.dir/flags.make
CMakeFiles/3_q1.dir/Person.cpp.o: ../Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/3_q1.dir/Person.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3_q1.dir/Person.cpp.o -c /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/Person.cpp

CMakeFiles/3_q1.dir/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_q1.dir/Person.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/Person.cpp > CMakeFiles/3_q1.dir/Person.cpp.i

CMakeFiles/3_q1.dir/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_q1.dir/Person.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/Person.cpp -o CMakeFiles/3_q1.dir/Person.cpp.s

CMakeFiles/3_q1.dir/Person.cpp.o.requires:

.PHONY : CMakeFiles/3_q1.dir/Person.cpp.o.requires

CMakeFiles/3_q1.dir/Person.cpp.o.provides: CMakeFiles/3_q1.dir/Person.cpp.o.requires
	$(MAKE) -f CMakeFiles/3_q1.dir/build.make CMakeFiles/3_q1.dir/Person.cpp.o.provides.build
.PHONY : CMakeFiles/3_q1.dir/Person.cpp.o.provides

CMakeFiles/3_q1.dir/Person.cpp.o.provides.build: CMakeFiles/3_q1.dir/Person.cpp.o


CMakeFiles/3_q1.dir/FormatMistake.cpp.o: CMakeFiles/3_q1.dir/flags.make
CMakeFiles/3_q1.dir/FormatMistake.cpp.o: ../FormatMistake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/3_q1.dir/FormatMistake.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3_q1.dir/FormatMistake.cpp.o -c /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/FormatMistake.cpp

CMakeFiles/3_q1.dir/FormatMistake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_q1.dir/FormatMistake.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/FormatMistake.cpp > CMakeFiles/3_q1.dir/FormatMistake.cpp.i

CMakeFiles/3_q1.dir/FormatMistake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_q1.dir/FormatMistake.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/FormatMistake.cpp -o CMakeFiles/3_q1.dir/FormatMistake.cpp.s

CMakeFiles/3_q1.dir/FormatMistake.cpp.o.requires:

.PHONY : CMakeFiles/3_q1.dir/FormatMistake.cpp.o.requires

CMakeFiles/3_q1.dir/FormatMistake.cpp.o.provides: CMakeFiles/3_q1.dir/FormatMistake.cpp.o.requires
	$(MAKE) -f CMakeFiles/3_q1.dir/build.make CMakeFiles/3_q1.dir/FormatMistake.cpp.o.provides.build
.PHONY : CMakeFiles/3_q1.dir/FormatMistake.cpp.o.provides

CMakeFiles/3_q1.dir/FormatMistake.cpp.o.provides.build: CMakeFiles/3_q1.dir/FormatMistake.cpp.o


# Object files for target 3_q1
3_q1_OBJECTS = \
"CMakeFiles/3_q1.dir/q1demo.cpp.o" \
"CMakeFiles/3_q1.dir/Vehicle.cpp.o" \
"CMakeFiles/3_q1.dir/Person.cpp.o" \
"CMakeFiles/3_q1.dir/FormatMistake.cpp.o"

# External object files for target 3_q1
3_q1_EXTERNAL_OBJECTS =

3_q1: CMakeFiles/3_q1.dir/q1demo.cpp.o
3_q1: CMakeFiles/3_q1.dir/Vehicle.cpp.o
3_q1: CMakeFiles/3_q1.dir/Person.cpp.o
3_q1: CMakeFiles/3_q1.dir/FormatMistake.cpp.o
3_q1: CMakeFiles/3_q1.dir/build.make
3_q1: CMakeFiles/3_q1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable 3_q1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3_q1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_q1.dir/build: 3_q1

.PHONY : CMakeFiles/3_q1.dir/build

CMakeFiles/3_q1.dir/requires: CMakeFiles/3_q1.dir/q1demo.cpp.o.requires
CMakeFiles/3_q1.dir/requires: CMakeFiles/3_q1.dir/Vehicle.cpp.o.requires
CMakeFiles/3_q1.dir/requires: CMakeFiles/3_q1.dir/Person.cpp.o.requires
CMakeFiles/3_q1.dir/requires: CMakeFiles/3_q1.dir/FormatMistake.cpp.o.requires

.PHONY : CMakeFiles/3_q1.dir/requires

CMakeFiles/3_q1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3_q1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3_q1.dir/clean

CMakeFiles/3_q1.dir/depend:
	cd /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1 /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1 /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug /Users/aki/Documents/CLionProjects/ENSC251/HW/3_q1/cmake-build-debug/CMakeFiles/3_q1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3_q1.dir/depend

