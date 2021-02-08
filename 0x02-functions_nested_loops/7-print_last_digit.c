#include "holberton.h"
/**
 *print_last_digit - last digit of number
 *@n: input.
 *
 *Return: last digit of number.
 */
int print_last_digit(int n)
{
int lastDig;
if (n > 0)
{
lastDig = n % 10;
_putchar('0' + lastDig);
}
if (n == 0)
{
lastDig = 0;
_putchar('0' + lastDig);
}
if (n < 0)
{
n = n * -1;
lastDig = n % 10;
_putchar('0' + lastDig);
}
return (lastDig);
}
