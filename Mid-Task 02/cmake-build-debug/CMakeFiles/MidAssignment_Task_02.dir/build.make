# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /cygdrive/c/Users/KHAN/AppData/Local/JetBrains/CLion2020.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/KHAN/AppData/Local/JetBrains/CLion2020.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MidAssignment_Task_02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MidAssignment_Task_02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MidAssignment_Task_02.dir/flags.make

CMakeFiles/MidAssignment_Task_02.dir/main.cpp.o: CMakeFiles/MidAssignment_Task_02.dir/flags.make
CMakeFiles/MidAssignment_Task_02.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MidAssignment_Task_02.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MidAssignment_Task_02.dir/main.cpp.o -c "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/main.cpp"

CMakeFiles/MidAssignment_Task_02.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MidAssignment_Task_02.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/main.cpp" > CMakeFiles/MidAssignment_Task_02.dir/main.cpp.i

CMakeFiles/MidAssignment_Task_02.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MidAssignment_Task_02.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/main.cpp" -o CMakeFiles/MidAssignment_Task_02.dir/main.cpp.s

# Object files for target MidAssignment_Task_02
MidAssignment_Task_02_OBJECTS = \
"CMakeFiles/MidAssignment_Task_02.dir/main.cpp.o"

# External object files for target MidAssignment_Task_02
MidAssignment_Task_02_EXTERNAL_OBJECTS =

MidAssignment_Task_02.exe: CMakeFiles/MidAssignment_Task_02.dir/main.cpp.o
MidAssignment_Task_02.exe: CMakeFiles/MidAssignment_Task_02.dir/build.make
MidAssignment_Task_02.exe: CMakeFiles/MidAssignment_Task_02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MidAssignment_Task_02.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MidAssignment_Task_02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MidAssignment_Task_02.dir/build: MidAssignment_Task_02.exe

.PHONY : CMakeFiles/MidAssignment_Task_02.dir/build

CMakeFiles/MidAssignment_Task_02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MidAssignment_Task_02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MidAssignment_Task_02.dir/clean

CMakeFiles/MidAssignment_Task_02.dir/depend:
	cd "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02" "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02" "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/cmake-build-debug" "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/cmake-build-debug" "/cygdrive/d/NSU--1821448042/coding/CSE225L/Mid-Task 02/cmake-build-debug/CMakeFiles/MidAssignment_Task_02.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MidAssignment_Task_02.dir/depend

