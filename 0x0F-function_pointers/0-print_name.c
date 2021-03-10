#include <unistd.h>
/**
  *_putchar - write to stdout.
  *@c: pointer to text.
  *
  *Return: void.
  */
void _putchar(char *c)
{
	write(1, c, 1);
}

/**
  *print_name - prints a name.
  *@name: pointer to name.
  *@f: function pointer.
  *
  *Return: void.
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

