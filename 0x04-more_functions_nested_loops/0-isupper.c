#include "holberton.h"
/**
* _isupper - what letter is upper
*
*@c: is a letter
* Return: On succes 1.
* On error.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
