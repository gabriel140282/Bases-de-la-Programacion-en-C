# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/nuevo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nuevo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nuevo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nuevo.dir/flags.make

CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.obj: CMakeFiles/nuevo.dir/flags.make
CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.obj: C:/Users/LCGpe/OneDrive/UAX/Primero/Programacion\ 1/Tema\ 3/Bases-de-la-Programacion-en-C/Ejercicio\ 7/main.cpp
CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.obj: CMakeFiles/nuevo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.obj -MF CMakeFiles\nuevo.dir\Ejercicio_7\main.cpp.obj.d -o CMakeFiles\nuevo.dir\Ejercicio_7\main.cpp.obj -c "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\Ejercicio 7\main.cpp"

CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\Ejercicio 7\main.cpp" > CMakeFiles\nuevo.dir\Ejercicio_7\main.cpp.i

CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\Ejercicio 7\main.cpp" -o CMakeFiles\nuevo.dir\Ejercicio_7\main.cpp.s

# Object files for target nuevo
nuevo_OBJECTS = \
"CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.obj"

# External object files for target nuevo
nuevo_EXTERNAL_OBJECTS =

nuevo.exe: CMakeFiles/nuevo.dir/Ejercicio_7/main.cpp.obj
nuevo.exe: CMakeFiles/nuevo.dir/build.make
nuevo.exe: CMakeFiles/nuevo.dir/linkLibs.rsp
nuevo.exe: CMakeFiles/nuevo.dir/objects1.rsp
nuevo.exe: CMakeFiles/nuevo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nuevo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\nuevo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nuevo.dir/build: nuevo.exe
.PHONY : CMakeFiles/nuevo.dir/build

CMakeFiles/nuevo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\nuevo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/nuevo.dir/clean

CMakeFiles/nuevo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C" "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C" "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\cmake-build-debug" "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\cmake-build-debug" "C:\Users\LCGpe\OneDrive\UAX\Primero\Programacion 1\Tema 3\Bases-de-la-Programacion-en-C\cmake-build-debug\CMakeFiles\nuevo.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/nuevo.dir/depend

