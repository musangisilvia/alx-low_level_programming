#include "holberton.h"
#include <stdlib.h>
/**
  *_strchr - locates a character in a string.
  *@s: pointer to string.
  *@c: character to be found.
  *
  *Return: pointer to first occurence of the character.
  *or null if character is not found.
  */
char *_strchr(char *s, char c)
{
	char *p; /* pointer to first occurence*/
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
		{
			p = &s[counter];
			break;
		}
		else
		{
			p = NULL;
		}
	}
	return (p);
}
