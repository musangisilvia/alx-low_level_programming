#include "holberton.h"
/**
 *_strlen_recursion - returns lenght of a string.
 *@s: pointer to string.
 *
 *Return: lenght of string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
  *helperFunction - returns 0 or 1.
  *@s: pointer to string.
  *@fi: first index.
  *@li: lastIndex.
  *
  *Return: 0 if not palindrome, 1 if palindrome.
  */
int helperFunction(char *s, int fi, int li)
{
	if (fi < li && s[fi] == s[li])
		helperFunction(s, fi + 1, li - 1);
	if (s[fi] != s[li])
		return (0);
	return (1);
}
/**
  *is_palindrome - checks if string is palindrome or not.
  *@s: pointer to string.
  *
  *Return: 1 if string is palindrome 0 if not.
  */
int is_palindrome(char *s)
{
	int fi, li;

	fi = 0;
	li = _strlen_recursion(s) - 1;

	return (helperFunction(s, fi, li));
}
