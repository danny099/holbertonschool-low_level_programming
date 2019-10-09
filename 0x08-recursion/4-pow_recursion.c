#include "holberton.h"

/**
*_pow_recursion - print a pow
*
*@x: is a number
*@y: is a number
* Return: On succes pow.
* On error.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
