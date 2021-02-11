#include "holberton.h"
/**
 *print_number - print integer.
 *@n: integer.
 *
 *Return: void.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
