# 0x07-pointers_arrays_strings

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

## holberton.h
> Header file contains function prototypes used in this project.
