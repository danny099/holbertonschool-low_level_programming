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
	int num, num2;

	num = 0;
	num2 = 0;
	while (num <= 9)
	{
		while (num2 <= 9)
		{
			putchar(num % 10 + '0');
			putchar(num2 % 10 + '0');
			if (num <= 9 && num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num++;
		num2 = 0;
	}
	putchar('\n');
	return (0);
}
