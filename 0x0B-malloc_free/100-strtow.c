#include <stdlib.h>
#include <stdio.h>

/**
 * letters - number of letters in a string
 * @str: string input
 * Return: number
 */
int letters(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		if (*(str + length) == 32)
			break;
		length++;
	}
	return (length);
}

/**
 * wordnos - counts no of words in a given string
 * @str: pointer to the string
 *
 * Return: No. of words in the string (int)
 */
int wordnos(char *str)
{
	int wordno, i;

	wordno = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == 32)
			i++;
		else
		{
			if (str[i + 1] == 32 || str[i + 1] == '\0')
				wordno++;
			i++;
		}
	}
	return (wordno);
}


/**
 * strtow - splits a string into words and stores the words in an array
 * @str: pointer to string
 *
 * Return: double pointer to the array containing the words
 */
char **strtow(char *str)
{
	char **s;
	int wordno, i, k, length, idx;

	if (str == NULL || *str == '\0')
		return (0);
	wordno = wordnos(str);
	if (wordno == 0)
		return (0);
	s = (char **)malloc(sizeof(char *) * (wordno + 1));
	if (s == 0)
	{
		free(s);
		return (0);
	}
	idx = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == 32)
			i++;
		else
		{
			length = letters(str + i);
			*(s + idx) = (char *)malloc(sizeof(char) * (length + 1));
			if (*(s + idx) == 0)
			{
				for (k = 0; k < idx; k++)
					free(*(s + k));
				free(s);
				return (0);
			}
			for (k = 0; k < length; k++, i++)
				s[idx][k] = str[i];
			s[idx][k] = '\0';
			idx++;
		}
	}
	return (s);
}
