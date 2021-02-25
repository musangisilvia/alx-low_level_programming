# 0x08-recursion

``` MANDATORY ```

## 0-puts_recursion.c
> A function that prints a string followed by a new line.
> - Prototype: ``` void _puts_recursion(char *s); ```

## 1-print_rev_recursion.c
> A function that prints a string in reverse.
> - Prototype: ``` void _print_rev_recursion(char *s); ```

## 2-strlen_recursion.c
> A function that returns the length of a string.
> - Prototype: ``` int _strlen_recursion(char *s); ```

## 3-factorial.c
> A function that returns the factorial of a given number.
> -Prototype: ``` int factorial(int n); ```
> - If ``` n ``` is lower than ``` 0 ```, the function returns ``` -1 ``` to indictae an error.
> - Factorial of ``` 0 ``` is ``` 1```.

## 4-pow_recursion.c
> A function that returns the value of ``` x ``` raised to the power of ``` y ```.
> - Prototype: ``` int _pow_recursion(int x, int y); ```.
> - If ``` y ``` is less than ``` 0 ```, the function returns ``` -1 ```.

## 5-sqrt_recursion.c
> A function that returns the natural square root of a number.
> - Prototype: ``` int _sqrt_recursion(int n); ```.
> - If ``` n ``` does not have a natural square root, the function returns ``` -1 ```.

## 6-is_prime_number.c
> A function that returns ``` 1 ``` if ``` n ``` is a [prime number](https://alx-intranet.hbtn.io/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw) and ``` 0 ``` otherwise.
> - Prototype: ``` int is_prime_number(int n); ```.

## 7-is_palindrome.c
> A function that returns ``` 1 ``` id a string is a palindrome and ``` 0 ``` if not.
> - Prototype: ``` int is_palindrome(char *s); ```.
> - An empty string is a palindrome.


``` ADVANCED ```

## 100-wildcmp.c
>  A function that compares two strings and returns ``` 1 ``` if the strings can be considered identical, otherwise returns ``` 0 ```.
> - Prototype: ``` int wildcmp(char *s1, char *s2); ```.
> - ``` s2 ``` can contain the special character ``` * ```.
> - The special char ``` * ``` can replace any string (including an empty string).


``` HEADER FILE ```

## holberton.h
> Header file that contains all prototypes of functions used in this project.
