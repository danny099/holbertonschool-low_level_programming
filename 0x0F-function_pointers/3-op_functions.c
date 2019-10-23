#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - print a name
 *
 *@a: is a number
 *@b: is a number
 * Return: On succes 1.
 * On error.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - print a name
 *
 *@a: is a number
 *@b: is a number
 * Return: On succes 1.
 * On error.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - print a name
 *
 *@a: is a number
 *@b: is a number
 * Return: On succes 1.
 * On error.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - print a name
*
*@a: is a number
*@b: is a number
*Return: On succes 1.
* On error.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - print a name
*
*@a: is a number
*@b: is a number
* Return: On succes 1.
* On error.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
