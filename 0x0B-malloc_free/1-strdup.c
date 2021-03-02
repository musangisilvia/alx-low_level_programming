#include "holberton.h"
#include <stdlib.h>
/**
  *_strdup - retrurns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
	char *nstr, *p;
	int len, i;

	/* check is str is null */
	if (!*str)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (malloc(len + 1))
	{
		nstr = malloc(len + 1);
		p = nstr;
		for (i = 0; i < len; i++)
	        {
			*p++ = *str++;
		}
		*p = '\0';
		return (nstr);

	}
	else
	{
		return (NULL);
	}

}
