#include "holberton.h"

/**
*_print_rev_recursion - print a reverse string
*
*@s: is a pointer
* Return: On succes rev.
* On error.
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
