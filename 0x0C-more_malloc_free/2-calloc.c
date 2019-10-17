#include "holberton.h"
#include <stdlib.h>
/**
* *_calloc - calloc with malloc
* @nmemb: is a unsigned integer
* @size: is a unsigned int
* Return: On succes m.
* On error null.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = malloc(nmemb * size);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= nmemb * size; i++)
	{
		*(m + i) = 0;
	}
	return (m);
}
