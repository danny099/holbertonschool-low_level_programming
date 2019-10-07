#include "holberton.h"
#include <stdio.h>
/**
**_memset - change bit
*
*@dest: is a pointer
*@src: is a characther
*@n: is a number
* Return: On succes dest.
* On error.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
