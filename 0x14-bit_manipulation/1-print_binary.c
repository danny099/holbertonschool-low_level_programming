#include "holberton.h"
/**
 * print_binary - convert int to binary
 *
 *@n: is a unsigned long int
 * Return: On succes.
 * On error.
 */

void print_binary(unsigned long int n)
{
	int limit, b;

	limit = 1;
	b = 0;
	if (n == 0)
	{
		printf("0");
	}
	else
	{
		limit <<= 63;
		while (limit)
		{
			if ((n & limit) == 0 && b)
			{
				printf("0");
			}
			if ((n & limit) != 0)
			{
				printf("1");
				b = 1;
			}
			limit >>= 1;
		}
	}
}
