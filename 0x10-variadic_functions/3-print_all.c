# include  "variadic_functions.h"
/**
 * print_char - print char
 * @list: list of args
 * Return: void
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_integer - print integer
 * @list: list of args
 * Return: void
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - print float
 * @list: list of args
 * Return: void
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - print string
 * @list: list of args
 * Return: void
 */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - print all
 * @format: format
 * Return: void
 **/
void print_all(const char * const format, ...)
{
	va_list list;
	args_t args[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j;
	char *separator = "";

	i = 0;
	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == args[j].format[0])
			{
				printf("%s", separator);
				args[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
