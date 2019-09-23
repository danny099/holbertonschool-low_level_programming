#include "holberton.h"
/**
* _islower - what letter is lower
*
*
* Return: On succes 0.
* On error.
*/
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = (a%10) * -1;
		_putchar(a + '0');
		return (a);
	}
	a = a%10;
	_putchar(a + '0');
	return (a);
}
