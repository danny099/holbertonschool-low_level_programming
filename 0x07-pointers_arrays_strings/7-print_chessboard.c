#include "holberton.h"
#include <stdio.h>
/**
*print_chessboard - print chessboard
*
*@a: is a pointer
* Return: On succes chess board.
* On error.
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
