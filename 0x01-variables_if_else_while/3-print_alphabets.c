#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c, U;

	c = 'a';
	U = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	while (U <= 'Z')
	{
		putchar(U);
		U = U + 1;
	}
	putchar('\n');
	return (0);
}
