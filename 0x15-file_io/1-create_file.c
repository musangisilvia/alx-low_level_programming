#include "holberton.h"
/**
  * create_file - creates a file.
  * @filename: pointer to filename.
  * @text_content: string to be written to file.
  *
  * Return:  1 on success -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
	int file, i;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	/*finde length of text content*/
	i = 0;
	while (text_content[i])
		i++;
	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}
	else
	{
		write(file, text_content, i);
	}

	close(file);
	return (1);
}
