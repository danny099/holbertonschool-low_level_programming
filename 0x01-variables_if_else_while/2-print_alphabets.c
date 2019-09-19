#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			putchar('\n');
			letter = letter + 1;
		}
}
