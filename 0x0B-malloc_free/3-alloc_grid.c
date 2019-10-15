#include "holberton.h"
#include <stdlib.h>
/**
***alloc_grid - return matriz
*
*@width: is a int
*@height: is a int
* Return: On succes string.
* On error.
*/

int **alloc_grid(int width, int height)
{
	int i, j, **m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	m = (int **)malloc(height * sizeof(int *));
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = (int *)malloc(sizeof(int) * width);
		if (m[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(m[i]);
			free(m);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			m[i][j] = 0;	
		}
	}
	return (m);
}
