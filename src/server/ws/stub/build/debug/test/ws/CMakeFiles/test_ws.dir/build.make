# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kevin/workspace/dbdky_cac

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug

# Include any dependencies generated for this target.
include test/ws/CMakeFiles/test_ws.dir/depend.make

# Include the progress variables for this target.
include test/ws/CMakeFiles/test_ws.dir/progress.make

# Include the compile flags for this target's objects.
include test/ws/CMakeFiles/test_ws.dir/flags.make

test/ws/CMakeFiles/test_ws.dir/main.cpp.o: test/ws/CMakeFiles/test_ws.dir/flags.make
test/ws/CMakeFiles/test_ws.dir/main.cpp.o: ../../../../../../test/ws/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/ws/CMakeFiles/test_ws.dir/main.cpp.o"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_ws.dir/main.cpp.o -c /home/kevin/workspace/dbdky_cac/test/ws/main.cpp

test/ws/CMakeFiles/test_ws.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_ws.dir/main.cpp.i"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kevin/workspace/dbdky_cac/test/ws/main.cpp > CMakeFiles/test_ws.dir/main.cpp.i

test/ws/CMakeFiles/test_ws.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_ws.dir/main.cpp.s"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kevin/workspace/dbdky_cac/test/ws/main.cpp -o CMakeFiles/test_ws.dir/main.cpp.s

test/ws/CMakeFiles/test_ws.dir/main.cpp.o.requires:
.PHONY : test/ws/CMakeFiles/test_ws.dir/main.cpp.o.requires

test/ws/CMakeFiles/test_ws.dir/main.cpp.o.provides: test/ws/CMakeFiles/test_ws.dir/main.cpp.o.requires
	$(MAKE) -f test/ws/CMakeFiles/test_ws.dir/build.make test/ws/CMakeFiles/test_ws.dir/main.cpp.o.provides.build
.PHONY : test/ws/CMakeFiles/test_ws.dir/main.cpp.o.provides

test/ws/CMakeFiles/test_ws.dir/main.cpp.o.provides.build: test/ws/CMakeFiles/test_ws.dir/main.cpp.o

test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o: test/ws/CMakeFiles/test_ws.dir/flags.make
test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o: ../../../../../../test/ws/soapCAGWebServicePortSoapProxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o -c /home/kevin/workspace/dbdky_cac/test/ws/soapCAGWebServicePortSoapProxy.cpp

test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.i"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kevin/workspace/dbdky_cac/test/ws/soapCAGWebServicePortSoapProxy.cpp > CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.i

test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.s"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kevin/workspace/dbdky_cac/test/ws/soapCAGWebServicePortSoapProxy.cpp -o CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.s

test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o.requires:
.PHONY : test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o.requires

test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o.provides: test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o.requires
	$(MAKE) -f test/ws/CMakeFiles/test_ws.dir/build.make test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o.provides.build
.PHONY : test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o.provides

test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o.provides.build: test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o

test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o: test/ws/CMakeFiles/test_ws.dir/flags.make
test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o: ../../../../../../test/ws/soapC.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_ws.dir/soapC.cpp.o -c /home/kevin/workspace/dbdky_cac/test/ws/soapC.cpp

test/ws/CMakeFiles/test_ws.dir/soapC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_ws.dir/soapC.cpp.i"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kevin/workspace/dbdky_cac/test/ws/soapC.cpp > CMakeFiles/test_ws.dir/soapC.cpp.i

test/ws/CMakeFiles/test_ws.dir/soapC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_ws.dir/soapC.cpp.s"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kevin/workspace/dbdky_cac/test/ws/soapC.cpp -o CMakeFiles/test_ws.dir/soapC.cpp.s

test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o.requires:
.PHONY : test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o.requires

test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o.provides: test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o.requires
	$(MAKE) -f test/ws/CMakeFiles/test_ws.dir/build.make test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o.provides.build
.PHONY : test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o.provides

test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o.provides.build: test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o

# Object files for target test_ws
test_ws_OBJECTS = \
"CMakeFiles/test_ws.dir/main.cpp.o" \
"CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o" \
"CMakeFiles/test_ws.dir/soapC.cpp.o"

# External object files for target test_ws
test_ws_EXTERNAL_OBJECTS =

bin/test_ws: test/ws/CMakeFiles/test_ws.dir/main.cpp.o
bin/test_ws: test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o
bin/test_ws: test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o
bin/test_ws: test/ws/CMakeFiles/test_ws.dir/build.make
bin/test_ws: test/ws/CMakeFiles/test_ws.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/test_ws"
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_ws.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/ws/CMakeFiles/test_ws.dir/build: bin/test_ws
.PHONY : test/ws/CMakeFiles/test_ws.dir/build

test/ws/CMakeFiles/test_ws.dir/requires: test/ws/CMakeFiles/test_ws.dir/main.cpp.o.requires
test/ws/CMakeFiles/test_ws.dir/requires: test/ws/CMakeFiles/test_ws.dir/soapCAGWebServicePortSoapProxy.cpp.o.requires
test/ws/CMakeFiles/test_ws.dir/requires: test/ws/CMakeFiles/test_ws.dir/soapC.cpp.o.requires
.PHONY : test/ws/CMakeFiles/test_ws.dir/requires

test/ws/CMakeFiles/test_ws.dir/clean:
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws && $(CMAKE_COMMAND) -P CMakeFiles/test_ws.dir/cmake_clean.cmake
.PHONY : test/ws/CMakeFiles/test_ws.dir/clean

test/ws/CMakeFiles/test_ws.dir/depend:
	cd /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kevin/workspace/dbdky_cac /home/kevin/workspace/dbdky_cac/test/ws /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws /home/kevin/workspace/dbdky_cac/src/server/ws/stub/build/debug/test/ws/CMakeFiles/test_ws.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/ws/CMakeFiles/test_ws.dir/depend
