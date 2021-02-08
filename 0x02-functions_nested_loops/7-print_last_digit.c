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
_putchar(n = n % 10 + '0');
}
if (n == 0)
{
_putchar(n = 0 + '0');
}
if (n < 0)
{
_putchar('0' + (n = (n * -1) % 10));
}
return (n);
}
