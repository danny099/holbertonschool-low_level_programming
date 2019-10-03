#include "holberton.h"
#include <stdio.h>
/**
**_strcmp - compares two strings
*
*@s1: is a pointer
*@s2: is a pointer
* Return: On succes number.
* On error.
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = -1;
	do
	{
		i++;
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
	}
	while (s1[i] == s2[i]);
	return (s1[i] - s2[i]);
}
