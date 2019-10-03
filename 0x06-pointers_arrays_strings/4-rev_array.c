#include "holberton.h"
#include <stdio.h>
/**
**reverse_array - reverse array
*
*@a: is a pointer
*@n: is a number
* Return: On succes array.
* On error.
*/

void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		*(a + i) = a[n];
		a[n] = tmp;
		n--;
	}
}
