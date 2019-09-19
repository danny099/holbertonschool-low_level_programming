#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char U;
	int num;

	num = 0;
	U = 'a';
	while (num <= 9)
	{
		printf("%d", num);
		num = num + 1;
	}
	while (U <= 'f')
	{
		putchar(U);
		U = U + 1;
	}
	putchar('\n');
	return (0);
}
