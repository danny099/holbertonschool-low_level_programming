#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - print all natural number from n to 98
*
*@n:number
* Return: On success all natural numbers from n to 98.
* On error, dont return the numbers.
*/
void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
			printf("%d, ", n);
			}
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
			printf("%d, ", n);
			}
			n--;
		}
	}
}
