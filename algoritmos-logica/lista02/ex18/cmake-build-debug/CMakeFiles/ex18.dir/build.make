# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.3.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.3.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex18.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ex18.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ex18.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex18.dir/flags.make

CMakeFiles/ex18.dir/main.cpp.obj: CMakeFiles/ex18.dir/flags.make
CMakeFiles/ex18.dir/main.cpp.obj: C:/Users/user/Desktop/exercicios_fatec/algoritmos-logica/lista02/ex18/main.cpp
CMakeFiles/ex18.dir/main.cpp.obj: CMakeFiles/ex18.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex18.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ex18.dir/main.cpp.obj -MF CMakeFiles\ex18.dir\main.cpp.obj.d -o CMakeFiles\ex18.dir\main.cpp.obj -c C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\main.cpp

CMakeFiles/ex18.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ex18.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\main.cpp > CMakeFiles\ex18.dir\main.cpp.i

CMakeFiles/ex18.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ex18.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\main.cpp -o CMakeFiles\ex18.dir\main.cpp.s

# Object files for target ex18
ex18_OBJECTS = \
"CMakeFiles/ex18.dir/main.cpp.obj"

# External object files for target ex18
ex18_EXTERNAL_OBJECTS =

ex18.exe: CMakeFiles/ex18.dir/main.cpp.obj
ex18.exe: CMakeFiles/ex18.dir/build.make
ex18.exe: CMakeFiles/ex18.dir/linkLibs.rsp
ex18.exe: CMakeFiles/ex18.dir/objects1.rsp
ex18.exe: CMakeFiles/ex18.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex18.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex18.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex18.dir/build: ex18.exe
.PHONY : CMakeFiles/ex18.dir/build

CMakeFiles/ex18.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex18.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex18.dir/clean

CMakeFiles/ex18.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18 C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18 C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\cmake-build-debug C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\cmake-build-debug C:\Users\user\Desktop\exercicios_fatec\algoritmos-logica\lista02\ex18\cmake-build-debug\CMakeFiles\ex18.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ex18.dir/depend

