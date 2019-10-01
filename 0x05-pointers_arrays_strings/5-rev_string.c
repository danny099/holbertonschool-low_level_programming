#include "holberton.h"
#include "stdio.h"
/**
* rev_string - reverses a string
*
*@s: is a pointer
* Return: On succes reverses a string.
* On error.
*/

void rev_string(char *s)
{
	int i, j, k;
	char tmp;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = i - 1; k < j; j--)
	{
		tmp = s[k];
		*(s + k) = s[j];
		s[j] = tmp;
		k++;
	}
}
