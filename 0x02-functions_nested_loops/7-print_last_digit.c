#include "holberton.h"
/**
 *print_last_digit - last digit of number
 *@n: input.
 *
 *Return: last digit of number.
 */
int print_last_digit(int n)
{
if (n > 0)
{
n = n % 10;
}
if (n == 0)
{
n = 0;
}
if (n < 0)
{
n = n * -1;
n = n % 10;
}
return (n);
}
