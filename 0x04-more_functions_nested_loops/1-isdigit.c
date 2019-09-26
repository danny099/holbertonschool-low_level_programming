#include "holberton.h"
/**
* _isdigit - what character is number
*
*@c: is a character
* Return: On succes 1.
* On error.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
