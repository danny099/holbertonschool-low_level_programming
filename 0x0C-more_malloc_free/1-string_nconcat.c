#include "holberton.h"
#include <stdlib.h>
/**
* *string_nconcat - concateates two strings
* @s1: is a pointer
* @s2: is a pointer
* @n: is a unsigned int
* Return: On succes m.
* On error null.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
	}
	if (n >= l)
	{
		n = l;
	}
	m = malloc(sizeof(char) * (k + l) + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(m + i) = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		*(m + i) = s2[j];
		i++;
	}
	*(m + i) = '\0';
	return (m);
}
