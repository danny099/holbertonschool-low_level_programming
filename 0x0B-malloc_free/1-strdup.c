#include "holberton.h"
#include <stdlib.h>
/**
**_strdup - copy a strings
*
*@str: is a pointer
* Return: On succes string.
* On error.
*/

char *_strdup(char *str)
{
	unsigned int i, j;
	char *m;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	i++;
	m = malloc(i * sizeof(char));
	if (m == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		m[j] = str[j];
	}
	return (m);

}
