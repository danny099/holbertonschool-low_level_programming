#ifndef VARIADIC
#define VARIADIC
#include <stdio.h>
#include <stdarg.h>

/**
 * struct args - structure of a arg
 * @format: Format
 * @f: is a pointer functiond
 *
 * Description: Longer description
 */

typedef struct args
{
	char *format;
	void (*f)(va_list);
} args_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
