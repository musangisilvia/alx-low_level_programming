#include "holberton.h"
/**
 *_strcpy - copy stringat the end of another string including \0.
 *@dest: pointer to string to be copied to.
 *@src: pointer to string to be copied.
 *
 *Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int lengthDest, lengthSrc, lastDest, i, j;

	lengthDest = 0;
	while (dest[lengthDest] != '\0')
	{
		lengthDest++;
	}
	lengthSrc = 0;
	while (src[lengthSrc] != '\0')
	{
		lengthSrc++;
	}
	lastDest = lengthDest - 1;

	for (i = lastDest, j = 0; j <= lengthSrc; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
