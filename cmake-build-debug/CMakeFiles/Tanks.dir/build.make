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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /home/mrfalcon/Загрузки/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/mrfalcon/Загрузки/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mrfalcon/CLionProjects/Tanks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mrfalcon/CLionProjects/Tanks/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Tanks.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tanks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tanks.dir/flags.make

CMakeFiles/Tanks.dir/main.cpp.o: CMakeFiles/Tanks.dir/flags.make
CMakeFiles/Tanks.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tanks.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tanks.dir/main.cpp.o -c /home/mrfalcon/CLionProjects/Tanks/main.cpp

CMakeFiles/Tanks.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tanks.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mrfalcon/CLionProjects/Tanks/main.cpp > CMakeFiles/Tanks.dir/main.cpp.i

CMakeFiles/Tanks.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tanks.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mrfalcon/CLionProjects/Tanks/main.cpp -o CMakeFiles/Tanks.dir/main.cpp.s

CMakeFiles/Tanks.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Tanks.dir/main.cpp.o.requires

CMakeFiles/Tanks.dir/main.cpp.o.provides: CMakeFiles/Tanks.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tanks.dir/build.make CMakeFiles/Tanks.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Tanks.dir/main.cpp.o.provides

CMakeFiles/Tanks.dir/main.cpp.o.provides.build: CMakeFiles/Tanks.dir/main.cpp.o


CMakeFiles/Tanks.dir/DrawScene.cpp.o: CMakeFiles/Tanks.dir/flags.make
CMakeFiles/Tanks.dir/DrawScene.cpp.o: ../DrawScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Tanks.dir/DrawScene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tanks.dir/DrawScene.cpp.o -c /home/mrfalcon/CLionProjects/Tanks/DrawScene.cpp

CMakeFiles/Tanks.dir/DrawScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tanks.dir/DrawScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mrfalcon/CLionProjects/Tanks/DrawScene.cpp > CMakeFiles/Tanks.dir/DrawScene.cpp.i

CMakeFiles/Tanks.dir/DrawScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tanks.dir/DrawScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mrfalcon/CLionProjects/Tanks/DrawScene.cpp -o CMakeFiles/Tanks.dir/DrawScene.cpp.s

CMakeFiles/Tanks.dir/DrawScene.cpp.o.requires:

.PHONY : CMakeFiles/Tanks.dir/DrawScene.cpp.o.requires

CMakeFiles/Tanks.dir/DrawScene.cpp.o.provides: CMakeFiles/Tanks.dir/DrawScene.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tanks.dir/build.make CMakeFiles/Tanks.dir/DrawScene.cpp.o.provides.build
.PHONY : CMakeFiles/Tanks.dir/DrawScene.cpp.o.provides

CMakeFiles/Tanks.dir/DrawScene.cpp.o.provides.build: CMakeFiles/Tanks.dir/DrawScene.cpp.o


CMakeFiles/Tanks.dir/AbstractScene.cpp.o: CMakeFiles/Tanks.dir/flags.make
CMakeFiles/Tanks.dir/AbstractScene.cpp.o: ../AbstractScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Tanks.dir/AbstractScene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tanks.dir/AbstractScene.cpp.o -c /home/mrfalcon/CLionProjects/Tanks/AbstractScene.cpp

CMakeFiles/Tanks.dir/AbstractScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tanks.dir/AbstractScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mrfalcon/CLionProjects/Tanks/AbstractScene.cpp > CMakeFiles/Tanks.dir/AbstractScene.cpp.i

CMakeFiles/Tanks.dir/AbstractScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tanks.dir/AbstractScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mrfalcon/CLionProjects/Tanks/AbstractScene.cpp -o CMakeFiles/Tanks.dir/AbstractScene.cpp.s

CMakeFiles/Tanks.dir/AbstractScene.cpp.o.requires:

.PHONY : CMakeFiles/Tanks.dir/AbstractScene.cpp.o.requires

CMakeFiles/Tanks.dir/AbstractScene.cpp.o.provides: CMakeFiles/Tanks.dir/AbstractScene.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tanks.dir/build.make CMakeFiles/Tanks.dir/AbstractScene.cpp.o.provides.build
.PHONY : CMakeFiles/Tanks.dir/AbstractScene.cpp.o.provides

CMakeFiles/Tanks.dir/AbstractScene.cpp.o.provides.build: CMakeFiles/Tanks.dir/AbstractScene.cpp.o


CMakeFiles/Tanks.dir/InterfaseScene.cpp.o: CMakeFiles/Tanks.dir/flags.make
CMakeFiles/Tanks.dir/InterfaseScene.cpp.o: ../InterfaseScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Tanks.dir/InterfaseScene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tanks.dir/InterfaseScene.cpp.o -c /home/mrfalcon/CLionProjects/Tanks/InterfaseScene.cpp

CMakeFiles/Tanks.dir/InterfaseScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tanks.dir/InterfaseScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mrfalcon/CLionProjects/Tanks/InterfaseScene.cpp > CMakeFiles/Tanks.dir/InterfaseScene.cpp.i

CMakeFiles/Tanks.dir/InterfaseScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tanks.dir/InterfaseScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mrfalcon/CLionProjects/Tanks/InterfaseScene.cpp -o CMakeFiles/Tanks.dir/InterfaseScene.cpp.s

CMakeFiles/Tanks.dir/InterfaseScene.cpp.o.requires:

.PHONY : CMakeFiles/Tanks.dir/InterfaseScene.cpp.o.requires

CMakeFiles/Tanks.dir/InterfaseScene.cpp.o.provides: CMakeFiles/Tanks.dir/InterfaseScene.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tanks.dir/build.make CMakeFiles/Tanks.dir/InterfaseScene.cpp.o.provides.build
.PHONY : CMakeFiles/Tanks.dir/InterfaseScene.cpp.o.provides

CMakeFiles/Tanks.dir/InterfaseScene.cpp.o.provides.build: CMakeFiles/Tanks.dir/InterfaseScene.cpp.o


CMakeFiles/Tanks.dir/PhisicalScene.cpp.o: CMakeFiles/Tanks.dir/flags.make
CMakeFiles/Tanks.dir/PhisicalScene.cpp.o: ../PhisicalScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Tanks.dir/PhisicalScene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tanks.dir/PhisicalScene.cpp.o -c /home/mrfalcon/CLionProjects/Tanks/PhisicalScene.cpp

CMakeFiles/Tanks.dir/PhisicalScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tanks.dir/PhisicalScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mrfalcon/CLionProjects/Tanks/PhisicalScene.cpp > CMakeFiles/Tanks.dir/PhisicalScene.cpp.i

CMakeFiles/Tanks.dir/PhisicalScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tanks.dir/PhisicalScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mrfalcon/CLionProjects/Tanks/PhisicalScene.cpp -o CMakeFiles/Tanks.dir/PhisicalScene.cpp.s

CMakeFiles/Tanks.dir/PhisicalScene.cpp.o.requires:

.PHONY : CMakeFiles/Tanks.dir/PhisicalScene.cpp.o.requires

CMakeFiles/Tanks.dir/PhisicalScene.cpp.o.provides: CMakeFiles/Tanks.dir/PhisicalScene.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tanks.dir/build.make CMakeFiles/Tanks.dir/PhisicalScene.cpp.o.provides.build
.PHONY : CMakeFiles/Tanks.dir/PhisicalScene.cpp.o.provides

CMakeFiles/Tanks.dir/PhisicalScene.cpp.o.provides.build: CMakeFiles/Tanks.dir/PhisicalScene.cpp.o


CMakeFiles/Tanks.dir/AIScene.cpp.o: CMakeFiles/Tanks.dir/flags.make
CMakeFiles/Tanks.dir/AIScene.cpp.o: ../AIScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Tanks.dir/AIScene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tanks.dir/AIScene.cpp.o -c /home/mrfalcon/CLionProjects/Tanks/AIScene.cpp

CMakeFiles/Tanks.dir/AIScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tanks.dir/AIScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mrfalcon/CLionProjects/Tanks/AIScene.cpp > CMakeFiles/Tanks.dir/AIScene.cpp.i

CMakeFiles/Tanks.dir/AIScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tanks.dir/AIScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mrfalcon/CLionProjects/Tanks/AIScene.cpp -o CMakeFiles/Tanks.dir/AIScene.cpp.s

CMakeFiles/Tanks.dir/AIScene.cpp.o.requires:

.PHONY : CMakeFiles/Tanks.dir/AIScene.cpp.o.requires

CMakeFiles/Tanks.dir/AIScene.cpp.o.provides: CMakeFiles/Tanks.dir/AIScene.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tanks.dir/build.make CMakeFiles/Tanks.dir/AIScene.cpp.o.provides.build
.PHONY : CMakeFiles/Tanks.dir/AIScene.cpp.o.provides

CMakeFiles/Tanks.dir/AIScene.cpp.o.provides.build: CMakeFiles/Tanks.dir/AIScene.cpp.o


CMakeFiles/Tanks.dir/PlayerController.cpp.o: CMakeFiles/Tanks.dir/flags.make
CMakeFiles/Tanks.dir/PlayerController.cpp.o: ../PlayerController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Tanks.dir/PlayerController.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tanks.dir/PlayerController.cpp.o -c /home/mrfalcon/CLionProjects/Tanks/PlayerController.cpp

CMakeFiles/Tanks.dir/PlayerController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tanks.dir/PlayerController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mrfalcon/CLionProjects/Tanks/PlayerController.cpp > CMakeFiles/Tanks.dir/PlayerController.cpp.i

CMakeFiles/Tanks.dir/PlayerController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tanks.dir/PlayerController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mrfalcon/CLionProjects/Tanks/PlayerController.cpp -o CMakeFiles/Tanks.dir/PlayerController.cpp.s

CMakeFiles/Tanks.dir/PlayerController.cpp.o.requires:

.PHONY : CMakeFiles/Tanks.dir/PlayerController.cpp.o.requires

CMakeFiles/Tanks.dir/PlayerController.cpp.o.provides: CMakeFiles/Tanks.dir/PlayerController.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tanks.dir/build.make CMakeFiles/Tanks.dir/PlayerController.cpp.o.provides.build
.PHONY : CMakeFiles/Tanks.dir/PlayerController.cpp.o.provides

CMakeFiles/Tanks.dir/PlayerController.cpp.o.provides.build: CMakeFiles/Tanks.dir/PlayerController.cpp.o


CMakeFiles/Tanks.dir/SoundScene.cpp.o: CMakeFiles/Tanks.dir/flags.make
CMakeFiles/Tanks.dir/SoundScene.cpp.o: ../SoundScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Tanks.dir/SoundScene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tanks.dir/SoundScene.cpp.o -c /home/mrfalcon/CLionProjects/Tanks/SoundScene.cpp

CMakeFiles/Tanks.dir/SoundScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tanks.dir/SoundScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mrfalcon/CLionProjects/Tanks/SoundScene.cpp > CMakeFiles/Tanks.dir/SoundScene.cpp.i

CMakeFiles/Tanks.dir/SoundScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tanks.dir/SoundScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mrfalcon/CLionProjects/Tanks/SoundScene.cpp -o CMakeFiles/Tanks.dir/SoundScene.cpp.s

CMakeFiles/Tanks.dir/SoundScene.cpp.o.requires:

.PHONY : CMakeFiles/Tanks.dir/SoundScene.cpp.o.requires

CMakeFiles/Tanks.dir/SoundScene.cpp.o.provides: CMakeFiles/Tanks.dir/SoundScene.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tanks.dir/build.make CMakeFiles/Tanks.dir/SoundScene.cpp.o.provides.build
.PHONY : CMakeFiles/Tanks.dir/SoundScene.cpp.o.provides

CMakeFiles/Tanks.dir/SoundScene.cpp.o.provides.build: CMakeFiles/Tanks.dir/SoundScene.cpp.o


# Object files for target Tanks
Tanks_OBJECTS = \
"CMakeFiles/Tanks.dir/main.cpp.o" \
"CMakeFiles/Tanks.dir/DrawScene.cpp.o" \
"CMakeFiles/Tanks.dir/AbstractScene.cpp.o" \
"CMakeFiles/Tanks.dir/InterfaseScene.cpp.o" \
"CMakeFiles/Tanks.dir/PhisicalScene.cpp.o" \
"CMakeFiles/Tanks.dir/AIScene.cpp.o" \
"CMakeFiles/Tanks.dir/PlayerController.cpp.o" \
"CMakeFiles/Tanks.dir/SoundScene.cpp.o"

# External object files for target Tanks
Tanks_EXTERNAL_OBJECTS =

Tanks: CMakeFiles/Tanks.dir/main.cpp.o
Tanks: CMakeFiles/Tanks.dir/DrawScene.cpp.o
Tanks: CMakeFiles/Tanks.dir/AbstractScene.cpp.o
Tanks: CMakeFiles/Tanks.dir/InterfaseScene.cpp.o
Tanks: CMakeFiles/Tanks.dir/PhisicalScene.cpp.o
Tanks: CMakeFiles/Tanks.dir/AIScene.cpp.o
Tanks: CMakeFiles/Tanks.dir/PlayerController.cpp.o
Tanks: CMakeFiles/Tanks.dir/SoundScene.cpp.o
Tanks: CMakeFiles/Tanks.dir/build.make
Tanks: CMakeFiles/Tanks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable Tanks"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tanks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tanks.dir/build: Tanks

.PHONY : CMakeFiles/Tanks.dir/build

CMakeFiles/Tanks.dir/requires: CMakeFiles/Tanks.dir/main.cpp.o.requires
CMakeFiles/Tanks.dir/requires: CMakeFiles/Tanks.dir/DrawScene.cpp.o.requires
CMakeFiles/Tanks.dir/requires: CMakeFiles/Tanks.dir/AbstractScene.cpp.o.requires
CMakeFiles/Tanks.dir/requires: CMakeFiles/Tanks.dir/InterfaseScene.cpp.o.requires
CMakeFiles/Tanks.dir/requires: CMakeFiles/Tanks.dir/PhisicalScene.cpp.o.requires
CMakeFiles/Tanks.dir/requires: CMakeFiles/Tanks.dir/AIScene.cpp.o.requires
CMakeFiles/Tanks.dir/requires: CMakeFiles/Tanks.dir/PlayerController.cpp.o.requires
CMakeFiles/Tanks.dir/requires: CMakeFiles/Tanks.dir/SoundScene.cpp.o.requires

.PHONY : CMakeFiles/Tanks.dir/requires

CMakeFiles/Tanks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tanks.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tanks.dir/clean

CMakeFiles/Tanks.dir/depend:
	cd /home/mrfalcon/CLionProjects/Tanks/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mrfalcon/CLionProjects/Tanks /home/mrfalcon/CLionProjects/Tanks /home/mrfalcon/CLionProjects/Tanks/cmake-build-debug /home/mrfalcon/CLionProjects/Tanks/cmake-build-debug /home/mrfalcon/CLionProjects/Tanks/cmake-build-debug/CMakeFiles/Tanks.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tanks.dir/depend
