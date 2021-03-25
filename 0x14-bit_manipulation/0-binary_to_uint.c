#include "holberton.h"
/**
  *_strlen - returns the length of a string.
  *@s: pointer to string.
  *
  *Return: length.
  */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *getp - returns the value of x to the power of y.
  *@x: number.
  *@y: power.
  *
  *Return: x to the pow of y.
  *0 if x < 0.
  */
unsigned int getp(int x, int y)
{
	unsigned int num;

	if (y < 0)
		return (0);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	num = x * getp(x, y - 1);
	return (num);
}

/**
  *binary_to_uint - converts a binary number to an unsigned int.
  *@b: pointer to string containing 0 and 1.
  *
  *Return: converted number or 0 if b is null or has chars not 0 or 1.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, length, index;
	int power;

	length = _strlen(b);
	if (length == 0 || b == NULL)
		return (0);

	power = 0;
	num = 0;
	index = length - 1;
	while (length > 0)
	{
		if (b[index] == 48 || b[index] == 49)
		{
			num = num + ((b[index] - 48) * getp(2, power));
			power++;
			index--;
			length--;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
