#include "holberton.h"
/**
*print_sign - print a sign of number
*
*@n: is a number
* Return: On succes 1, 0, -1.
* On error.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
