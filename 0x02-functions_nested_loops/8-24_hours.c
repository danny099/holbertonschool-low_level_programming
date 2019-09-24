#include "holberton.h"
/**
* print_alphabet x10 - writes the lowercase letters
*
*
* Return: On success lowercase letters.
* On error, dont return lowercase letters.
*/
void jack_bauer(void)
{

	int i = 0, j = 0;

	while (i < 24)
	{
		j = -1;
		while (j < 59)
		{
			++j;
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	i++;
	}
}
