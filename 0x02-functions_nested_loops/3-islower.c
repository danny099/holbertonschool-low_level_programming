#include "holberton.h"
/**
* _islower - what letter is lower
*
*
* Return: On succes 0.
* On error.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
