#include "holberton.h"
#include <stdlib.h>
/**
* *malloc_checked - check
* @b: is a unsigned int
* Return: On succes m.
* On error null.
*/

void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	else
		return (m);
	free(m);
}
