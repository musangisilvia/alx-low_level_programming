# 0x06-pointers_arrays_strings

``` MANDATORY ```

## 0-strcat.c
> a function that conactenates two strings.
> - Prototype: ``` char *_strcat(char *dest, char *src); ```
> - The function appends the ``` src ``` string to the ``` dest ``` string, overwriting the terminating null byte ( ``` \0 ``` ) at the ``` dest ``` then adds a terminatng null byte.
> - Returns pointer to resulting string in ``` dest ```.

## 1-strncat.c
> A function that concatenates two strings.
> - Prototype: ``` char *_strncat(char *dest, char *src, int n); ```.
> - it uses atmoset ``` n ``` bytes from ``` src ```.
> - ``` src ``` does not need to be null terminated if it contains ``` n ``` or more bytes.

## 2-strncpy.c
> A function that copies a string.
> - Prototype: ``` char *_strncpy(char *dest, char *src, int n); ```.
> - it works exactly like ``` strncpy ```.

## 3-strcmp.c
> A function that compares two strings.
> - Prototype: ``` int _strcmp(char *s1, char *s2); ```
> - function works exactly like ``` strcmp ```.

## 4-rev_array.c
> A function that reverses the content of an array of integers.
> - Prototype: ``` void reverse_array(int *a, int n); ```.
> - ``` n ``` is the number of elements of te array.

## 5-string_toupper.c
> A function that changes all lowercase letters of a string to uppercase.
> - Prototype: ``` char *string_toupper(char *); ```.

## 6-cap_string.c
> A function that capitalizes all words of a string.
> - Prototype: ``` char *cap_string(char *); ```.
> - Separators of words: space, tabulation, new line,``` , ```,``` ; ```,``` . ```,``` ! ```,``` ? ```,``` " ```,``` ( ```,``` ) ```,``` { ```, and ``` } ```.

## 7-leet.c
> A function that encodes a string into ``` 1337 ```.
> - Letters ``` a ``` and ``` A ``` should be replaced by ``` 4 ```.
> - Letters ``` e ``` and ``` E ``` should be replaced by ``` 3 ```.
> - Letters ``` o ``` and ``` O ``` should be replaced by ``` 0 ```.
> - Letters ``` t ``` and ``` T ``` should be replaced by ``` 7 ```.
> - Letters ``` l ``` and ``` L ``` should be replaced by ``` 1 ```.
> - Prototype: ``` char *leet(char *); ```.

## 8-rot13.c
> A function that encodes a string using ``` rot13 ```.
> - Prototype: ``` char *rot13(char *); ```.

``` ADVANCED ```
## 100-print_number.c
> A function that prints an integer.
> - Prototype: ``` void print_number(int n); ```.
> - Using ``` _putchar ```.

## holberton.h
> Header file containing function prototypes.