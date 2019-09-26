#include "holberton.h"
/**
* print_square - print a square
*
*@size: is a number
* Return: On succes square.
* On error.
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
