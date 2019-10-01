#include "holberton.h"
/**
* swap_int - swap two ints with a pointers
*
*@a: is a pointer
*@b: is a pointer
* Return: On succes none.
* On error.
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
