#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - pirnt numbers whit separator
 *
 *@separator: separator
 *@n: is a int
 * Return: On succes 1.
 * On error.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1)  && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
