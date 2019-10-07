#include "holberton.h"
#include <stdio.h>
/**
**_strchr - locates a characther in a string
*
*@s: is a pointer
*@c: is a characther
* Return: On succes dest.
* On error.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
