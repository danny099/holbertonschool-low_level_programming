#include "holberton.h"

/**
*_sqrt_recursion - print a sqrt
*
*@n: is a number
* Return: On succes pow.
* On error.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return  (square(n, 0));
}

/**
*square - square
*
*@n: is a number
*@i: is a number
* Return: On succes squere.
* On error.
*/

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (square(n, i + 1));
}
