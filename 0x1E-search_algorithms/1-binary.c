#include "search_algos.h"


/**
 * binary_search - binary
 * @array: is a int
 * @size: is a size_t
 * @value: is a int
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, r, j;

	if (array == NULL)
		return (-1);
	for (i = 0, r = size - 1; r >= i;)
	{
		printf("Searching in array: ");
		for (j = i; j < r; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = i + (r - i) / 2;
		if (array[j] == value)
			return (i);
		if (array[j] > value)
			r = j - 1;
		else
			i = j + 1;
	}

	return (-1);
}
