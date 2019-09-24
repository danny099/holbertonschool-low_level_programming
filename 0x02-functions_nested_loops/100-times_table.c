#include "holberton.h"
/**
* print_times_table - print times tables.
*
*@n:is a number
* Return: On succes print times table.
* On error, dont return times table.
*/
void print_times_table(int n)
{
	int i, j, mult, m;
	
	if(n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				if(mult < 100)
				{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
				_putchar(' ');
				}
				else
				{
					m = mult / 10;
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
					_putchar(mult % 10 + '0');
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
