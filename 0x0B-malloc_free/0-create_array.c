#include "holberton.h"
#include <stdlib.h>
/**
**create_arrray - create array
*
*@size: is a unsigned int
*@c: is a characther
* Return: On succes c.
* On error null.
*/

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(c) * size);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(m + i) = c;
	}
	return (m);
}
