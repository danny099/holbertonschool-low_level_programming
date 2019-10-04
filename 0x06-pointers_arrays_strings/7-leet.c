#include "holberton.h"
/**
 **leet - string to upper
 * @p: is a pointer
 * Return: p
 */
char *leet(char *p)
{
	int i, j;
	char *c1 = "aeotlAEOTL";
	char *c2 = "4307143071";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
		if (p[i] == c1[j])
		{
			p[i] = c2[j];
		}
		}
	}
	return (p);
}
