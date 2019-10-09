#include "holberton.h"

/**
*is_prime_number - is prime number?
*
*@n: is a number
* Return: On succes 0 or 1.
* On error.
*/

int is_prime_number(int n)
{
	int i;

	i = prime(n, n / 2);
	if (i == 0)
		return (0);
	return (1);
}

/**
*prime - is prime?
*
*@n: is a number
*@i: is a number
* Return: On succes 0 or 1.
* On error.
*/

int prime(int n, int i)
{
	if (i == 0)
		return (0);
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}

