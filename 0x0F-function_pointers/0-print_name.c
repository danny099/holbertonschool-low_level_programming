#include "function_pointers.h"
#include <stdio.h>

/**
* _isupper - what letter is upper
*
*@c: is a letter
* Return: On succes 1.
* On error.
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
