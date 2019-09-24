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
	
	i = 0;

	while(i <= 9)
	{
		j = 0;
		while(j <= 9)
		{
			mult = i*j;
			if(j == 0 && mult/10 == 0)
			{
				_putchar(mult%10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if(j == 9 && mult/10 == 0)
			{
				_putchar(' ');
				_putchar(mult%10 + '0');
			}
			else if (j == 9 && mult/10 != 0)
			{
				_putchar(mult/10 + '0');
				_putchar(mult%10 + '0');
			}
			else if(mult/10 == 0)
			{
				_putchar(' ');
				_putchar(mult%10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(mult/10 + '0');
				_putchar(mult%10 + '0');
				_putchar(',');
				_putchar(' ');

			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
