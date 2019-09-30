#include "holberton.h"
/**
* _puts - ptrint a string
*
*@str: is a pointer
* Return: On succes string.
* On error.
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
