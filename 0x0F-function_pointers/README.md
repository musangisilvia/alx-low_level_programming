# 0x0F-function_pointers

## 0-print_name.c
> A function that prints a name.
> - Prototype: ``` void print_name(char *name, void (*f)(char *)); ```

## 1-array_iterator.c
> A function that executes a function given as a parameter on each element of an array.
> - Prototype: ``` void array_iterator(int *array, size_t size, void (*action)(int)); ```.
> - ``` size ``` is the size of the array.
> - ``` action ``` is a pointer to the function you need to use.

## 2-int_index.c
> A function that searches for an integer.
> - Prototype: ``` int int_index(int *array, int size, int (*cmp)(int)); ```.
> - ``` size ``` is the number of elements in the array.
> - ``` cmp ``` is a pointer to the functionn to be used to compare values.
> - ``` int_index ``` returns the index of the first element for which the ``` cmp ``` function does not return ``` 0 ```.
> - If no element matches, ``` -1 ``` is returned.
> - if size <= ``` 0 ```, ``` -1 ``` is returned.

## function_pointers.h
> Header file contains function prototypes of tasl 0 to task 2.


## *Task 3*
> A program that performs simple operations.
> - Usage: ``` calc num1 operator num2 ```.
> - Assumes ``` num1 ``` and ``` num2 ``` are integers, ``` atoi ``` functionis used to convert them from the string input to ``` int ```.
> - ``` operator ``` is one of the following:
> * ``` + ``` : addition.
> * ``` - ``` : subtraction.
> * ``` * ``` : multiplication.
> * ``` / ``` : division.
> * ``` % ``` : modulo.
> The program prints the result of the operation followed by a new line.
> - Assumes the result of operation can be stored in an ``` int ```.
> - If the number of arguments is wrong, program prints ``` Error ``` followed by anew line, and exits with a status of ``` 98 ```.
> - If the ``` operator ``` is none of the above, program prints ``` Error ``` folllowed by a new line and exits with a status of ``` 99 ```.
> - If the user tries to divide ( ``` / ``` or ``` % ``` ) by ``` 0 ```, program prints ``` Error ``` followed by a new line and exits with a status of ``` 100 ```.

This task requires four different files.

## 3-calc.h
> This file contains all the function prototypes and data structures used by a program.

## 3-op_functions.c
> Contains 5 functions and nothing else:
> * ``` op_add ``` : returns the sum of ``` a ``` and ``` b ```. Prototype: ``` int op_add(int a, int b); ```.
> * ``` op_sub ``` : returns the difference of ``` a ``` and ``` b ```. Prototype: ``` int op_sub(int a, int b);
> * ``` op_mul ``` : returns the product of ``` a ``` and ``` b ```. Prototype: ``` int op_mul( int a , int b); ```.
> * ``` op_div ``` : returns the result of division of ``` a ``` amd ``` b ```. Prototype: ``` int op_div(int a, int b); ```.
> * ``` op_mod ```: returns the remainder of division of ``` a ``` and ``` b ```. Prottype: ``` int op_mod(int a, int b); ```.

## 3-get_op_function.c
> Contains the function that selects the correct function to perform the operation asked by the user.
> - Prototype: ``` int (*get_op_func(char *s))(int, int); ```.
> - ``` s ``` is the operator passed as argument to the program.
> - The function returns a pointer to the function that corresponds to the operator given as a parameter.
> - if ``` s ``` does not match any of the 5 operatores , ``` NULL ``` is returned.

## 3-main.c
> This file contains the main function only.
> - None of the operation functions are called directly.
> - ``` atoi ``` is used to convert input to ints.

