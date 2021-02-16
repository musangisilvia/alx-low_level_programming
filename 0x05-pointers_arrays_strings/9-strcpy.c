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
	int lengthSrc, j;

	lengthSrc = 0;
	while (src[lengthSrc] != '\0')
	{
		lengthSrc++;
	}
	lengthSrc++;
	for (j = 0; j <= lengthSrc; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
