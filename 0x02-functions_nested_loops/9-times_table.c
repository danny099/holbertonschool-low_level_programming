#include "holberton.h"
/**
* times_table - print 9 times table.
*
*
* Return: On succes print 9 times table.
* On error, dont return times table.
*/
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (j == 0 && mult / 10 == 0)
			{
				_putchar(mult % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9 && mult / 10 == 0)
			{
				_putchar(' ');
				_putchar(mult % 10 + '0');
			}
			else if (j == 9 && mult / 10 != 0)
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else if (mult / 10 == 0)
			{
				_putchar(' ');
				_putchar(mult % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
