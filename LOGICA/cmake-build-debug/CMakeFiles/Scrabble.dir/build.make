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
CMAKE_COMMAND = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pablo/Documentos/GIT/Scrabble/LOGICA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Scrabble.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Scrabble.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Scrabble.dir/flags.make

CMakeFiles/Scrabble.dir/main.cpp.o: CMakeFiles/Scrabble.dir/flags.make
CMakeFiles/Scrabble.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Scrabble.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.dir/main.cpp.o -c /home/pablo/Documentos/GIT/Scrabble/LOGICA/main.cpp

CMakeFiles/Scrabble.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/GIT/Scrabble/LOGICA/main.cpp > CMakeFiles/Scrabble.dir/main.cpp.i

CMakeFiles/Scrabble.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/GIT/Scrabble/LOGICA/main.cpp -o CMakeFiles/Scrabble.dir/main.cpp.s

CMakeFiles/Scrabble.dir/linkedlist.cpp.o: CMakeFiles/Scrabble.dir/flags.make
CMakeFiles/Scrabble.dir/linkedlist.cpp.o: ../linkedlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Scrabble.dir/linkedlist.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.dir/linkedlist.cpp.o -c /home/pablo/Documentos/GIT/Scrabble/LOGICA/linkedlist.cpp

CMakeFiles/Scrabble.dir/linkedlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.dir/linkedlist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/GIT/Scrabble/LOGICA/linkedlist.cpp > CMakeFiles/Scrabble.dir/linkedlist.cpp.i

CMakeFiles/Scrabble.dir/linkedlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.dir/linkedlist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/GIT/Scrabble/LOGICA/linkedlist.cpp -o CMakeFiles/Scrabble.dir/linkedlist.cpp.s

CMakeFiles/Scrabble.dir/keyboard.cpp.o: CMakeFiles/Scrabble.dir/flags.make
CMakeFiles/Scrabble.dir/keyboard.cpp.o: ../keyboard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Scrabble.dir/keyboard.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.dir/keyboard.cpp.o -c /home/pablo/Documentos/GIT/Scrabble/LOGICA/keyboard.cpp

CMakeFiles/Scrabble.dir/keyboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.dir/keyboard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/GIT/Scrabble/LOGICA/keyboard.cpp > CMakeFiles/Scrabble.dir/keyboard.cpp.i

CMakeFiles/Scrabble.dir/keyboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.dir/keyboard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/GIT/Scrabble/LOGICA/keyboard.cpp -o CMakeFiles/Scrabble.dir/keyboard.cpp.s

CMakeFiles/Scrabble.dir/tokens.cpp.o: CMakeFiles/Scrabble.dir/flags.make
CMakeFiles/Scrabble.dir/tokens.cpp.o: ../tokens.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Scrabble.dir/tokens.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.dir/tokens.cpp.o -c /home/pablo/Documentos/GIT/Scrabble/LOGICA/tokens.cpp

CMakeFiles/Scrabble.dir/tokens.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.dir/tokens.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/GIT/Scrabble/LOGICA/tokens.cpp > CMakeFiles/Scrabble.dir/tokens.cpp.i

CMakeFiles/Scrabble.dir/tokens.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.dir/tokens.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/GIT/Scrabble/LOGICA/tokens.cpp -o CMakeFiles/Scrabble.dir/tokens.cpp.s

CMakeFiles/Scrabble.dir/game.cpp.o: CMakeFiles/Scrabble.dir/flags.make
CMakeFiles/Scrabble.dir/game.cpp.o: ../game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Scrabble.dir/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.dir/game.cpp.o -c /home/pablo/Documentos/GIT/Scrabble/LOGICA/game.cpp

CMakeFiles/Scrabble.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.dir/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/GIT/Scrabble/LOGICA/game.cpp > CMakeFiles/Scrabble.dir/game.cpp.i

CMakeFiles/Scrabble.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.dir/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/GIT/Scrabble/LOGICA/game.cpp -o CMakeFiles/Scrabble.dir/game.cpp.s

CMakeFiles/Scrabble.dir/node.cpp.o: CMakeFiles/Scrabble.dir/flags.make
CMakeFiles/Scrabble.dir/node.cpp.o: ../node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Scrabble.dir/node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.dir/node.cpp.o -c /home/pablo/Documentos/GIT/Scrabble/LOGICA/node.cpp

CMakeFiles/Scrabble.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.dir/node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/GIT/Scrabble/LOGICA/node.cpp > CMakeFiles/Scrabble.dir/node.cpp.i

CMakeFiles/Scrabble.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.dir/node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/GIT/Scrabble/LOGICA/node.cpp -o CMakeFiles/Scrabble.dir/node.cpp.s

CMakeFiles/Scrabble.dir/player.cpp.o: CMakeFiles/Scrabble.dir/flags.make
CMakeFiles/Scrabble.dir/player.cpp.o: ../player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Scrabble.dir/player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.dir/player.cpp.o -c /home/pablo/Documentos/GIT/Scrabble/LOGICA/player.cpp

CMakeFiles/Scrabble.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.dir/player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/GIT/Scrabble/LOGICA/player.cpp > CMakeFiles/Scrabble.dir/player.cpp.i

CMakeFiles/Scrabble.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.dir/player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/GIT/Scrabble/LOGICA/player.cpp -o CMakeFiles/Scrabble.dir/player.cpp.s

CMakeFiles/Scrabble.dir/dictionary.cpp.o: CMakeFiles/Scrabble.dir/flags.make
CMakeFiles/Scrabble.dir/dictionary.cpp.o: ../dictionary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Scrabble.dir/dictionary.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.dir/dictionary.cpp.o -c /home/pablo/Documentos/GIT/Scrabble/LOGICA/dictionary.cpp

CMakeFiles/Scrabble.dir/dictionary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.dir/dictionary.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/GIT/Scrabble/LOGICA/dictionary.cpp > CMakeFiles/Scrabble.dir/dictionary.cpp.i

CMakeFiles/Scrabble.dir/dictionary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.dir/dictionary.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/GIT/Scrabble/LOGICA/dictionary.cpp -o CMakeFiles/Scrabble.dir/dictionary.cpp.s

# Object files for target Scrabble
Scrabble_OBJECTS = \
"CMakeFiles/Scrabble.dir/main.cpp.o" \
"CMakeFiles/Scrabble.dir/linkedlist.cpp.o" \
"CMakeFiles/Scrabble.dir/keyboard.cpp.o" \
"CMakeFiles/Scrabble.dir/tokens.cpp.o" \
"CMakeFiles/Scrabble.dir/game.cpp.o" \
"CMakeFiles/Scrabble.dir/node.cpp.o" \
"CMakeFiles/Scrabble.dir/player.cpp.o" \
"CMakeFiles/Scrabble.dir/dictionary.cpp.o"

# External object files for target Scrabble
Scrabble_EXTERNAL_OBJECTS =

Scrabble: CMakeFiles/Scrabble.dir/main.cpp.o
Scrabble: CMakeFiles/Scrabble.dir/linkedlist.cpp.o
Scrabble: CMakeFiles/Scrabble.dir/keyboard.cpp.o
Scrabble: CMakeFiles/Scrabble.dir/tokens.cpp.o
Scrabble: CMakeFiles/Scrabble.dir/game.cpp.o
Scrabble: CMakeFiles/Scrabble.dir/node.cpp.o
Scrabble: CMakeFiles/Scrabble.dir/player.cpp.o
Scrabble: CMakeFiles/Scrabble.dir/dictionary.cpp.o
Scrabble: CMakeFiles/Scrabble.dir/build.make
Scrabble: CMakeFiles/Scrabble.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable Scrabble"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Scrabble.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Scrabble.dir/build: Scrabble

.PHONY : CMakeFiles/Scrabble.dir/build

CMakeFiles/Scrabble.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Scrabble.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Scrabble.dir/clean

CMakeFiles/Scrabble.dir/depend:
	cd /home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pablo/Documentos/GIT/Scrabble/LOGICA /home/pablo/Documentos/GIT/Scrabble/LOGICA /home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug /home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug /home/pablo/Documentos/GIT/Scrabble/LOGICA/cmake-build-debug/CMakeFiles/Scrabble.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Scrabble.dir/depend

