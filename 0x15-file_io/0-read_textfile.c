#include "holberton.h"
/**
 * read_textfile - tead a text file
 *
 *@filename: is a pointer
 *@letters: is a number o letters
 * Return: On succes.
 * On error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buf;
	ssize_t rd = 0, wr = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
	{
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (wr);
}
