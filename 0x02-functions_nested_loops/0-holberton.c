#include <stdlib.h>
#include "holberton.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char hol[] = "Holberton";

	for (i = 0; i <= 9; i++)
	{
		_putchar(hol[i]);
	}
	_putchar('\n');
	return (0);
}
