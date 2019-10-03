#include "holberton.h"
#include <stdio.h>
/**
  **_strncpy - copy a strings
  *
  *@dest: is a pointer
  *@src: is a pointer
  *@n: is a number
  * Return: On succes string.
  * On error.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		*(dest + i) = src[i];
	}
	for( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);

}
