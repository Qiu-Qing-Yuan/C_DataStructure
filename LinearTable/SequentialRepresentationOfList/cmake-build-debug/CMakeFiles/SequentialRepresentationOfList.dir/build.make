# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\DevelopTools\Clion\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\DevelopTools\Clion\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\C\DataStructure\LinearTable\SequentialRepresentationOfList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SequentialRepresentationOfList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SequentialRepresentationOfList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SequentialRepresentationOfList.dir/flags.make

CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.obj: CMakeFiles/SequentialRepresentationOfList.dir/flags.make
CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.obj: ../sqlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.obj"
	D:\BaiduNetdiskDownload\CBuildTools\Dev-Cpp\MinGW32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SequentialRepresentationOfList.dir\sqlist.c.obj -c F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\sqlist.c

CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.i"
	D:\BaiduNetdiskDownload\CBuildTools\Dev-Cpp\MinGW32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\sqlist.c > CMakeFiles\SequentialRepresentationOfList.dir\sqlist.c.i

CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.s"
	D:\BaiduNetdiskDownload\CBuildTools\Dev-Cpp\MinGW32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\sqlist.c -o CMakeFiles\SequentialRepresentationOfList.dir\sqlist.c.s

# Object files for target SequentialRepresentationOfList
SequentialRepresentationOfList_OBJECTS = \
"CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.obj"

# External object files for target SequentialRepresentationOfList
SequentialRepresentationOfList_EXTERNAL_OBJECTS =

SequentialRepresentationOfList.exe: CMakeFiles/SequentialRepresentationOfList.dir/sqlist.c.obj
SequentialRepresentationOfList.exe: CMakeFiles/SequentialRepresentationOfList.dir/build.make
SequentialRepresentationOfList.exe: CMakeFiles/SequentialRepresentationOfList.dir/linklibs.rsp
SequentialRepresentationOfList.exe: CMakeFiles/SequentialRepresentationOfList.dir/objects1.rsp
SequentialRepresentationOfList.exe: CMakeFiles/SequentialRepresentationOfList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SequentialRepresentationOfList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SequentialRepresentationOfList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SequentialRepresentationOfList.dir/build: SequentialRepresentationOfList.exe

.PHONY : CMakeFiles/SequentialRepresentationOfList.dir/build

CMakeFiles/SequentialRepresentationOfList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SequentialRepresentationOfList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SequentialRepresentationOfList.dir/clean

CMakeFiles/SequentialRepresentationOfList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\C\DataStructure\LinearTable\SequentialRepresentationOfList F:\C\DataStructure\LinearTable\SequentialRepresentationOfList F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\cmake-build-debug F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\cmake-build-debug F:\C\DataStructure\LinearTable\SequentialRepresentationOfList\cmake-build-debug\CMakeFiles\SequentialRepresentationOfList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SequentialRepresentationOfList.dir/depend

