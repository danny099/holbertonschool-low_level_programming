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
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{
	}
	i++;
	for (j = i / 2; str[j] != 0; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
