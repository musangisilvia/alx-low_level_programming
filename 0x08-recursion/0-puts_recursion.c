#include "holberton.h"
/**
  *_puts_recursion - prints a string followed by a new line.
  *@s: pointer to string.
  *
  *Return: void.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
		return;
	_putchar(*s);
	_puts_recursion(++s);

	if (*s == '\0')
		_putchar(10);
}
