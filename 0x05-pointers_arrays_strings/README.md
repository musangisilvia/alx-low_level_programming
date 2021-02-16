# 0x05-pointers_arrays_strings

``` MANDATORY ```

## 0-reset_to_98.c
> A function that takes a pointer to an ``` int ``` as a parameter and updates the value it points to to ``` 98 ```.
> - Prototype: ``` void reset_to_98(int *n); ```

## 1-swap.c
> A function that swaps the values of two integers.
> - Prototype: ``` void swap_int(int *a, int *b); ```

## 2-strlen.c
> A function that returns the length of a string.
> - Prototype: ``` int _strlen(char *s); ```

## 3-puts.c
> A function that prints a string, followed by a new line, to stdout.
> - Prototype:``` void _puts(char *str); ```. 

## 4-print_rev.c
> A function tha prints a string in reverse followed by a new line.
> - Prototype: ``` void print_rev(char *s); ```

## 5-rev_string.c
> A function that reverses a string.
> - Prototype: ``` void rev_string(char *s); ```.

## 6-puts2.c
> A function that prints every other character of a string, starting with the first character, followed by a new line.
> - Prototype: ``` void puts2(char *str); ```.

## 7-puts_half.c
> A function that prints half of a string, followed by a new line.
> - Prototype: ``` void puts_half(char *str); ```.
> - The second half of the string is printed.
> - For odd number of characters, last n characters are output where ``` n = (length_of_the_string - 1) / 2 ```

## 8-print_array.c
> A function that prints n elements of an array of integers, followed by a new line.
> - Prototype: ``` void print_array(int *a, int n); ```.
> - ``` n ``` is the number of elements of the array to be printed.
> - Numbers are separated by a comma, followed by a space.
> - Numbers are displayed in the same order as they appear in the array.
> - ``` printf ``` is used.

## 9-strcpy.c
> a function that copies the string pointed to by ``` src ```, including the terminating null byte ``` (\0) ```, to the buffer pointed to by ``` dest ```.
> - Prototype: ``` char *_strcpy(char *dest, char *src); ```.
> - Return value: te pointer to ``` dest ```.


``` ADVANCED ```

## holberton.h
> contains all the function prototypes of functions defined in this project.
