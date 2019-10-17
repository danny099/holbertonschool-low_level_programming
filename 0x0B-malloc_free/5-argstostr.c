#include "holberton.h"
#include <stdlib.h>
/**
**argstostr - free
*
*@av: is a double pointer
*@ac: is a number
* Return: On.
* On error.
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *m;

	k = 0;
	length = 0;
	if (ac <= 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		}
		length = length + j + 1;
	}
	m = malloc(sizeof(char) * length + 1);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			m[k] = av[i][j];
			k++;
		}
		m[k] = '\n';
		k++;
	}
	m[k] = '\0';
	return (m);
}
