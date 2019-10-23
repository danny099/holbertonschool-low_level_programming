#include "calc .h"
#include <stdlib.h>

/**
 * get_op_func - get a function
 *
 *@s: is a pointer
 * Return: On succes 1.
 * On error.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	
	while (ops[i].op != NULL)
	{
		if (ops[i].op != NULL)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
