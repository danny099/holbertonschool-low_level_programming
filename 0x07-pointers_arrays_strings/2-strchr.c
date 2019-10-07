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
	int true;

	true = 1;
		while (true)
		{
			if (*s == c)
			{
				return (s);
			}
			if (*s == '\0')
			{
				return (0);
			}
			s++;
		}
		return (0);
}
