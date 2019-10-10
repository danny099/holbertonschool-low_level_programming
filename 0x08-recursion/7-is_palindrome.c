#include "holberton.h"

/**
*is_palindrome - is palindrome?
*
*@s: is a pointer
* Return: On succes 1.
* On error.
*/

int is_palindrome(char *s)
{
	int count, ini, pal;

	ini = 0;
	count = _strlen_recursion(s);
	pal = _compare(s, ini, count - 1);
	if (pal == 0)
		return (0);
	return (1);

}

/**
*_compare - return a size
*
*@s: is a pointer
*ini: is number
*last: is number
* Return: On succes number.
* On error.
*/
int _compare(char *s, int ini, int last)
{

	if (ini < last)
	{
		if (s[ini] == s[last])
		{
			return (_compare(s, ini + 1, last - 1));
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

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
