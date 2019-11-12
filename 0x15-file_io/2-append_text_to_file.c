#include "holberton.h"
/**
 * append_text_to_file - append the file
 *
 *@filename: is a pointer
 *@text_content: is a pointer
 * Return: On succes.
 * On error.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_APPEND | O_WRONLY, 0600);
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
