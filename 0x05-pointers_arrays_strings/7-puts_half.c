#include "holberton.h"
/**
* puts_half - ptrint a string
*
*@str: is a pointer
* Return: On succes string.
* On error.
*/

void puts_half(char *str)
{
	int i, j, div;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 == 0)
	{
		div = i / 2;
	}
		else
		{
			div = (i - 1) / 2;
		}
	for (j = div; str[j] != 0; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
