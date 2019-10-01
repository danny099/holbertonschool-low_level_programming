#include "holberton.h"
#include <stdio.h>
/**
* print_array - print array
*
*@a: is a pointer
*@n: is a number
* Return: On succes array.
* On error.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
