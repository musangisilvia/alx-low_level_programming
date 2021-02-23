
## 0x07-pointers_arrays_strings

``` MANDATORY ```

## 0-memset.c
> A function that fills memory with a constant byte.
> - Prototype: ``` char *_memset(char *s, char b, unsigned int n); ```
> - ``` _memeset()``` fills the first ``` n ``` bytes of the memory area pointed to by ``` s ```with the constant byte ``` b```.
> - Returns pointer to the memory area ``` s ```.

## 1-memcpy.c
> A function that copies memory area.
> - Prototype: ``` char *_memcpy(char *dest, char *src, unsigned int n); ```.
> - ``` n ``` bytes from memory area ``` src ``` are copied to memory area ``` dest ```.
> - Returns a pointer to ``` dest ```.

## 2-strchr.c
> A function that locates a character in a string.
> - Prototype: ``` char *_strchr(char *s, char c); ```.
> - Returns a pointer to the first occurence of the character ``` c ``` in the string ``` s ``` or ``` NULL ``` if the character is not found.

## 3-strspn.c
> A function that gets the length of a prefix substring.
> - Prototype: ``` unsigned int _strspn(char *s, char *accept); ```.
> - Returns the number of bytes in the initial segment of ``` s ``` which consist only of bytes from ``` accept ```.

## 4-strpbrk.c
> A function that searches a string for any set of bytes.
> - Prototype: ``` char *_strpbrk(char *s, char *accept); ```.
> - This function loctaes the first occurence in the string ``` s ``` of any of the bytes in the string ``` accept ```.
> - Returns a pointer to the bytes in ``` s ``` that matches one of the bytes in ``` accept ``` or ``` NULL ``` if no such bytes is found. 

## 5-strstr.c
> A function that loctaes a substring.
> - Prototype: ``` char *_strstr(char *haystack, char *needle); ```
> - This function finds the first occurence of the substring ``` needle ``` in the string ``` haystack ```.
> - the terminating null bytes ( ``` \0 ```) are not compared.
> - Returns a pointer to the beginning of the located substring, or ``` NULL ``` if the substring is not found.

## 7-print_chessboard.c
> A function that prints a chessboard.
> - Prototype: ``` void print_chessboard(char (*a)[8]); ```

## 8-print_diagsums
> A function that prints the sum of the two diagonals of a square matrix of integers.
> - Prototype: ``` void print_diagsums(int *a, int size); ```
> - Standard library is used.

## 9-set_string.c
> A function that sets the value of a pointer to a char.
> - Prototype: ``` void set_string(char **s, char *to); ```

``` ADVANCED ```

## 101-crackme_password
> - A file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) file.
> - It contains the exact password.
> - Used ltrace to crack crackme.

## holberton.h
> Header file contains function prototypes used in this project.
