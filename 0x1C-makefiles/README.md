# 0x1C-makefiles

Files used: [0x1B.c](https://github.com/holbertonschool/0x1B.c)

## [0-Makefile](https://github.com/musangisilvia/alx-low_level_programming/blob/master/0x1C-makefiles/0-Makefile)

Requirements of the make file are:
- name of the executable: ``` holberton ```
- rules: ``` all ```
	 The ``` all ``` rule builds the executable.
- Variables: none

## [1-Makefile](https://github.com/musangisilvia/alx-low_level_programming/blob/master/0x1C-makefiles/1-Makefile)

Requirements of the make file are:
- name of the executable: ``` holberton ```
- rules: ``` all ```
	* The ``` all ``` rule builds the executable
- variables: ``` CC, SRC ```
	* ``` CC ```: the compiler to be used
	* ``` SRC ```: the .c files

## [2-Makefile](https://github.com/musangisilvia/alx-low_level_programming/blob/master/0x1C-makefiles/2-Makefile)

name of the executable: ``` holberton ```:
- rules: ``` all ```
	* The ``` all ``` rule builds the executable
- variables: ``` CC, SRC, OBJ, NAME ```
	* ``` CC ```: the compiler to be used
	* ``` SRC ```: the .c files
	* ``` OBJ ```: the .o files
	* ``` NAME ```: the name of the executable
- ``` all ``` recompiles only the updated source files

## [3-Makefile](https://github.com/musangisilvia/alx-low_level_programming/blob/master/0x1C-makefiles/3-Makefile)

name of the executable: ``` holberton ```
- rules: ``` all, clean, oclean, fclean, re ```
	* ``` all ```: builds the executable
	* ``` clean ```: deletes all Emacs and Vim temporary files along with the executable
	* ``` oclean ```: deletes the object files
	* ``` fclean ```: deletes all the Emacs and Vim temporary files along with the executable and object files
	* ``` re ```: forces recompilation of source files
- variables: ``` CC, SRC, OBJ, NAME, RM ```
	* ``` CC ```: the compiler to be used
	* ``` SRC ```: the .c files
	* ``` OBJ ```: the .o files
	* ``` NAME ```: the name of the executable
	* ``` RM ```: the program to delete files
- ``` all ``` recompiles only the updated source files


## [4-Makefile](https://github.com/musangisilvia/alx-low_level_programming/blob/master/0x1C-makefiles/4-Makefile)

name of the executable: ``` holberton ```:
- rules: ``` all, clean, oclean, fclean, re ```
	* ``` all ```: builds the executable
	* ``` clean ```: deletes all Emacs and Vim temporary files along with the executable
	* ``` oclean ```: deletes the object files
	* ``` fclean ```: deletes all the Emacs and Vim temporary files along with the executable and object files
	* ``` re ```: forces recompilation of source files
- variables: ``` CC, SRC, OBJ, NAME, RM, CFLAGS ```
        * ``` CC ```: the compiler to be used
	* ``` SRC ```: the .c files
	* ``` OBJ ```: the .o files
	* ``` NAME ```: the name of the executable
	* ``` RM ```: the program to delete files
	* ``` CFLAGS ```: compiler flags: ``` -Wall -Werror -Wextra -pedantic ```
- ``` all ``` recompiles only the updated source files
