#include "holberton.h"
/**
 * *cap_string - string to upper
 * @p: is a pointer
 * Return: p
 */
char *cap_string(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (i == 0)
		{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		}
		if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n' || p[i] == ','
				|| p[i] == ';' || p[i] == '.' || p[i] == '!' || p[i] == '?'
				|| p[i] == '"' || p[i] == '(' || p[i] == ')' || p[i] == '{'
				|| p[i] == '}')
		{
			i++;
			if (p[i] == ' ' || p[i] == '\n')
			{
				i++;
			}
			if (p[i] >= 'a' && p[i] <= 'z')
			{
				k[i] = k[i] - 32;
			}
		}
	}
	return (p);
}
