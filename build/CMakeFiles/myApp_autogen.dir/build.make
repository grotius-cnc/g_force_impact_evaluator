# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/gForce

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/gForce/build

# Utility rule file for myApp_autogen.

# Include the progress variables for this target.
include CMakeFiles/myApp_autogen.dir/progress.make

CMakeFiles/myApp_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/gForce/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target myApp"
	/usr/bin/cmake -E cmake_autogen /home/user/gForce/build/CMakeFiles/myApp_autogen.dir/AutogenInfo.json ""

myApp_autogen: CMakeFiles/myApp_autogen
myApp_autogen: CMakeFiles/myApp_autogen.dir/build.make

.PHONY : myApp_autogen

# Rule to build all files generated by this target.
CMakeFiles/myApp_autogen.dir/build: myApp_autogen

.PHONY : CMakeFiles/myApp_autogen.dir/build

CMakeFiles/myApp_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myApp_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myApp_autogen.dir/clean

CMakeFiles/myApp_autogen.dir/depend:
	cd /home/user/gForce/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/gForce /home/user/gForce /home/user/gForce/build /home/user/gForce/build /home/user/gForce/build/CMakeFiles/myApp_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myApp_autogen.dir/depend

