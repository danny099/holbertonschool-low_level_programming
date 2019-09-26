#include "holberton.h"
/**
* print_diagonal - print diagonal
*
*@n: is a number
* Return: On succes diagonal.
* On error.
*/
void print_diagonal(int n)
{	
	int i, j;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i+1; j++)
			{
				if (j != i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
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
