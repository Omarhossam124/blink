# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = Z:\GUC\blink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = Z:\GUC\blink\build

# Utility rule file for picotoolForceReconfigure.

# Include any custom commands dependencies for this target.
include pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/compiler_depend.make

# Include the progress variables for this target.
include pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/progress.make

pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure:
	cd /d Z:\GUC\blink\build\pico-sdk\src\rp2040\boot_stage2 && "C:\Program Files\CMake\bin\cmake.exe" -E touch_nocreate Z:/GUC/blink/CMakeLists.txt

picotoolForceReconfigure: pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure
picotoolForceReconfigure: pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/build.make
.PHONY : picotoolForceReconfigure

# Rule to build all files generated by this target.
pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/build: picotoolForceReconfigure
.PHONY : pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/build

pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/clean:
	cd /d Z:\GUC\blink\build\pico-sdk\src\rp2040\boot_stage2 && $(CMAKE_COMMAND) -P CMakeFiles\picotoolForceReconfigure.dir\cmake_clean.cmake
.PHONY : pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/clean

pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" Z:\GUC\blink C:\VSARM\sdk\pico\pico-sdk\src\rp2040\boot_stage2 Z:\GUC\blink\build Z:\GUC\blink\build\pico-sdk\src\rp2040\boot_stage2 Z:\GUC\blink\build\pico-sdk\src\rp2040\boot_stage2\CMakeFiles\picotoolForceReconfigure.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : pico-sdk/src/rp2040/boot_stage2/CMakeFiles/picotoolForceReconfigure.dir/depend

