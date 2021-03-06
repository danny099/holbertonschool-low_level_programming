#include "holberton.h"
/**
 * clear_bit - clear a bit
 *
 *@n: is a pointer
 *@index: is a unsigned int
 * Return: On succes.
 * On error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return  (-1);
	}
	*n = *n & (~(1 << index));
	return (1);
}
