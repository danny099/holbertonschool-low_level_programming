#include "holberton.h"
/**
 * binary_to_uint - convert binary to int
 *
 *@b: is a pointer
 * Return: On succes.
 * On error.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num;

	num = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = (num * 2) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
