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
CMAKE_SOURCE_DIR = /home/tati2327/Documentos/GITHUB/Project1/PruebaServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PruebaServer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PruebaServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PruebaServer.dir/flags.make

CMakeFiles/PruebaServer.dir/main.cpp.o: CMakeFiles/PruebaServer.dir/flags.make
CMakeFiles/PruebaServer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PruebaServer.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PruebaServer.dir/main.cpp.o -c /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/main.cpp

CMakeFiles/PruebaServer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebaServer.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/main.cpp > CMakeFiles/PruebaServer.dir/main.cpp.i

CMakeFiles/PruebaServer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebaServer.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/main.cpp -o CMakeFiles/PruebaServer.dir/main.cpp.s

CMakeFiles/PruebaServer.dir/server.cpp.o: CMakeFiles/PruebaServer.dir/flags.make
CMakeFiles/PruebaServer.dir/server.cpp.o: ../server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PruebaServer.dir/server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PruebaServer.dir/server.cpp.o -c /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/server.cpp

CMakeFiles/PruebaServer.dir/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebaServer.dir/server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/server.cpp > CMakeFiles/PruebaServer.dir/server.cpp.i

CMakeFiles/PruebaServer.dir/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebaServer.dir/server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/server.cpp -o CMakeFiles/PruebaServer.dir/server.cpp.s

CMakeFiles/PruebaServer.dir/client.cpp.o: CMakeFiles/PruebaServer.dir/flags.make
CMakeFiles/PruebaServer.dir/client.cpp.o: ../client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PruebaServer.dir/client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PruebaServer.dir/client.cpp.o -c /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/client.cpp

CMakeFiles/PruebaServer.dir/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebaServer.dir/client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/client.cpp > CMakeFiles/PruebaServer.dir/client.cpp.i

CMakeFiles/PruebaServer.dir/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebaServer.dir/client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/client.cpp -o CMakeFiles/PruebaServer.dir/client.cpp.s

# Object files for target PruebaServer
PruebaServer_OBJECTS = \
"CMakeFiles/PruebaServer.dir/main.cpp.o" \
"CMakeFiles/PruebaServer.dir/server.cpp.o" \
"CMakeFiles/PruebaServer.dir/client.cpp.o"

# External object files for target PruebaServer
PruebaServer_EXTERNAL_OBJECTS =

PruebaServer: CMakeFiles/PruebaServer.dir/main.cpp.o
PruebaServer: CMakeFiles/PruebaServer.dir/server.cpp.o
PruebaServer: CMakeFiles/PruebaServer.dir/client.cpp.o
PruebaServer: CMakeFiles/PruebaServer.dir/build.make
PruebaServer: CMakeFiles/PruebaServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable PruebaServer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PruebaServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PruebaServer.dir/build: PruebaServer

.PHONY : CMakeFiles/PruebaServer.dir/build

CMakeFiles/PruebaServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PruebaServer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PruebaServer.dir/clean

CMakeFiles/PruebaServer.dir/depend:
	cd /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tati2327/Documentos/GITHUB/Project1/PruebaServer /home/tati2327/Documentos/GITHUB/Project1/PruebaServer /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug /home/tati2327/Documentos/GITHUB/Project1/PruebaServer/cmake-build-debug/CMakeFiles/PruebaServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PruebaServer.dir/depend

