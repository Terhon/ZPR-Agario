# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gabe/zpr/proj/ZPR-Agario

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabe/zpr/proj/ZPR-Agario

# Include any dependencies generated for this target.
include CMakeFiles/AppTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AppTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AppTest.dir/flags.make

CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o: CMakeFiles/AppTest.dir/flags.make
CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o: tests/models/AppTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabe/zpr/proj/ZPR-Agario/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o -c /home/gabe/zpr/proj/ZPR-Agario/tests/models/AppTest.cpp

CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabe/zpr/proj/ZPR-Agario/tests/models/AppTest.cpp > CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.i

CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabe/zpr/proj/ZPR-Agario/tests/models/AppTest.cpp -o CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.s

CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o.requires:

.PHONY : CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o.requires

CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o.provides: CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o.requires
	$(MAKE) -f CMakeFiles/AppTest.dir/build.make CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o.provides.build
.PHONY : CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o.provides

CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o.provides.build: CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o


CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o: CMakeFiles/AppTest.dir/flags.make
CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o: src/controllers/AppController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabe/zpr/proj/ZPR-Agario/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o -c /home/gabe/zpr/proj/ZPR-Agario/src/controllers/AppController.cpp

CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabe/zpr/proj/ZPR-Agario/src/controllers/AppController.cpp > CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.i

CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabe/zpr/proj/ZPR-Agario/src/controllers/AppController.cpp -o CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.s

CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o.requires:

.PHONY : CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o.requires

CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o.provides: CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o.requires
	$(MAKE) -f CMakeFiles/AppTest.dir/build.make CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o.provides.build
.PHONY : CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o.provides

CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o.provides.build: CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o


CMakeFiles/AppTest.dir/src/models/App.cpp.o: CMakeFiles/AppTest.dir/flags.make
CMakeFiles/AppTest.dir/src/models/App.cpp.o: src/models/App.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabe/zpr/proj/ZPR-Agario/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AppTest.dir/src/models/App.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AppTest.dir/src/models/App.cpp.o -c /home/gabe/zpr/proj/ZPR-Agario/src/models/App.cpp

CMakeFiles/AppTest.dir/src/models/App.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTest.dir/src/models/App.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabe/zpr/proj/ZPR-Agario/src/models/App.cpp > CMakeFiles/AppTest.dir/src/models/App.cpp.i

CMakeFiles/AppTest.dir/src/models/App.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTest.dir/src/models/App.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabe/zpr/proj/ZPR-Agario/src/models/App.cpp -o CMakeFiles/AppTest.dir/src/models/App.cpp.s

CMakeFiles/AppTest.dir/src/models/App.cpp.o.requires:

.PHONY : CMakeFiles/AppTest.dir/src/models/App.cpp.o.requires

CMakeFiles/AppTest.dir/src/models/App.cpp.o.provides: CMakeFiles/AppTest.dir/src/models/App.cpp.o.requires
	$(MAKE) -f CMakeFiles/AppTest.dir/build.make CMakeFiles/AppTest.dir/src/models/App.cpp.o.provides.build
.PHONY : CMakeFiles/AppTest.dir/src/models/App.cpp.o.provides

CMakeFiles/AppTest.dir/src/models/App.cpp.o.provides.build: CMakeFiles/AppTest.dir/src/models/App.cpp.o


CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o: CMakeFiles/AppTest.dir/flags.make
CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o: src/models/StartModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabe/zpr/proj/ZPR-Agario/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o -c /home/gabe/zpr/proj/ZPR-Agario/src/models/StartModel.cpp

CMakeFiles/AppTest.dir/src/models/StartModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTest.dir/src/models/StartModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabe/zpr/proj/ZPR-Agario/src/models/StartModel.cpp > CMakeFiles/AppTest.dir/src/models/StartModel.cpp.i

CMakeFiles/AppTest.dir/src/models/StartModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTest.dir/src/models/StartModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabe/zpr/proj/ZPR-Agario/src/models/StartModel.cpp -o CMakeFiles/AppTest.dir/src/models/StartModel.cpp.s

CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o.requires:

.PHONY : CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o.requires

CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o.provides: CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o.requires
	$(MAKE) -f CMakeFiles/AppTest.dir/build.make CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o.provides.build
.PHONY : CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o.provides

CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o.provides.build: CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o


CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o: CMakeFiles/AppTest.dir/flags.make
CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o: src/models/StateModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabe/zpr/proj/ZPR-Agario/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o -c /home/gabe/zpr/proj/ZPR-Agario/src/models/StateModel.cpp

CMakeFiles/AppTest.dir/src/models/StateModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTest.dir/src/models/StateModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabe/zpr/proj/ZPR-Agario/src/models/StateModel.cpp > CMakeFiles/AppTest.dir/src/models/StateModel.cpp.i

CMakeFiles/AppTest.dir/src/models/StateModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTest.dir/src/models/StateModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabe/zpr/proj/ZPR-Agario/src/models/StateModel.cpp -o CMakeFiles/AppTest.dir/src/models/StateModel.cpp.s

CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o.requires:

.PHONY : CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o.requires

CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o.provides: CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o.requires
	$(MAKE) -f CMakeFiles/AppTest.dir/build.make CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o.provides.build
.PHONY : CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o.provides

CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o.provides.build: CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o


CMakeFiles/AppTest.dir/src/views/AppView.cpp.o: CMakeFiles/AppTest.dir/flags.make
CMakeFiles/AppTest.dir/src/views/AppView.cpp.o: src/views/AppView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabe/zpr/proj/ZPR-Agario/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AppTest.dir/src/views/AppView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AppTest.dir/src/views/AppView.cpp.o -c /home/gabe/zpr/proj/ZPR-Agario/src/views/AppView.cpp

CMakeFiles/AppTest.dir/src/views/AppView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTest.dir/src/views/AppView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabe/zpr/proj/ZPR-Agario/src/views/AppView.cpp > CMakeFiles/AppTest.dir/src/views/AppView.cpp.i

CMakeFiles/AppTest.dir/src/views/AppView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTest.dir/src/views/AppView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabe/zpr/proj/ZPR-Agario/src/views/AppView.cpp -o CMakeFiles/AppTest.dir/src/views/AppView.cpp.s

CMakeFiles/AppTest.dir/src/views/AppView.cpp.o.requires:

.PHONY : CMakeFiles/AppTest.dir/src/views/AppView.cpp.o.requires

CMakeFiles/AppTest.dir/src/views/AppView.cpp.o.provides: CMakeFiles/AppTest.dir/src/views/AppView.cpp.o.requires
	$(MAKE) -f CMakeFiles/AppTest.dir/build.make CMakeFiles/AppTest.dir/src/views/AppView.cpp.o.provides.build
.PHONY : CMakeFiles/AppTest.dir/src/views/AppView.cpp.o.provides

CMakeFiles/AppTest.dir/src/views/AppView.cpp.o.provides.build: CMakeFiles/AppTest.dir/src/views/AppView.cpp.o


CMakeFiles/AppTest.dir/src/views/StartView.cpp.o: CMakeFiles/AppTest.dir/flags.make
CMakeFiles/AppTest.dir/src/views/StartView.cpp.o: src/views/StartView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabe/zpr/proj/ZPR-Agario/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/AppTest.dir/src/views/StartView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AppTest.dir/src/views/StartView.cpp.o -c /home/gabe/zpr/proj/ZPR-Agario/src/views/StartView.cpp

CMakeFiles/AppTest.dir/src/views/StartView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTest.dir/src/views/StartView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabe/zpr/proj/ZPR-Agario/src/views/StartView.cpp > CMakeFiles/AppTest.dir/src/views/StartView.cpp.i

CMakeFiles/AppTest.dir/src/views/StartView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTest.dir/src/views/StartView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabe/zpr/proj/ZPR-Agario/src/views/StartView.cpp -o CMakeFiles/AppTest.dir/src/views/StartView.cpp.s

CMakeFiles/AppTest.dir/src/views/StartView.cpp.o.requires:

.PHONY : CMakeFiles/AppTest.dir/src/views/StartView.cpp.o.requires

CMakeFiles/AppTest.dir/src/views/StartView.cpp.o.provides: CMakeFiles/AppTest.dir/src/views/StartView.cpp.o.requires
	$(MAKE) -f CMakeFiles/AppTest.dir/build.make CMakeFiles/AppTest.dir/src/views/StartView.cpp.o.provides.build
.PHONY : CMakeFiles/AppTest.dir/src/views/StartView.cpp.o.provides

CMakeFiles/AppTest.dir/src/views/StartView.cpp.o.provides.build: CMakeFiles/AppTest.dir/src/views/StartView.cpp.o


# Object files for target AppTest
AppTest_OBJECTS = \
"CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o" \
"CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o" \
"CMakeFiles/AppTest.dir/src/models/App.cpp.o" \
"CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o" \
"CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o" \
"CMakeFiles/AppTest.dir/src/views/AppView.cpp.o" \
"CMakeFiles/AppTest.dir/src/views/StartView.cpp.o"

# External object files for target AppTest
AppTest_EXTERNAL_OBJECTS =

testBin/AppTest: CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o
testBin/AppTest: CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o
testBin/AppTest: CMakeFiles/AppTest.dir/src/models/App.cpp.o
testBin/AppTest: CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o
testBin/AppTest: CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o
testBin/AppTest: CMakeFiles/AppTest.dir/src/views/AppView.cpp.o
testBin/AppTest: CMakeFiles/AppTest.dir/src/views/StartView.cpp.o
testBin/AppTest: CMakeFiles/AppTest.dir/build.make
testBin/AppTest: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so
testBin/AppTest: CMakeFiles/AppTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabe/zpr/proj/ZPR-Agario/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable testBin/AppTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AppTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AppTest.dir/build: testBin/AppTest

.PHONY : CMakeFiles/AppTest.dir/build

CMakeFiles/AppTest.dir/requires: CMakeFiles/AppTest.dir/tests/models/AppTest.cpp.o.requires
CMakeFiles/AppTest.dir/requires: CMakeFiles/AppTest.dir/src/controllers/AppController.cpp.o.requires
CMakeFiles/AppTest.dir/requires: CMakeFiles/AppTest.dir/src/models/App.cpp.o.requires
CMakeFiles/AppTest.dir/requires: CMakeFiles/AppTest.dir/src/models/StartModel.cpp.o.requires
CMakeFiles/AppTest.dir/requires: CMakeFiles/AppTest.dir/src/models/StateModel.cpp.o.requires
CMakeFiles/AppTest.dir/requires: CMakeFiles/AppTest.dir/src/views/AppView.cpp.o.requires
CMakeFiles/AppTest.dir/requires: CMakeFiles/AppTest.dir/src/views/StartView.cpp.o.requires

.PHONY : CMakeFiles/AppTest.dir/requires

CMakeFiles/AppTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AppTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AppTest.dir/clean

CMakeFiles/AppTest.dir/depend:
	cd /home/gabe/zpr/proj/ZPR-Agario && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabe/zpr/proj/ZPR-Agario /home/gabe/zpr/proj/ZPR-Agario /home/gabe/zpr/proj/ZPR-Agario /home/gabe/zpr/proj/ZPR-Agario /home/gabe/zpr/proj/ZPR-Agario/CMakeFiles/AppTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AppTest.dir/depend

