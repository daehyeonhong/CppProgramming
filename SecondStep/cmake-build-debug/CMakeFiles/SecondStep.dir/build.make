# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\hongdae\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\hongdae\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\hongdae\dev\workspace\Cpp\SecondStep

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\hongdae\dev\workspace\Cpp\SecondStep\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\SecondStep.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\SecondStep.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\SecondStep.dir\flags.make

CMakeFiles\SecondStep.dir\main.c.obj: CMakeFiles\SecondStep.dir\flags.make
CMakeFiles\SecondStep.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hongdae\dev\workspace\Cpp\SecondStep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SecondStep.dir/main.c.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\SecondStep.dir\main.c.obj /FdCMakeFiles\SecondStep.dir\ /FS -c C:\Users\hongdae\dev\workspace\Cpp\SecondStep\main.c
<<

CMakeFiles\SecondStep.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SecondStep.dir/main.c.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\SecondStep.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\hongdae\dev\workspace\Cpp\SecondStep\main.c
<<

CMakeFiles\SecondStep.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SecondStep.dir/main.c.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\SecondStep.dir\main.c.s /c C:\Users\hongdae\dev\workspace\Cpp\SecondStep\main.c
<<

# Object files for target SecondStep
SecondStep_OBJECTS = \
"CMakeFiles\SecondStep.dir\main.c.obj"

# External object files for target SecondStep
SecondStep_EXTERNAL_OBJECTS =

SecondStep.exe: CMakeFiles\SecondStep.dir\main.c.obj
SecondStep.exe: CMakeFiles\SecondStep.dir\build.make
SecondStep.exe: CMakeFiles\SecondStep.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\hongdae\dev\workspace\Cpp\SecondStep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SecondStep.exe"
	C:\Users\hongdae\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\SecondStep.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\SecondStep.dir\objects1.rsp @<<
 /out:SecondStep.exe /implib:SecondStep.lib /pdb:C:\Users\hongdae\dev\workspace\Cpp\SecondStep\cmake-build-debug\SecondStep.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\SecondStep.dir\build: SecondStep.exe
.PHONY : CMakeFiles\SecondStep.dir\build

CMakeFiles\SecondStep.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SecondStep.dir\cmake_clean.cmake
.PHONY : CMakeFiles\SecondStep.dir\clean

CMakeFiles\SecondStep.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\hongdae\dev\workspace\Cpp\SecondStep C:\Users\hongdae\dev\workspace\Cpp\SecondStep C:\Users\hongdae\dev\workspace\Cpp\SecondStep\cmake-build-debug C:\Users\hongdae\dev\workspace\Cpp\SecondStep\cmake-build-debug C:\Users\hongdae\dev\workspace\Cpp\SecondStep\cmake-build-debug\CMakeFiles\SecondStep.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\SecondStep.dir\depend

