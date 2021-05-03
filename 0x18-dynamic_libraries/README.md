# DYNAMIC LIBRARIES

## *INTRODUCTION*

Unlike Static Libraries that need to be recompiled whenever there's a change in a certain block of code or function, Dynamic libraries consist of separate files conatining separate pieces of object code. These files are dynamically linked together to form a single piece of object code.
The Dynamic libraries also contain additional information needed by the operating system in order for the library to be used by other programs.
As a result, Dynamic libraries conserve memory since only one copy of the library needs to be accessed by all programs.

## *CREATING A DYNAMIC LIBRARY* (Linux)

On the Linux terminal start by running the command:
- $ ``` gcc *.c -c -fPIC ```
	* This generates on object file .o for each source file .c
	* *-c* flag ensures that each .o file isn't linked yet.
	* *-fPIC* flag ensures that the code is position independent meaning it wouldn't matter where the computer loads into memory.
- $ ``` gcc *.o -shared -o liball.so ```
	* *.o means all onject files will be compiles into the dynamic library.
	* *-shared* flag specifies the dynamic library.
	* By convention shared library names start with *lib* and end with *.so* for dynamic lybraries and *.a* for static libraries.
- $ ``` export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH ```
	* This will export the path for libraries so that programs know where to look for them.

## *USING DYNAMIC LIBRARIES*

In order to use the dynamic library, the following command is used to compile:
- $ ``` gcc -L <testfile.c> -l<librarname> -o <outputfile> ```.
	* the -L flag tells the compiler to look in the current directory for the library file.
	* <testfile.c> should be replaced by the file you wish to compile that uses the shared library.
	* -l flag tells the compiler to look for a library called *librarname.so* 
	* <outputfile> is the name of the executable once compilation is done.

