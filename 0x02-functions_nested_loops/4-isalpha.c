#include "holberton.h"
/**
* _islower - what letter is lower
*
*
* Return: On succes 0.
* On error.
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
