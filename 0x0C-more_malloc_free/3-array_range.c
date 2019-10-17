#include "holberton.h"
#include <stdlib.h>
/**
* *array_range - array
* @min: is a integer
* @max: is a integer
* Return: On succes m.
* On error null.
*/

int *array_range(int min, int max)
{
	int *m, i;

	m = malloc((max - min) * sizeof(int) + 1);
	if (m == NULL || min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		m[i] = i;
	}
	return (m);
}
