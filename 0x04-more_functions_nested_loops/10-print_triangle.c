#include "holberton.h"
/**
* print_triangle - print triangle
*
*@size: is a number
* Return: On succes triangle.
* On error.
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size ; j++)
			{
				k = i + j;
				if (k < size - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
