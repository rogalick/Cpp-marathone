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
CMAKE_COMMAND = /Users/dgoncharen/.brew/Cellar/cmake/3.18.1/bin/cmake

# The command to remove a file.
RM = /Users/dgoncharen/.brew/Cellar/cmake/3.18.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dgoncharen/Desktop/sprints/sprint05/t03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dgoncharen/Desktop/sprints/sprint05/t03/build

# Include any dependencies generated for this target.
include app/Utils/CMakeFiles/algorithmUtils.dir/depend.make

# Include the progress variables for this target.
include app/Utils/CMakeFiles/algorithmUtils.dir/progress.make

# Include the compile flags for this target's objects.
include app/Utils/CMakeFiles/algorithmUtils.dir/flags.make

app/Utils/CMakeFiles/algorithmUtils.dir/help.cpp.o: app/Utils/CMakeFiles/algorithmUtils.dir/flags.make
app/Utils/CMakeFiles/algorithmUtils.dir/help.cpp.o: ../app/Utils/help.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dgoncharen/Desktop/sprints/sprint05/t03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/Utils/CMakeFiles/algorithmUtils.dir/help.cpp.o"
	cd /Users/dgoncharen/Desktop/sprints/sprint05/t03/build/app/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/algorithmUtils.dir/help.cpp.o -c /Users/dgoncharen/Desktop/sprints/sprint05/t03/app/Utils/help.cpp

app/Utils/CMakeFiles/algorithmUtils.dir/help.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algorithmUtils.dir/help.cpp.i"
	cd /Users/dgoncharen/Desktop/sprints/sprint05/t03/build/app/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dgoncharen/Desktop/sprints/sprint05/t03/app/Utils/help.cpp > CMakeFiles/algorithmUtils.dir/help.cpp.i

app/Utils/CMakeFiles/algorithmUtils.dir/help.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algorithmUtils.dir/help.cpp.s"
	cd /Users/dgoncharen/Desktop/sprints/sprint05/t03/build/app/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dgoncharen/Desktop/sprints/sprint05/t03/app/Utils/help.cpp -o CMakeFiles/algorithmUtils.dir/help.cpp.s

# Object files for target algorithmUtils
algorithmUtils_OBJECTS = \
"CMakeFiles/algorithmUtils.dir/help.cpp.o"

# External object files for target algorithmUtils
algorithmUtils_EXTERNAL_OBJECTS =

app/Utils/libalgorithmUtils.a: app/Utils/CMakeFiles/algorithmUtils.dir/help.cpp.o
app/Utils/libalgorithmUtils.a: app/Utils/CMakeFiles/algorithmUtils.dir/build.make
app/Utils/libalgorithmUtils.a: app/Utils/CMakeFiles/algorithmUtils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dgoncharen/Desktop/sprints/sprint05/t03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libalgorithmUtils.a"
	cd /Users/dgoncharen/Desktop/sprints/sprint05/t03/build/app/Utils && $(CMAKE_COMMAND) -P CMakeFiles/algorithmUtils.dir/cmake_clean_target.cmake
	cd /Users/dgoncharen/Desktop/sprints/sprint05/t03/build/app/Utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/algorithmUtils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/Utils/CMakeFiles/algorithmUtils.dir/build: app/Utils/libalgorithmUtils.a

.PHONY : app/Utils/CMakeFiles/algorithmUtils.dir/build

app/Utils/CMakeFiles/algorithmUtils.dir/clean:
	cd /Users/dgoncharen/Desktop/sprints/sprint05/t03/build/app/Utils && $(CMAKE_COMMAND) -P CMakeFiles/algorithmUtils.dir/cmake_clean.cmake
.PHONY : app/Utils/CMakeFiles/algorithmUtils.dir/clean

app/Utils/CMakeFiles/algorithmUtils.dir/depend:
	cd /Users/dgoncharen/Desktop/sprints/sprint05/t03/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dgoncharen/Desktop/sprints/sprint05/t03 /Users/dgoncharen/Desktop/sprints/sprint05/t03/app/Utils /Users/dgoncharen/Desktop/sprints/sprint05/t03/build /Users/dgoncharen/Desktop/sprints/sprint05/t03/build/app/Utils /Users/dgoncharen/Desktop/sprints/sprint05/t03/build/app/Utils/CMakeFiles/algorithmUtils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/Utils/CMakeFiles/algorithmUtils.dir/depend

