#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - pirnt strings whit separator
 *
 *@separator: separator
 *@n: is a int
 * Return: On succes 1.
 * On error.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *arg;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(list, char*);
		if (arg == NULL)
		{
			printf("(nil)");
		}
		else if (i != (n - 1) && separator != NULL)
		{
			printf("%s%s", arg, separator);
		}
		else
		{
			printf("%s", arg);
		}
	}
	printf("\n");
	va_end(list);

}
