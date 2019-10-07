#include "holberton.h"
#include <stdio.h>
/**
**_memset - change bit
*
*@s: is a pointer
*@b: is a characther
*@n: is a number
* Return: On succes string concatenate.
* On error.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
