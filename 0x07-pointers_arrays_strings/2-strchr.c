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
	
	i = 0;
	if (s[i] != c)
	{
		for (; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
