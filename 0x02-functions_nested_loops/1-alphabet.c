#include "holberton.h"
/**
* print_alphabet - writes the lowercase letters
*
*
* Return: On success lowercase letters.
* On error, dont return lowercase letters.
*/
void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
