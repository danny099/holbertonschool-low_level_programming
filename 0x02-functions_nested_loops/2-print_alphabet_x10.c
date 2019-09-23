#include "holberton.h"
/**
* print_alphabet x10 - writes the lowercase letters
*
*
* Return: On success lowercase letters.
* On error, dont return lowercase letters.
*/
void print_alphabet_x10(void)
{
	char letter;
	int i;

	letter = 'a';
	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	letter = 'a';
	_putchar('\n');
	}
}
