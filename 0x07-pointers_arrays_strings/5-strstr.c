#include "holberton.h"
#include <stdlib.h>
/**
  *_strstr - loctaes a substring.
  *It finds the first occurence of a substring needle
  *in the strinf haystack. Terminating null bytes are
  *not compared.
  *@haystack: pointer to string.
  *@needle: pointer to substring to be matched.
  *
  *Return: pointer to byte in s that matches one of the bytes
  *in accept ot NULL if no such byte is found.
  */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	int counter, counter2;

	for (counter = 0; haystack[counter] != '\0'; counter++)
	{
		for (counter2 = 0; needle[counter2]; counter2++)
		{
			if (needle[counter2] == haystack[counter])
				p = &haystack[counter];
			break;
		}
	}
	return (p);
}
