#include "holberton.h"
/**
 * create_file - create a file
 *
 *@filename: is a pointer
 *@text_content: is a pointer
 * Return: On succes.
 * On error.
 */

int create_file(const char *filename, char *text_content)
{
	int file, i, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content == NULL)
	{
		return (1);
	}
	if (file == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	wr = write(file, text_content, i);
	if (wr == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
