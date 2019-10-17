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
	int *m, i, size;

	size = max - min;
	m = malloc((size + 1) * sizeof(int));
	if (m == NULL || min > max)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i <= size; min++, i++)
	{
		m[i] = min;
	}
	return (m);
}
