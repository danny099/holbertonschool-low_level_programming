#include "holberton.h"

/**
*factorial - factorial number
*
*@n: is a number
* Return: On succes n.
* On error.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
