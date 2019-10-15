#include "holberton.h"
#include <stdlib.h>
/**
**str_concat - concatenates two strings
*
*@s1: is a pointer
*@s2: is a pointer
* Return: On succes string concatenate.
* On error.
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	m = malloc(sizeof(char) * (i + j)+1);
	if (m == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		*(m + k) = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		*(m + k) = s2[l];
		k++;
	}
	if (s2[k] == '\0')
	{
		*(m + k) = s2[i];
	}
	return (m);
}
