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
CMAKE_SOURCE_DIR = /home/tati2327/Documentos/GITHUB/Scrabble/SERVER

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SERVER.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SERVER.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SERVER.dir/flags.make

CMakeFiles/SERVER.dir/main.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SERVER.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/main.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/main.cpp

CMakeFiles/SERVER.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/main.cpp > CMakeFiles/SERVER.dir/main.cpp.i

CMakeFiles/SERVER.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/main.cpp -o CMakeFiles/SERVER.dir/main.cpp.s

CMakeFiles/SERVER.dir/Server.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/Server.cpp.o: ../Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SERVER.dir/Server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/Server.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Server.cpp

CMakeFiles/SERVER.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Server.cpp > CMakeFiles/SERVER.dir/Server.cpp.i

CMakeFiles/SERVER.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Server.cpp -o CMakeFiles/SERVER.dir/Server.cpp.s

CMakeFiles/SERVER.dir/Game.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SERVER.dir/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/Game.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Game.cpp

CMakeFiles/SERVER.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Game.cpp > CMakeFiles/SERVER.dir/Game.cpp.i

CMakeFiles/SERVER.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Game.cpp -o CMakeFiles/SERVER.dir/Game.cpp.s

CMakeFiles/SERVER.dir/Board.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SERVER.dir/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/Board.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Board.cpp

CMakeFiles/SERVER.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Board.cpp > CMakeFiles/SERVER.dir/Board.cpp.i

CMakeFiles/SERVER.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Board.cpp -o CMakeFiles/SERVER.dir/Board.cpp.s

CMakeFiles/SERVER.dir/LinkedList.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/LinkedList.cpp.o: ../LinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SERVER.dir/LinkedList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/LinkedList.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/LinkedList.cpp

CMakeFiles/SERVER.dir/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/LinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/LinkedList.cpp > CMakeFiles/SERVER.dir/LinkedList.cpp.i

CMakeFiles/SERVER.dir/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/LinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/LinkedList.cpp -o CMakeFiles/SERVER.dir/LinkedList.cpp.s

CMakeFiles/SERVER.dir/Node.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/Node.cpp.o: ../Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SERVER.dir/Node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/Node.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Node.cpp

CMakeFiles/SERVER.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/Node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Node.cpp > CMakeFiles/SERVER.dir/Node.cpp.i

CMakeFiles/SERVER.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/Node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Node.cpp -o CMakeFiles/SERVER.dir/Node.cpp.s

CMakeFiles/SERVER.dir/Player.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SERVER.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/Player.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Player.cpp

CMakeFiles/SERVER.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Player.cpp > CMakeFiles/SERVER.dir/Player.cpp.i

CMakeFiles/SERVER.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Player.cpp -o CMakeFiles/SERVER.dir/Player.cpp.s

CMakeFiles/SERVER.dir/Dictionary.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/Dictionary.cpp.o: ../Dictionary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SERVER.dir/Dictionary.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/Dictionary.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Dictionary.cpp

CMakeFiles/SERVER.dir/Dictionary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/Dictionary.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Dictionary.cpp > CMakeFiles/SERVER.dir/Dictionary.cpp.i

CMakeFiles/SERVER.dir/Dictionary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/Dictionary.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Dictionary.cpp -o CMakeFiles/SERVER.dir/Dictionary.cpp.s

CMakeFiles/SERVER.dir/Tokens.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/Tokens.cpp.o: ../Tokens.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SERVER.dir/Tokens.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/Tokens.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Tokens.cpp

CMakeFiles/SERVER.dir/Tokens.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/Tokens.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Tokens.cpp > CMakeFiles/SERVER.dir/Tokens.cpp.i

CMakeFiles/SERVER.dir/Tokens.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/Tokens.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/Tokens.cpp -o CMakeFiles/SERVER.dir/Tokens.cpp.s

CMakeFiles/SERVER.dir/JSON.cpp.o: CMakeFiles/SERVER.dir/flags.make
CMakeFiles/SERVER.dir/JSON.cpp.o: ../JSON.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/SERVER.dir/JSON.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SERVER.dir/JSON.cpp.o -c /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/JSON.cpp

CMakeFiles/SERVER.dir/JSON.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SERVER.dir/JSON.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/JSON.cpp > CMakeFiles/SERVER.dir/JSON.cpp.i

CMakeFiles/SERVER.dir/JSON.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SERVER.dir/JSON.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/JSON.cpp -o CMakeFiles/SERVER.dir/JSON.cpp.s

# Object files for target SERVER
SERVER_OBJECTS = \
"CMakeFiles/SERVER.dir/main.cpp.o" \
"CMakeFiles/SERVER.dir/Server.cpp.o" \
"CMakeFiles/SERVER.dir/Game.cpp.o" \
"CMakeFiles/SERVER.dir/Board.cpp.o" \
"CMakeFiles/SERVER.dir/LinkedList.cpp.o" \
"CMakeFiles/SERVER.dir/Node.cpp.o" \
"CMakeFiles/SERVER.dir/Player.cpp.o" \
"CMakeFiles/SERVER.dir/Dictionary.cpp.o" \
"CMakeFiles/SERVER.dir/Tokens.cpp.o" \
"CMakeFiles/SERVER.dir/JSON.cpp.o"

# External object files for target SERVER
SERVER_EXTERNAL_OBJECTS =

SERVER: CMakeFiles/SERVER.dir/main.cpp.o
SERVER: CMakeFiles/SERVER.dir/Server.cpp.o
SERVER: CMakeFiles/SERVER.dir/Game.cpp.o
SERVER: CMakeFiles/SERVER.dir/Board.cpp.o
SERVER: CMakeFiles/SERVER.dir/LinkedList.cpp.o
SERVER: CMakeFiles/SERVER.dir/Node.cpp.o
SERVER: CMakeFiles/SERVER.dir/Player.cpp.o
SERVER: CMakeFiles/SERVER.dir/Dictionary.cpp.o
SERVER: CMakeFiles/SERVER.dir/Tokens.cpp.o
SERVER: CMakeFiles/SERVER.dir/JSON.cpp.o
SERVER: CMakeFiles/SERVER.dir/build.make
SERVER: CMakeFiles/SERVER.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable SERVER"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SERVER.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SERVER.dir/build: SERVER

.PHONY : CMakeFiles/SERVER.dir/build

CMakeFiles/SERVER.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SERVER.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SERVER.dir/clean

CMakeFiles/SERVER.dir/depend:
	cd /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tati2327/Documentos/GITHUB/Scrabble/SERVER /home/tati2327/Documentos/GITHUB/Scrabble/SERVER /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug /home/tati2327/Documentos/GITHUB/Scrabble/SERVER/cmake-build-debug/CMakeFiles/SERVER.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SERVER.dir/depend

