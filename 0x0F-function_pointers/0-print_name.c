#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - print a name
*
*@name: is a pointer
*@f: is a function pointer
* Return: On succes 1.
* On error.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
