#include "holberton.h"
/**
* _abs - return de absolute valor
*
*@a: is a number
* Return: On succes parameter a.
* On error.
*/
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
}
