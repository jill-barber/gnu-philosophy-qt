# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sierra-node/myfirstprjinqt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sierra-node/myfirstprjinqt

# Include any dependencies generated for this target.
include CMakeFiles/myfirstprjinqt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myfirstprjinqt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myfirstprjinqt.dir/flags.make

myfirstprjinqt_en_US.ts: .
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sierra-node/myfirstprjinqt/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating myfirstprjinqt_en_US.ts"
	/home/sierra-node/Qt/5.15.2/gcc_64/bin/lupdate @/home/sierra-node/myfirstprjinqt/CMakeFiles/myfirstprjinqt_en_US.ts_lst_file -ts /home/sierra-node/myfirstprjinqt/myfirstprjinqt_en_US.ts

CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.o: CMakeFiles/myfirstprjinqt.dir/flags.make
CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.o: myfirstprjinqt_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sierra-node/myfirstprjinqt/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.o -c /home/sierra-node/myfirstprjinqt/myfirstprjinqt_autogen/mocs_compilation.cpp

CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sierra-node/myfirstprjinqt/myfirstprjinqt_autogen/mocs_compilation.cpp > CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.i

CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sierra-node/myfirstprjinqt/myfirstprjinqt_autogen/mocs_compilation.cpp -o CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.s

CMakeFiles/myfirstprjinqt.dir/main.cpp.o: CMakeFiles/myfirstprjinqt.dir/flags.make
CMakeFiles/myfirstprjinqt.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sierra-node/myfirstprjinqt/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myfirstprjinqt.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myfirstprjinqt.dir/main.cpp.o -c /home/sierra-node/myfirstprjinqt/main.cpp

CMakeFiles/myfirstprjinqt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myfirstprjinqt.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sierra-node/myfirstprjinqt/main.cpp > CMakeFiles/myfirstprjinqt.dir/main.cpp.i

CMakeFiles/myfirstprjinqt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myfirstprjinqt.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sierra-node/myfirstprjinqt/main.cpp -o CMakeFiles/myfirstprjinqt.dir/main.cpp.s

CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.o: CMakeFiles/myfirstprjinqt.dir/flags.make
CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.o: mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sierra-node/myfirstprjinqt/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.o -c /home/sierra-node/myfirstprjinqt/mainwindow.cpp

CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sierra-node/myfirstprjinqt/mainwindow.cpp > CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.i

CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sierra-node/myfirstprjinqt/mainwindow.cpp -o CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.s

# Object files for target myfirstprjinqt
myfirstprjinqt_OBJECTS = \
"CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/myfirstprjinqt.dir/main.cpp.o" \
"CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.o"

# External object files for target myfirstprjinqt
myfirstprjinqt_EXTERNAL_OBJECTS =

myfirstprjinqt: CMakeFiles/myfirstprjinqt.dir/myfirstprjinqt_autogen/mocs_compilation.cpp.o
myfirstprjinqt: CMakeFiles/myfirstprjinqt.dir/main.cpp.o
myfirstprjinqt: CMakeFiles/myfirstprjinqt.dir/mainwindow.cpp.o
myfirstprjinqt: CMakeFiles/myfirstprjinqt.dir/build.make
myfirstprjinqt: /home/sierra-node/Qt/5.15.2/gcc_64/lib/libQt5Widgets.so.5.15.2
myfirstprjinqt: /home/sierra-node/Qt/5.15.2/gcc_64/lib/libQt5Gui.so.5.15.2
myfirstprjinqt: /home/sierra-node/Qt/5.15.2/gcc_64/lib/libQt5Core.so.5.15.2
myfirstprjinqt: CMakeFiles/myfirstprjinqt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sierra-node/myfirstprjinqt/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable myfirstprjinqt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myfirstprjinqt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myfirstprjinqt.dir/build: myfirstprjinqt

.PHONY : CMakeFiles/myfirstprjinqt.dir/build

CMakeFiles/myfirstprjinqt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myfirstprjinqt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myfirstprjinqt.dir/clean

CMakeFiles/myfirstprjinqt.dir/depend: myfirstprjinqt_en_US.ts
	cd /home/sierra-node/myfirstprjinqt && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sierra-node/myfirstprjinqt /home/sierra-node/myfirstprjinqt /home/sierra-node/myfirstprjinqt /home/sierra-node/myfirstprjinqt /home/sierra-node/myfirstprjinqt/CMakeFiles/myfirstprjinqt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myfirstprjinqt.dir/depend

