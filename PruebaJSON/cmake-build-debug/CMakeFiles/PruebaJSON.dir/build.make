# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/tati2327/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/tati2327/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tati2327/Documentos/GITHUB/P1/PruebaJSON

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PruebaJSON.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PruebaJSON.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PruebaJSON.dir/flags.make

CMakeFiles/PruebaJSON.dir/main.cpp.o: CMakeFiles/PruebaJSON.dir/flags.make
CMakeFiles/PruebaJSON.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/P1/PruebaJSON/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PruebaJSON.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PruebaJSON.dir/main.cpp.o -c /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/main.cpp

CMakeFiles/PruebaJSON.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebaJSON.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/main.cpp > CMakeFiles/PruebaJSON.dir/main.cpp.i

CMakeFiles/PruebaJSON.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebaJSON.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/main.cpp -o CMakeFiles/PruebaJSON.dir/main.cpp.s

CMakeFiles/PruebaJSON.dir/JSON.cpp.o: CMakeFiles/PruebaJSON.dir/flags.make
CMakeFiles/PruebaJSON.dir/JSON.cpp.o: ../JSON.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/P1/PruebaJSON/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PruebaJSON.dir/JSON.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PruebaJSON.dir/JSON.cpp.o -c /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/JSON.cpp

CMakeFiles/PruebaJSON.dir/JSON.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebaJSON.dir/JSON.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/JSON.cpp > CMakeFiles/PruebaJSON.dir/JSON.cpp.i

CMakeFiles/PruebaJSON.dir/JSON.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebaJSON.dir/JSON.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/JSON.cpp -o CMakeFiles/PruebaJSON.dir/JSON.cpp.s

# Object files for target PruebaJSON
PruebaJSON_OBJECTS = \
"CMakeFiles/PruebaJSON.dir/main.cpp.o" \
"CMakeFiles/PruebaJSON.dir/JSON.cpp.o"

# External object files for target PruebaJSON
PruebaJSON_EXTERNAL_OBJECTS =

PruebaJSON: CMakeFiles/PruebaJSON.dir/main.cpp.o
PruebaJSON: CMakeFiles/PruebaJSON.dir/JSON.cpp.o
PruebaJSON: CMakeFiles/PruebaJSON.dir/build.make
PruebaJSON: CMakeFiles/PruebaJSON.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tati2327/Documentos/GITHUB/P1/PruebaJSON/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable PruebaJSON"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PruebaJSON.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PruebaJSON.dir/build: PruebaJSON

.PHONY : CMakeFiles/PruebaJSON.dir/build

CMakeFiles/PruebaJSON.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PruebaJSON.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PruebaJSON.dir/clean

CMakeFiles/PruebaJSON.dir/depend:
	cd /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tati2327/Documentos/GITHUB/P1/PruebaJSON /home/tati2327/Documentos/GITHUB/P1/PruebaJSON /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/cmake-build-debug /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/cmake-build-debug /home/tati2327/Documentos/GITHUB/P1/PruebaJSON/cmake-build-debug/CMakeFiles/PruebaJSON.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PruebaJSON.dir/depend

