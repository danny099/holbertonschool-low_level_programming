#include "holberton.h"
/**
* print_last_digit - print the last digit
*
*@a: is a number
* Return: On succes parameter a.
* On error.
*/
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = (a % 10) * -1;
		_putchar(a + '0');
		return (a);
	}
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
