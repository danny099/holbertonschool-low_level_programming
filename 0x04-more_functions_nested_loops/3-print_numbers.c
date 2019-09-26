#include "holberton.h"
/**
*print_numbers - print numbers
*
*
* Return: On (succes) numbers 0-9.
* On error, dont return numbers.
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
