#include "holberton.h"
/**
 **rot13 - string to upper
 * @p: is a pointer
 * Return: p
 */
char *rot13(char *p)
{
	int i, j;
	char c1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (p[i] == c1[j])
			{
				p[i] = c2[j];
				break;
			}
		}
	}
	return (p);
}
