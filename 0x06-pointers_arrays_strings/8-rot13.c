#include "holberton.h"
/**
 *rot13 - encodes strings using rot13.
 *@s: pointer to string.
 *
 *Return: pointer to encoded string.
 */
char *rot13(char *s)
{
	int stringCount, rotation;
	char r1[] = "ABCDEFGHIJKLMN0PQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		rotation = 0;
		while (rotation < 52)
		{
			if (s[stringCount] == r1[rotation])
			{
				s[stringCount] = r2[rotation];
			}
			rotation++;
		}
		stringCount++;
	}
	return (s);
}
