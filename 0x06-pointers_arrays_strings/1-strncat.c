#include "holberton.h"
#include <stdio.h>
/**
**_strncat - concatenates two strings
*
*@dest: is a pointer
*@src: is a pointer
*@n: is a number
* Return: On succes string concatenate.
* On error.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
		*(dest + i) = dest[i];
	}
	for (j = 0; src[j] != 0 && j < n; j++)
	{
		*(dest + i) = src[j];
		i++;
	}
	return (dest);
}
