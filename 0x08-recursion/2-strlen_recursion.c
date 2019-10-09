#include "holberton.h"

/**
*_strlen_recursion - return a size
*
*@s: is a pointer
* Return: On succes number.
* On error.
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{	
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
