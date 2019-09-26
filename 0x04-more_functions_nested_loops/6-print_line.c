#include "holberton.h"
/**
* print_line - print line
*
*@n: is a number
* Return: On succes line.
* On error.
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
